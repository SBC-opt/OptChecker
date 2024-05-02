//===--- Ab2dceCheck.cpp - clang-tidy -------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "Ab2dceCheck.h"
#include "clang/AST/ASTContext.h"
#include "clang/AST/Stmt.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Basic/SourceLocation.h"
#include <clang/AST/Expr.h>
#include <fstream>
#include <utility>
#include <vector>
#include <string>
#include "clang/Lex/Lexer.h"

using namespace clang::ast_matchers;

namespace clang::tidy::misc {

void Ab2dceCheck::registerMatchers(MatchFinder *Finder) {
  Finder->addMatcher(
    binaryOperator(
      hasOperatorName("+"),
      hasAncestor(
        functionDecl(hasName("test")).bind("func")
      ),
      anyOf(
        hasAncestor(
          declStmt().bind("stmt")
        ),
        hasAncestor(
          binaryOperator(hasOperatorName("=")).bind("stmt")
        ),
        hasAncestor(
          binaryOperator(hasOperatorName("+=")).bind("stmt")
        )
      )
    ).bind("Op"), this);
}

VarDecl* Ab2dceCheck::findlvd(Expr* expr)
{
  VarDecl *ret=NULL;
  if (DeclRefExpr *DRE = dyn_cast<DeclRefExpr>(expr)) {
  // It's a reference to a declaration...
    if (VarDecl *VD = dyn_cast<VarDecl>(DRE->getDecl())) {
    // It's a reference to a variable (a local, function parameter, global, or static data member).
      ret=VD;
    }
  }

  return ret;
}
VarDecl* Ab2dceCheck::findrvd(Expr* expr)
{
  VarDecl *ret=NULL;
  if (DeclRefExpr *DRE = dyn_cast<DeclRefExpr>(expr)) {
  // It's a reference to a declaration...
    if (VarDecl *VD = dyn_cast<VarDecl>(DRE->getDecl())) {
    // It's a reference to a variable (a local, function parameter, global, or static data member).
      ret=VD;
    }
  }
  return ret;
}


void Ab2dceCheck::insertDST(const BinaryOperator* BO, VarDecl *LVD, VarDecl *RVD, SourceLocation Loc)
{
  std::ofstream out;
  out.open(fileLoc+"/cse.txt",std::ios::app);
  out<<addpair_size;
  for(int i=0;i<addpair.size();i++)
  {
    if(addpair[i]==std::make_pair(LVD,RVD))
    {
      num++;
      std::string insertcode="\nif (myinsertn" + std::to_string(i);
      insertcode+= " != " ;
      insertcode+=LVD->getQualifiedNameAsString()+" + "+RVD->getQualifiedNameAsString()
                +"){ myMark="+std::to_string(addpair_size)+"; }\n";
      diag(Loc, insertcode)
            << FixItHint::CreateInsertion(Loc, insertcode);
      
      out<<" "<<i;
    }
  }
  out<<std::endl;
  out.close();
}



void Ab2dceCheck::insertSRC(const BinaryOperator* BO, VarDecl *LVD, VarDecl *RVD, SourceLocation Loc)
{
  std::string var_type = "int";
  QualType type = LVD->getType();
  var_type = type.getAsString();
  if(var_type==std::string("_Bool")) var_type="bool";

  std::string str1="extern "+var_type+" myinsertn"+std::to_string(addpair_size)+";\n";
  std::ofstream out;
  out.open(fileLoc+"/init.h",std::ios::app);
  out<<str1<<std::endl;
  out.close();
  //diag(beginloc, str1)
       // << FixItHint::CreateInsertion(beginloc, str1);
  std::string insertcode="\nmyinsertn" + std::to_string(addpair_size);
  insertcode+= " = " ;
  insertcode+=LVD->getQualifiedNameAsString()+" + "+RVD->getQualifiedNameAsString()+";\n";
  diag(Loc, insertcode)
        << FixItHint::CreateInsertion(Loc, insertcode);

  addpair.push_back(std::make_pair(LVD,RVD));
  addpair_size++;
}

void Ab2dceCheck::check(const MatchFinder::MatchResult &Result) {
  // FIXME: Add callback implementation.
  const auto *stmt = Result.Nodes.getNodeAs<Stmt>("stmt");
  const auto* func=Result.Nodes.getNodeAs<FunctionDecl>("func");
  
  beginloc=func->getBody()->getSourceRange().getBegin().getLocWithOffset(1);
    
  const auto *BO = Result.Nodes.getNodeAs<BinaryOperator>("Op");
  auto *Lhs= BO->getLHS()->IgnoreParenImpCasts();
  auto *Rhs= BO->getRHS()->IgnoreParenImpCasts();

  VarDecl *LVD=findlvd(Lhs);
  VarDecl *RVD=findrvd(Rhs);

  if(LVD&&RVD)
  {
    std::pair<VarDecl*, VarDecl*> thispair1=std::make_pair(LVD,RVD);
    std::pair<VarDecl*, VarDecl*> thispair2=std::make_pair(RVD,LVD);

    std::string diagLoc=BO->getOperatorLoc().printToString(Result.Context->getSourceManager());
    fileLoc=diagLoc.substr(0, diagLoc.find_last_of('/'));
    diag(BO->getOperatorLoc(), diagLoc);

    num=0;
    //dst
    if(std::find(addpair.begin(), addpair.end(), thispair1) != addpair.end())
    {
      auto Loc=stmt->getBeginLoc();
      insertDST(BO,LVD,RVD,Loc);
    }
    if(std::find(addpair.begin(), addpair.end(), thispair2) != addpair.end())
    {
      auto Loc=stmt->getBeginLoc();
      insertDST(BO,RVD,LVD,Loc);
    }

    //if(num!=0){
    std::ofstream out;
    out.open(fileLoc+"/out1.txt",std::ios::app);
    out<<addpair_size<<" "<<num<<" "<<diagLoc<<std::endl;
    out.close();
    //}

    //插入src
    //auto Loc=Lexer::getLocForEndOfToken(stmt->getEndLoc(),0,Result.Context->getSourceManager(),Result.Context->getLangOpts());
    //if (((BinaryOperator*)stmt)->getOpcode()){ Loc=Loc.getLocWithOffset(1);}
    auto Loc=stmt->getBeginLoc();
    insertSRC(BO,LVD,RVD,Loc);
  }

}


} // namespace clang::tidy::misc

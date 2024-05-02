//===--- Licm2cpCheck.cpp - clang-tidy ------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "Licm2cpCheck.h"
#include "clang/AST/ASTContext.h"
#include "clang/AST/Stmt.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Basic/SourceLocation.h"
#include <clang/AST/Expr.h>
#include <fstream>
#include <utility>
#include <vector>
#include <string>

using namespace clang::ast_matchers;

namespace clang::tidy::misc {

void Licm2cpCheck::registerMatchers(MatchFinder *Finder) {
  Finder->addMatcher(
    binaryOperator(
      hasAncestor(
        functionDecl(hasName("test")).bind("func")
      ),
      hasAncestor(
        forStmt().bind("loopstmt")
      ),
      anyOf(
        hasOperatorName("="),
        hasOperatorName("+="),
        hasOperatorName("-="),
        hasOperatorName("*=")
      ),
      hasLHS(declRefExpr().bind("lhs")),
      hasRHS(expr().bind("rhs"))
    ).bind("assignment"), this);
}
std::vector<std::string> exps1;
int expn1 = 0;
void Licm2cpCheck::check(const MatchFinder::MatchResult &Result) {
  
  const auto *stmt = Result.Nodes.getNodeAs<BinaryOperator>("assignment");
  const auto* loopstmt=Result.Nodes.getNodeAs<Stmt>("loopstmt");
  auto stmtLoc=stmt->getBeginLoc();
  auto loopLoc=loopstmt->getBeginLoc();

  std::string loc1=stmt->getBeginLoc().printToString(Result.Context->getSourceManager());
  std::string loc2=loopstmt->getBeginLoc().printToString(Result.Context->getSourceManager());
  size_t pos1 = loc1.find(':');size_t pos2 = loc1.substr(pos1+1,loc1.size()).find(':');
  loc1=loc1.substr(pos1+1,pos2);
  pos1 = loc2.find(':');pos2 = loc2.substr(pos1+1,loc2.size()).find(':');
  loc2=loc2.substr(pos1+1,pos2);
  if(loc1==loc2) return;
  
  const clang::Expr *exp = Result.Nodes.getNodeAs<Expr>("rhs");
  std::string startloc=exp->getBeginLoc().printToString(Result.Context->getSourceManager());
  std::string endloc=exp->getEndLoc().printToString(Result.Context->getSourceManager());
  //std::cout<<startloc<<" "<<endloc<<std::endl;

  fileLoc=startloc.substr(0, startloc.find_last_of('/'));

  const char* b = Result.Context->getSourceManager().getCharacterData(exp->getBeginLoc());
  const char* e = Result.Context->getSourceManager().getCharacterData(exp->getEndLoc());
  std::string expstr(b,e-b+1);
  //std::cout<<expstr<<std::endl;

  size_t found = expstr.find("i_");
  if (found != std::string::npos) return;

  std::string var_type = "int";
  const auto *var = Result.Nodes.getNodeAs<DeclRefExpr>("lhs");
  if (const VarDecl *VD = dyn_cast<VarDecl>(var->getDecl())) {
      QualType type = VD->getType();
      var_type = type.getAsString();
      if(var_type==std::string("_Bool")) var_type="bool";
  }

  std::string str1="\nextern "+var_type+" myInsert"+std::to_string(expn1)+";\n";
  std::string str2="extern "+var_type+" myMark"+std::to_string(expn1)+";\n";
  std::ofstream out;
  out.open(fileLoc+"/init.h",std::ios::app);
  out<<str1<<str2;
  out.close();

  std::string insertcode0="myInsert" + std::to_string(expn1)+"="+expstr+";\n";
  diag(loopLoc, insertcode0)
      << FixItHint::CreateInsertion(loopLoc, insertcode0);

  std::string insertcode1="myMark" + std::to_string(expn1)+"="+expstr+";";
  insertcode1+= "myMark" + std::to_string(expn1)+"="+"myMark" + std::to_string(expn1)
      +"-"+"myInsert" + std::to_string(expn1)+";\n";
  diag(stmtLoc, insertcode1)
      << FixItHint::CreateInsertion(stmtLoc, insertcode1);

  exps1.push_back(expstr);
  expn1++;

  out.open(fileLoc+"/Marks.txt",std::ios::app);
  out<<expn1-1<<" "<<startloc<<std::endl;
  out.close();
}

} // namespace clang::tidy::misc

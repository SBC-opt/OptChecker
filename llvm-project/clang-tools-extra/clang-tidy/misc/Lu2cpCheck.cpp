//===--- Lu2cpCheck.cpp - clang-tidy --------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "Lu2cpCheck.h"
#include "clang/AST/ASTContext.h"
#include "clang/AST/Stmt.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Basic/SourceLocation.h"
#include <clang/AST/Expr.h>
#include <fstream>
#include <utility>
#include <vector>
#include <string>
#include <iostream>

using namespace clang::ast_matchers;

namespace clang::tidy::misc {

void Lu2cpCheck::registerMatchers(MatchFinder *Finder) {
  // FIXME: Add matchers.
  Finder->addMatcher(
    ifStmt(
      hasAncestor(
        forStmt().bind("loopstmt")
      ),
      hasAncestor(
        functionDecl(hasName("test")).bind("func")
      )
    ).bind("ifstmt"), this);
}

std::vector<std::string> exps;
int expn = 0;
void Lu2cpCheck::check(const MatchFinder::MatchResult &Result) {
  
  const auto *stmt = Result.Nodes.getNodeAs<IfStmt>("ifstmt");
  const auto* loopstmt=Result.Nodes.getNodeAs<Stmt>("loopstmt");
  auto stmtLoc=stmt->getBeginLoc();
  auto loopLoc=loopstmt->getBeginLoc();
  
  const clang::Expr *exp = stmt->getCond();
  std::string startloc=exp->getBeginLoc().printToString(Result.Context->getSourceManager());
  std::string endloc=exp->getEndLoc().printToString(Result.Context->getSourceManager());
  //std::cout<<startloc<<" "<<endloc<<std::endl;

  fileLoc=startloc.substr(0, startloc.find_last_of('/'));

  const char* b = Result.Context->getSourceManager().getCharacterData(exp->getBeginLoc());
  const char* e = Result.Context->getSourceManager().getCharacterData(exp->getEndLoc());
  std::string expstr(b,e-b+1);
  std::cout<<expstr<<std::endl;

  std::string str1="\nextern int myInsert"+std::to_string(expn)+";\n";
  std::string str2="extern int myMark"+std::to_string(expn)+";\n";
  std::ofstream out;
  out.open(fileLoc+"/init.h",std::ios::app);
  out<<str1<<str2;
  out.close();

  std::string insertcode0="myInsert" + std::to_string(expn)+"="+expstr+";\n";
  diag(loopLoc, insertcode0)
      << FixItHint::CreateInsertion(loopLoc, insertcode0);

  std::string insertcode1="myMark" + std::to_string(expn)+"="+expstr+";";
  insertcode1+= "myMark" + std::to_string(expn)+"="+"myMark" + std::to_string(expn)
      +"-"+"myInsert" + std::to_string(expn)+";\n";
  diag(stmtLoc, insertcode1)
      << FixItHint::CreateInsertion(stmtLoc, insertcode1);

  exps.push_back(expstr);
  expn++;

  out.open(fileLoc+"/Marks.txt",std::ios::app);
  out<<expn-1<<" "<<startloc<<std::endl;
  out.close();
}

} // namespace clang::tidy::misc


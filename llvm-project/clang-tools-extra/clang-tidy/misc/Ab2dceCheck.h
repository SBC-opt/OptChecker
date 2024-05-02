//===--- Ab2dceCheck.h - clang-tidy -----------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_MISC_AB2DCECHECK_H
#define LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_MISC_AB2DCECHECK_H

#include "../ClangTidyCheck.h"

namespace clang::tidy::misc {

/// FIXME: Write a short description.
///
/// For the user-facing documentation see:
/// http://clang.llvm.org/extra/clang-tidy/checks/misc/ab2dce.html
class Ab2dceCheck : public ClangTidyCheck {
public:
  Ab2dceCheck(StringRef Name, ClangTidyContext *Context)
      : ClangTidyCheck(Name, Context) {}
  void registerMatchers(ast_matchers::MatchFinder *Finder) override;
  void check(const ast_matchers::MatchFinder::MatchResult &Result) override;
  void insertSRC(const BinaryOperator* BO, VarDecl *LVD, VarDecl *RVD, SourceLocation Loc);
  void insertDST(const BinaryOperator* BO, VarDecl *LVD, VarDecl *RVD, SourceLocation Loc);
  VarDecl* findlvd(Expr* expr);
  VarDecl* findrvd(Expr* expr);

  std::vector<std::pair<VarDecl*, VarDecl*>> addpair;
  int addpair_size = 0;

  int num=0;
  std::string fileLoc;

  SourceLocation beginloc;
};

} // namespace clang::tidy::misc

#endif // LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_MISC_AB2DCECHECK_H

﻿/***********************************************************************//**
	@file
***************************************************************************/
#include "alsio/compiler/Compiler.hpp"
#include "alsio/compiler/Scope.hpp"

namespace alsio::compiler {
/***********************************************************************//**
	@brief 
***************************************************************************/
void Compiler::pushScope(const ScopePtr& scope) {
  if(scope->getParent() != scope_) {
    scope_->appendChild(scope);
    scope->setParent(scope_);
  }
  scope_ = scope;
}
/***********************************************************************//**
	@brief 
***************************************************************************/
void Compiler::popScope() {
  assert(scope_);
  scope_ = scope_->getParent();
}
/***********************************************************************//**
	$Id$
***************************************************************************/
}

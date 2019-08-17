
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment1/Grammer\calc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "calcListener.h"


/**
 * This class provides an empty implementation of calcListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  calcBaseListener : public calcListener {
public:

  virtual void enterInput(calcParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(calcParser::InputContext * /*ctx*/) override { }

  virtual void enterExpr_raw_multiplicative(calcParser::Expr_raw_multiplicativeContext * /*ctx*/) override { }
  virtual void exitExpr_raw_multiplicative(calcParser::Expr_raw_multiplicativeContext * /*ctx*/) override { }

  virtual void enterExpr_additive(calcParser::Expr_additiveContext * /*ctx*/) override { }
  virtual void exitExpr_additive(calcParser::Expr_additiveContext * /*ctx*/) override { }

  virtual void enterExpr_power(calcParser::Expr_powerContext * /*ctx*/) override { }
  virtual void exitExpr_power(calcParser::Expr_powerContext * /*ctx*/) override { }

  virtual void enterExpr_multiplicative(calcParser::Expr_multiplicativeContext * /*ctx*/) override { }
  virtual void exitExpr_multiplicative(calcParser::Expr_multiplicativeContext * /*ctx*/) override { }

  virtual void enterExpr_unary(calcParser::Expr_unaryContext * /*ctx*/) override { }
  virtual void exitExpr_unary(calcParser::Expr_unaryContext * /*ctx*/) override { }

  virtual void enterExpr_none(calcParser::Expr_noneContext * /*ctx*/) override { }
  virtual void exitExpr_none(calcParser::Expr_noneContext * /*ctx*/) override { }

  virtual void enterParen_expr(calcParser::Paren_exprContext * /*ctx*/) override { }
  virtual void exitParen_expr(calcParser::Paren_exprContext * /*ctx*/) override { }

  virtual void enterNum(calcParser::NumContext * /*ctx*/) override { }
  virtual void exitNum(calcParser::NumContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};



// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment1/Grammer\calc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "calcParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by calcParser.
 */
class  calcListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInput(calcParser::InputContext *ctx) = 0;
  virtual void exitInput(calcParser::InputContext *ctx) = 0;

  virtual void enterExpr_raw_multiplicative(calcParser::Expr_raw_multiplicativeContext *ctx) = 0;
  virtual void exitExpr_raw_multiplicative(calcParser::Expr_raw_multiplicativeContext *ctx) = 0;

  virtual void enterExpr_additive(calcParser::Expr_additiveContext *ctx) = 0;
  virtual void exitExpr_additive(calcParser::Expr_additiveContext *ctx) = 0;

  virtual void enterExpr_power(calcParser::Expr_powerContext *ctx) = 0;
  virtual void exitExpr_power(calcParser::Expr_powerContext *ctx) = 0;

  virtual void enterExpr_multiplicative(calcParser::Expr_multiplicativeContext *ctx) = 0;
  virtual void exitExpr_multiplicative(calcParser::Expr_multiplicativeContext *ctx) = 0;

  virtual void enterExpr_unary(calcParser::Expr_unaryContext *ctx) = 0;
  virtual void exitExpr_unary(calcParser::Expr_unaryContext *ctx) = 0;

  virtual void enterExpr_none(calcParser::Expr_noneContext *ctx) = 0;
  virtual void exitExpr_none(calcParser::Expr_noneContext *ctx) = 0;

  virtual void enterParen_expr(calcParser::Paren_exprContext *ctx) = 0;
  virtual void exitParen_expr(calcParser::Paren_exprContext *ctx) = 0;

  virtual void enterNum(calcParser::NumContext *ctx) = 0;
  virtual void exitNum(calcParser::NumContext *ctx) = 0;


};


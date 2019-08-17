
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

  virtual void enterExpr_none(calcParser::Expr_noneContext *ctx) = 0;
  virtual void exitExpr_none(calcParser::Expr_noneContext *ctx) = 0;

  virtual void enterFunction_call(calcParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(calcParser::Function_callContext *ctx) = 0;

  virtual void enterConstant(calcParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(calcParser::ConstantContext *ctx) = 0;

  virtual void enterParen_expr(calcParser::Paren_exprContext *ctx) = 0;
  virtual void exitParen_expr(calcParser::Paren_exprContext *ctx) = 0;

  virtual void enterFp_num(calcParser::Fp_numContext *ctx) = 0;
  virtual void exitFp_num(calcParser::Fp_numContext *ctx) = 0;

  virtual void enterInteger(calcParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(calcParser::IntegerContext *ctx) = 0;

  virtual void enterString(calcParser::StringContext *ctx) = 0;
  virtual void exitString(calcParser::StringContext *ctx) = 0;


};


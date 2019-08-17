
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment1/Grammer\calc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "calcVisitor.h"


/**
 * This class provides an empty implementation of calcVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  calcBaseVisitor : public calcVisitor {
public:

  virtual antlrcpp::Any visitInput(calcParser::InputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_raw_multiplicative(calcParser::Expr_raw_multiplicativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_additive(calcParser::Expr_additiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_power(calcParser::Expr_powerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_multiplicative(calcParser::Expr_multiplicativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_none(calcParser::Expr_noneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(calcParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(calcParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParen_expr(calcParser::Paren_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFp_num(calcParser::Fp_numContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger(calcParser::IntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(calcParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }


};


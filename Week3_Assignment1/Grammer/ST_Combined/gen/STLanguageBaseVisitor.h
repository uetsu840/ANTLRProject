
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer/ST_Combined\STLanguage.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "STLanguageVisitor.h"


/**
 * This class provides an empty implementation of STLanguageVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  STLanguageBaseVisitor : public STLanguageVisitor {
public:

  virtual antlrcpp::Any visitInput(STLanguageParser::InputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(STLanguageParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_statement(STLanguageParser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_statement(STLanguageParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_statement(STLanguageParser::While_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_statement(STLanguageParser::For_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeat_statement(STLanguageParser::Repeat_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_statement(STLanguageParser::Case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToken_case_label(STLanguageParser::Token_case_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(STLanguageParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(STLanguageParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_in_argument(STLanguageParser::Func_in_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_out_argument(STLanguageParser::Func_out_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign_operator(STLanguageParser::Assign_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompare_operator(STLanguageParser::Compare_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign_operator_out(STLanguageParser::Assign_operator_outContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_operator_post(STLanguageParser::Unary_operator_postContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_operator_pre(STLanguageParser::Unary_operator_preContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArith_operator_muldiv(STLanguageParser::Arith_operator_muldivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArith_operator_addsub(STLanguageParser::Arith_operator_addsubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(STLanguageParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImmediate(STLanguageParser::ImmediateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(STLanguageParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }


};


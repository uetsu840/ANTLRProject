
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer/ST_Normal\STLanguageParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "STLanguageParserVisitor.h"


/**
 * This class provides an empty implementation of STLanguageParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  STLanguageParserBaseVisitor : public STLanguageParserVisitor {
public:

  virtual antlrcpp::Any visitInput(STLanguageParser::InputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(STLanguageParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_statement(STLanguageParser::Single_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call_statement(STLanguageParser::Function_call_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_statement(STLanguageParser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_statement(STLanguageParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_statement_main_clause(STLanguageParser::If_statement_main_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_statement_elif_clause(STLanguageParser::If_statement_elif_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_statement_else_clause(STLanguageParser::If_statement_else_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_clause(STLanguageParser::If_clauseContext *ctx) override {
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

  virtual antlrcpp::Any visitRepeat_exit_statement(STLanguageParser::Repeat_exit_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_statement(STLanguageParser::Case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_one_selection(STLanguageParser::Case_one_selectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToken_case_label(STLanguageParser::Token_case_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_label_value(STLanguageParser::Case_label_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_label_range(STLanguageParser::Case_label_rangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign_statement(STLanguageParser::Assign_statementContext *ctx) override {
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

  virtual antlrcpp::Any visitCompare_operator_cmp(STLanguageParser::Compare_operator_cmpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompare_operator_eq(STLanguageParser::Compare_operator_eqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign_operator_out(STLanguageParser::Assign_operator_outContext *ctx) override {
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

  virtual antlrcpp::Any visitImmediate_dec_number(STLanguageParser::Immediate_dec_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImmediate_hex_number(STLanguageParser::Immediate_hex_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImmediate_oct_number(STLanguageParser::Immediate_oct_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImmediate_bin_Number(STLanguageParser::Immediate_bin_NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImmediate_fp_number(STLanguageParser::Immediate_fp_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(STLanguageParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }


};


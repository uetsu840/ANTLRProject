
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer/ST_Combined\STLanguage.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "STLanguageParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by STLanguageParser.
 */
class  STLanguageListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInput(STLanguageParser::InputContext *ctx) = 0;
  virtual void exitInput(STLanguageParser::InputContext *ctx) = 0;

  virtual void enterStatement(STLanguageParser::StatementContext *ctx) = 0;
  virtual void exitStatement(STLanguageParser::StatementContext *ctx) = 0;

  virtual void enterReturn_statement(STLanguageParser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(STLanguageParser::Return_statementContext *ctx) = 0;

  virtual void enterIf_statement(STLanguageParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(STLanguageParser::If_statementContext *ctx) = 0;

  virtual void enterWhile_statement(STLanguageParser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(STLanguageParser::While_statementContext *ctx) = 0;

  virtual void enterFor_statement(STLanguageParser::For_statementContext *ctx) = 0;
  virtual void exitFor_statement(STLanguageParser::For_statementContext *ctx) = 0;

  virtual void enterRepeat_statement(STLanguageParser::Repeat_statementContext *ctx) = 0;
  virtual void exitRepeat_statement(STLanguageParser::Repeat_statementContext *ctx) = 0;

  virtual void enterCase_statement(STLanguageParser::Case_statementContext *ctx) = 0;
  virtual void exitCase_statement(STLanguageParser::Case_statementContext *ctx) = 0;

  virtual void enterToken_case_label(STLanguageParser::Token_case_labelContext *ctx) = 0;
  virtual void exitToken_case_label(STLanguageParser::Token_case_labelContext *ctx) = 0;

  virtual void enterExpression(STLanguageParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(STLanguageParser::ExpressionContext *ctx) = 0;

  virtual void enterFunction_call(STLanguageParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(STLanguageParser::Function_callContext *ctx) = 0;

  virtual void enterFunc_in_argument(STLanguageParser::Func_in_argumentContext *ctx) = 0;
  virtual void exitFunc_in_argument(STLanguageParser::Func_in_argumentContext *ctx) = 0;

  virtual void enterFunc_out_argument(STLanguageParser::Func_out_argumentContext *ctx) = 0;
  virtual void exitFunc_out_argument(STLanguageParser::Func_out_argumentContext *ctx) = 0;

  virtual void enterAssign_operator(STLanguageParser::Assign_operatorContext *ctx) = 0;
  virtual void exitAssign_operator(STLanguageParser::Assign_operatorContext *ctx) = 0;

  virtual void enterCompare_operator(STLanguageParser::Compare_operatorContext *ctx) = 0;
  virtual void exitCompare_operator(STLanguageParser::Compare_operatorContext *ctx) = 0;

  virtual void enterAssign_operator_out(STLanguageParser::Assign_operator_outContext *ctx) = 0;
  virtual void exitAssign_operator_out(STLanguageParser::Assign_operator_outContext *ctx) = 0;

  virtual void enterUnary_operator_post(STLanguageParser::Unary_operator_postContext *ctx) = 0;
  virtual void exitUnary_operator_post(STLanguageParser::Unary_operator_postContext *ctx) = 0;

  virtual void enterUnary_operator_pre(STLanguageParser::Unary_operator_preContext *ctx) = 0;
  virtual void exitUnary_operator_pre(STLanguageParser::Unary_operator_preContext *ctx) = 0;

  virtual void enterArith_operator_muldiv(STLanguageParser::Arith_operator_muldivContext *ctx) = 0;
  virtual void exitArith_operator_muldiv(STLanguageParser::Arith_operator_muldivContext *ctx) = 0;

  virtual void enterArith_operator_addsub(STLanguageParser::Arith_operator_addsubContext *ctx) = 0;
  virtual void exitArith_operator_addsub(STLanguageParser::Arith_operator_addsubContext *ctx) = 0;

  virtual void enterValue(STLanguageParser::ValueContext *ctx) = 0;
  virtual void exitValue(STLanguageParser::ValueContext *ctx) = 0;

  virtual void enterImmediate(STLanguageParser::ImmediateContext *ctx) = 0;
  virtual void exitImmediate(STLanguageParser::ImmediateContext *ctx) = 0;

  virtual void enterVariable(STLanguageParser::VariableContext *ctx) = 0;
  virtual void exitVariable(STLanguageParser::VariableContext *ctx) = 0;


};


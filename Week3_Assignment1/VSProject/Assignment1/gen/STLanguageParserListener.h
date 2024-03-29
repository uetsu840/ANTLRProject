
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer/ST_Normal\STLanguageParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "STLanguageParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by STLanguageParser.
 */
class  STLanguageParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInput(STLanguageParser::InputContext *ctx) = 0;
  virtual void exitInput(STLanguageParser::InputContext *ctx) = 0;

  virtual void enterStatement(STLanguageParser::StatementContext *ctx) = 0;
  virtual void exitStatement(STLanguageParser::StatementContext *ctx) = 0;

  virtual void enterSingle_statement(STLanguageParser::Single_statementContext *ctx) = 0;
  virtual void exitSingle_statement(STLanguageParser::Single_statementContext *ctx) = 0;

  virtual void enterFunction_call_statement(STLanguageParser::Function_call_statementContext *ctx) = 0;
  virtual void exitFunction_call_statement(STLanguageParser::Function_call_statementContext *ctx) = 0;

  virtual void enterReturn_statement(STLanguageParser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(STLanguageParser::Return_statementContext *ctx) = 0;

  virtual void enterIf_statement(STLanguageParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(STLanguageParser::If_statementContext *ctx) = 0;

  virtual void enterIf_statement_main_clause(STLanguageParser::If_statement_main_clauseContext *ctx) = 0;
  virtual void exitIf_statement_main_clause(STLanguageParser::If_statement_main_clauseContext *ctx) = 0;

  virtual void enterIf_statement_elif_clause(STLanguageParser::If_statement_elif_clauseContext *ctx) = 0;
  virtual void exitIf_statement_elif_clause(STLanguageParser::If_statement_elif_clauseContext *ctx) = 0;

  virtual void enterIf_statement_else_clause(STLanguageParser::If_statement_else_clauseContext *ctx) = 0;
  virtual void exitIf_statement_else_clause(STLanguageParser::If_statement_else_clauseContext *ctx) = 0;

  virtual void enterIf_clause(STLanguageParser::If_clauseContext *ctx) = 0;
  virtual void exitIf_clause(STLanguageParser::If_clauseContext *ctx) = 0;

  virtual void enterWhile_statement(STLanguageParser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(STLanguageParser::While_statementContext *ctx) = 0;

  virtual void enterFor_statement(STLanguageParser::For_statementContext *ctx) = 0;
  virtual void exitFor_statement(STLanguageParser::For_statementContext *ctx) = 0;

  virtual void enterRepeat_statement(STLanguageParser::Repeat_statementContext *ctx) = 0;
  virtual void exitRepeat_statement(STLanguageParser::Repeat_statementContext *ctx) = 0;

  virtual void enterRepeat_exit_statement(STLanguageParser::Repeat_exit_statementContext *ctx) = 0;
  virtual void exitRepeat_exit_statement(STLanguageParser::Repeat_exit_statementContext *ctx) = 0;

  virtual void enterCase_statement(STLanguageParser::Case_statementContext *ctx) = 0;
  virtual void exitCase_statement(STLanguageParser::Case_statementContext *ctx) = 0;

  virtual void enterCase_one_selection(STLanguageParser::Case_one_selectionContext *ctx) = 0;
  virtual void exitCase_one_selection(STLanguageParser::Case_one_selectionContext *ctx) = 0;

  virtual void enterToken_case_label(STLanguageParser::Token_case_labelContext *ctx) = 0;
  virtual void exitToken_case_label(STLanguageParser::Token_case_labelContext *ctx) = 0;

  virtual void enterCase_label_value(STLanguageParser::Case_label_valueContext *ctx) = 0;
  virtual void exitCase_label_value(STLanguageParser::Case_label_valueContext *ctx) = 0;

  virtual void enterCase_label_range(STLanguageParser::Case_label_rangeContext *ctx) = 0;
  virtual void exitCase_label_range(STLanguageParser::Case_label_rangeContext *ctx) = 0;

  virtual void enterAssign_statement(STLanguageParser::Assign_statementContext *ctx) = 0;
  virtual void exitAssign_statement(STLanguageParser::Assign_statementContext *ctx) = 0;

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

  virtual void enterCompare_operator_cmp(STLanguageParser::Compare_operator_cmpContext *ctx) = 0;
  virtual void exitCompare_operator_cmp(STLanguageParser::Compare_operator_cmpContext *ctx) = 0;

  virtual void enterCompare_operator_eq(STLanguageParser::Compare_operator_eqContext *ctx) = 0;
  virtual void exitCompare_operator_eq(STLanguageParser::Compare_operator_eqContext *ctx) = 0;

  virtual void enterAssign_operator_out(STLanguageParser::Assign_operator_outContext *ctx) = 0;
  virtual void exitAssign_operator_out(STLanguageParser::Assign_operator_outContext *ctx) = 0;

  virtual void enterUnary_operator_pre(STLanguageParser::Unary_operator_preContext *ctx) = 0;
  virtual void exitUnary_operator_pre(STLanguageParser::Unary_operator_preContext *ctx) = 0;

  virtual void enterArith_operator_muldiv(STLanguageParser::Arith_operator_muldivContext *ctx) = 0;
  virtual void exitArith_operator_muldiv(STLanguageParser::Arith_operator_muldivContext *ctx) = 0;

  virtual void enterArith_operator_addsub(STLanguageParser::Arith_operator_addsubContext *ctx) = 0;
  virtual void exitArith_operator_addsub(STLanguageParser::Arith_operator_addsubContext *ctx) = 0;

  virtual void enterValue(STLanguageParser::ValueContext *ctx) = 0;
  virtual void exitValue(STLanguageParser::ValueContext *ctx) = 0;

  virtual void enterImmediate_dec_number(STLanguageParser::Immediate_dec_numberContext *ctx) = 0;
  virtual void exitImmediate_dec_number(STLanguageParser::Immediate_dec_numberContext *ctx) = 0;

  virtual void enterImmediate_hex_number(STLanguageParser::Immediate_hex_numberContext *ctx) = 0;
  virtual void exitImmediate_hex_number(STLanguageParser::Immediate_hex_numberContext *ctx) = 0;

  virtual void enterImmediate_oct_number(STLanguageParser::Immediate_oct_numberContext *ctx) = 0;
  virtual void exitImmediate_oct_number(STLanguageParser::Immediate_oct_numberContext *ctx) = 0;

  virtual void enterImmediate_bin_Number(STLanguageParser::Immediate_bin_NumberContext *ctx) = 0;
  virtual void exitImmediate_bin_Number(STLanguageParser::Immediate_bin_NumberContext *ctx) = 0;

  virtual void enterImmediate_fp_number(STLanguageParser::Immediate_fp_numberContext *ctx) = 0;
  virtual void exitImmediate_fp_number(STLanguageParser::Immediate_fp_numberContext *ctx) = 0;

  virtual void enterImmediate_lreal_fp_number(STLanguageParser::Immediate_lreal_fp_numberContext *ctx) = 0;
  virtual void exitImmediate_lreal_fp_number(STLanguageParser::Immediate_lreal_fp_numberContext *ctx) = 0;

  virtual void enterImmediate_real_fp_number(STLanguageParser::Immediate_real_fp_numberContext *ctx) = 0;
  virtual void exitImmediate_real_fp_number(STLanguageParser::Immediate_real_fp_numberContext *ctx) = 0;

  virtual void enterImmediate_int_dec_number(STLanguageParser::Immediate_int_dec_numberContext *ctx) = 0;
  virtual void exitImmediate_int_dec_number(STLanguageParser::Immediate_int_dec_numberContext *ctx) = 0;

  virtual void enterImmediate_uint_dec_number(STLanguageParser::Immediate_uint_dec_numberContext *ctx) = 0;
  virtual void exitImmediate_uint_dec_number(STLanguageParser::Immediate_uint_dec_numberContext *ctx) = 0;

  virtual void enterImmediate_dint_dec_number(STLanguageParser::Immediate_dint_dec_numberContext *ctx) = 0;
  virtual void exitImmediate_dint_dec_number(STLanguageParser::Immediate_dint_dec_numberContext *ctx) = 0;

  virtual void enterImmediate_udint_dec_number(STLanguageParser::Immediate_udint_dec_numberContext *ctx) = 0;
  virtual void exitImmediate_udint_dec_number(STLanguageParser::Immediate_udint_dec_numberContext *ctx) = 0;

  virtual void enterVariable(STLanguageParser::VariableContext *ctx) = 0;
  virtual void exitVariable(STLanguageParser::VariableContext *ctx) = 0;


};


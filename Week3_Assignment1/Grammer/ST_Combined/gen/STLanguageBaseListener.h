
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer/ST_Combined\STLanguage.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "STLanguageListener.h"


/**
 * This class provides an empty implementation of STLanguageListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  STLanguageBaseListener : public STLanguageListener {
public:

  virtual void enterInput(STLanguageParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(STLanguageParser::InputContext * /*ctx*/) override { }

  virtual void enterStatement(STLanguageParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(STLanguageParser::StatementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(STLanguageParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(STLanguageParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterIf_statement(STLanguageParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(STLanguageParser::If_statementContext * /*ctx*/) override { }

  virtual void enterWhile_statement(STLanguageParser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(STLanguageParser::While_statementContext * /*ctx*/) override { }

  virtual void enterFor_statement(STLanguageParser::For_statementContext * /*ctx*/) override { }
  virtual void exitFor_statement(STLanguageParser::For_statementContext * /*ctx*/) override { }

  virtual void enterRepeat_statement(STLanguageParser::Repeat_statementContext * /*ctx*/) override { }
  virtual void exitRepeat_statement(STLanguageParser::Repeat_statementContext * /*ctx*/) override { }

  virtual void enterCase_statement(STLanguageParser::Case_statementContext * /*ctx*/) override { }
  virtual void exitCase_statement(STLanguageParser::Case_statementContext * /*ctx*/) override { }

  virtual void enterToken_case_label(STLanguageParser::Token_case_labelContext * /*ctx*/) override { }
  virtual void exitToken_case_label(STLanguageParser::Token_case_labelContext * /*ctx*/) override { }

  virtual void enterExpression(STLanguageParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(STLanguageParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterFunction_call(STLanguageParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(STLanguageParser::Function_callContext * /*ctx*/) override { }

  virtual void enterFunc_in_argument(STLanguageParser::Func_in_argumentContext * /*ctx*/) override { }
  virtual void exitFunc_in_argument(STLanguageParser::Func_in_argumentContext * /*ctx*/) override { }

  virtual void enterFunc_out_argument(STLanguageParser::Func_out_argumentContext * /*ctx*/) override { }
  virtual void exitFunc_out_argument(STLanguageParser::Func_out_argumentContext * /*ctx*/) override { }

  virtual void enterAssign_operator(STLanguageParser::Assign_operatorContext * /*ctx*/) override { }
  virtual void exitAssign_operator(STLanguageParser::Assign_operatorContext * /*ctx*/) override { }

  virtual void enterCompare_operator(STLanguageParser::Compare_operatorContext * /*ctx*/) override { }
  virtual void exitCompare_operator(STLanguageParser::Compare_operatorContext * /*ctx*/) override { }

  virtual void enterAssign_operator_out(STLanguageParser::Assign_operator_outContext * /*ctx*/) override { }
  virtual void exitAssign_operator_out(STLanguageParser::Assign_operator_outContext * /*ctx*/) override { }

  virtual void enterUnary_operator_post(STLanguageParser::Unary_operator_postContext * /*ctx*/) override { }
  virtual void exitUnary_operator_post(STLanguageParser::Unary_operator_postContext * /*ctx*/) override { }

  virtual void enterUnary_operator_pre(STLanguageParser::Unary_operator_preContext * /*ctx*/) override { }
  virtual void exitUnary_operator_pre(STLanguageParser::Unary_operator_preContext * /*ctx*/) override { }

  virtual void enterArith_operator_muldiv(STLanguageParser::Arith_operator_muldivContext * /*ctx*/) override { }
  virtual void exitArith_operator_muldiv(STLanguageParser::Arith_operator_muldivContext * /*ctx*/) override { }

  virtual void enterArith_operator_addsub(STLanguageParser::Arith_operator_addsubContext * /*ctx*/) override { }
  virtual void exitArith_operator_addsub(STLanguageParser::Arith_operator_addsubContext * /*ctx*/) override { }

  virtual void enterValue(STLanguageParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(STLanguageParser::ValueContext * /*ctx*/) override { }

  virtual void enterImmediate(STLanguageParser::ImmediateContext * /*ctx*/) override { }
  virtual void exitImmediate(STLanguageParser::ImmediateContext * /*ctx*/) override { }

  virtual void enterVariable(STLanguageParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(STLanguageParser::VariableContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


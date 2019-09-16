
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer/ST_Normal\STLanguageParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "STLanguageParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by STLanguageParser.
 */
class  STLanguageParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by STLanguageParser.
   */
    virtual antlrcpp::Any visitInput(STLanguageParser::InputContext *context) = 0;

    virtual antlrcpp::Any visitStatement(STLanguageParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitSingle_statement(STLanguageParser::Single_statementContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call_statement(STLanguageParser::Function_call_statementContext *context) = 0;

    virtual antlrcpp::Any visitReturn_statement(STLanguageParser::Return_statementContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement(STLanguageParser::If_statementContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement_main_clause(STLanguageParser::If_statement_main_clauseContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement_elif_clause(STLanguageParser::If_statement_elif_clauseContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement_else_clause(STLanguageParser::If_statement_else_clauseContext *context) = 0;

    virtual antlrcpp::Any visitIf_clause(STLanguageParser::If_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWhile_statement(STLanguageParser::While_statementContext *context) = 0;

    virtual antlrcpp::Any visitFor_statement(STLanguageParser::For_statementContext *context) = 0;

    virtual antlrcpp::Any visitRepeat_statement(STLanguageParser::Repeat_statementContext *context) = 0;

    virtual antlrcpp::Any visitCase_statement(STLanguageParser::Case_statementContext *context) = 0;

    virtual antlrcpp::Any visitToken_case_label(STLanguageParser::Token_case_labelContext *context) = 0;

    virtual antlrcpp::Any visitAssign_statement(STLanguageParser::Assign_statementContext *context) = 0;

    virtual antlrcpp::Any visitExpression(STLanguageParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(STLanguageParser::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitFunc_in_argument(STLanguageParser::Func_in_argumentContext *context) = 0;

    virtual antlrcpp::Any visitFunc_out_argument(STLanguageParser::Func_out_argumentContext *context) = 0;

    virtual antlrcpp::Any visitAssign_operator(STLanguageParser::Assign_operatorContext *context) = 0;

    virtual antlrcpp::Any visitCompare_operator_cmp(STLanguageParser::Compare_operator_cmpContext *context) = 0;

    virtual antlrcpp::Any visitCompare_operator_eq(STLanguageParser::Compare_operator_eqContext *context) = 0;

    virtual antlrcpp::Any visitAssign_operator_out(STLanguageParser::Assign_operator_outContext *context) = 0;

    virtual antlrcpp::Any visitUnary_operator_pre(STLanguageParser::Unary_operator_preContext *context) = 0;

    virtual antlrcpp::Any visitArith_operator_muldiv(STLanguageParser::Arith_operator_muldivContext *context) = 0;

    virtual antlrcpp::Any visitArith_operator_addsub(STLanguageParser::Arith_operator_addsubContext *context) = 0;

    virtual antlrcpp::Any visitValue(STLanguageParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitImmediate(STLanguageParser::ImmediateContext *context) = 0;

    virtual antlrcpp::Any visitVariable(STLanguageParser::VariableContext *context) = 0;


};


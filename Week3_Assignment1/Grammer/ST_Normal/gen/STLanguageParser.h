
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer/ST_Normal\STLanguageParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  STLanguageParser : public antlr4::Parser {
public:
  enum {
    LINE_COMMENT = 1, C_STYLE_COMMENT = 2, WS = 3, TOKEN_ASSIGN_RL = 4, 
    TOKEN_ASSIGN_LR = 5, TOKEN_CMP_EQ = 6, TOKEN_CMP_GT_EQ = 7, TOKEN_CMP_LT_EQ = 8, 
    TOKEN_CMP_NEQ = 9, TOKEN_CMP_GT = 10, TOKEN_CMP_LT = 11, TOKEN_RETURN = 12, 
    TOKEN_FOR = 13, TOKEN_FOR_END = 14, TOKEN_WHILE = 15, TOKEN_DO = 16, 
    TOKEN_TO = 17, TOKEN_WHILE_END = 18, TOKEN_IF = 19, TOKEN_IF_THEN = 20, 
    TOKEN_IF_ELIF = 21, TOKEN_ELSE = 22, TOKEN_IF_END = 23, TOKEN_SELECT = 24, 
    TOKEN_SELECT_END = 25, TOKEN_REPEAT = 26, TOKEN_UNTIL = 27, TOKEN_REPEAT_END = 28, 
    TOKEN_REPEAT_EXIT = 29, TOKEN_CASE = 30, TOKEN_OF = 31, TOKEN_CASE_END = 32, 
    TOKEN_NOT = 33, TOKEN_OPEN_BRACE = 34, TOKEN_CLOSE_BRACE = 35, TOKEN_HEX_NUMBER = 36, 
    TOKEN_DEC_NUMBER = 37, TOKEN_OCT_NUMBER = 38, TOKEN_BIN_NUMBER = 39, 
    TOKEN_FP_NUMBER = 40, TOKEN_CASE_RANGE = 41, TOKEN_PLUS = 42, TOKEN_MINUS = 43, 
    TOKEN_MUL = 44, TOKEN_DIV = 45, TOKEN_ARG_LBL_SEP = 46, TOKEN_CASE_LBL_SEP = 47, 
    TOKEN_AND = 48, TOKEN_XOR = 49, TOKEN_OR = 50, TOKEN_TYPE_LREAL = 51, 
    TOKEN_TYPE_REAL = 52, TOKEN_TYPE_INT = 53, TOKEN_TYPE_UINT = 54, TOKEN_TYPE_DINT = 55, 
    TOKEN_TYPE_UDINT = 56, TOKEN_TYPE_BOOL = 57, TOKEN_SHARP = 58, STATEMENT_SEPARATOR = 59, 
    IDENTIFIER = 60, NL = 61, NOT_NL = 62, END_COMMENT = 63, COMMENT = 64
  };

  enum {
    RuleInput = 0, RuleStatement = 1, RuleSingle_statement = 2, RuleFunction_call_statement = 3, 
    RuleReturn_statement = 4, RuleIf_statement = 5, RuleIf_statement_main_clause = 6, 
    RuleIf_statement_elif_clause = 7, RuleIf_statement_else_clause = 8, 
    RuleIf_clause = 9, RuleWhile_statement = 10, RuleFor_statement = 11, 
    RuleRepeat_statement = 12, RuleRepeat_exit_statement = 13, RuleCase_statement = 14, 
    RuleCase_one_selection = 15, RuleToken_case_label = 16, RuleCase_label_value = 17, 
    RuleCase_label_range = 18, RuleAssign_statement = 19, RuleExpression = 20, 
    RuleFunction_call = 21, RuleFunc_in_argument = 22, RuleFunc_out_argument = 23, 
    RuleAssign_operator = 24, RuleCompare_operator_cmp = 25, RuleCompare_operator_eq = 26, 
    RuleAssign_operator_out = 27, RuleUnary_operator_pre = 28, RuleArith_operator_muldiv = 29, 
    RuleArith_operator_addsub = 30, RuleValue = 31, RuleImmediate = 32, 
    RuleVariable = 33
  };

  STLanguageParser(antlr4::TokenStream *input);
  ~STLanguageParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class InputContext;
  class StatementContext;
  class Single_statementContext;
  class Function_call_statementContext;
  class Return_statementContext;
  class If_statementContext;
  class If_statement_main_clauseContext;
  class If_statement_elif_clauseContext;
  class If_statement_else_clauseContext;
  class If_clauseContext;
  class While_statementContext;
  class For_statementContext;
  class Repeat_statementContext;
  class Repeat_exit_statementContext;
  class Case_statementContext;
  class Case_one_selectionContext;
  class Token_case_labelContext;
  class Case_label_valueContext;
  class Case_label_rangeContext;
  class Assign_statementContext;
  class ExpressionContext;
  class Function_callContext;
  class Func_in_argumentContext;
  class Func_out_argumentContext;
  class Assign_operatorContext;
  class Compare_operator_cmpContext;
  class Compare_operator_eqContext;
  class Assign_operator_outContext;
  class Unary_operator_preContext;
  class Arith_operator_muldivContext;
  class Arith_operator_addsubContext;
  class ValueContext;
  class ImmediateContext;
  class VariableContext; 

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputContext* input();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Single_statementContext *single_statement();
    antlr4::tree::TerminalNode *STATEMENT_SEPARATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Single_statementContext : public antlr4::ParserRuleContext {
  public:
    Single_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Return_statementContext *return_statement();
    If_statementContext *if_statement();
    While_statementContext *while_statement();
    For_statementContext *for_statement();
    Repeat_statementContext *repeat_statement();
    Repeat_exit_statementContext *repeat_exit_statement();
    Case_statementContext *case_statement();
    Assign_statementContext *assign_statement();
    Function_call_statementContext *function_call_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_statementContext* single_statement();

  class  Function_call_statementContext : public antlr4::ParserRuleContext {
  public:
    Function_call_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_callContext *function_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_call_statementContext* function_call_statement();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_RETURN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_statementContext* return_statement();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_statement_main_clauseContext *if_statement_main_clause();
    antlr4::tree::TerminalNode *TOKEN_IF_END();
    std::vector<If_statement_elif_clauseContext *> if_statement_elif_clause();
    If_statement_elif_clauseContext* if_statement_elif_clause(size_t i);
    If_statement_else_clauseContext *if_statement_else_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  If_statement_main_clauseContext : public antlr4::ParserRuleContext {
  public:
    If_statement_main_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_IF();
    If_clauseContext *if_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statement_main_clauseContext* if_statement_main_clause();

  class  If_statement_elif_clauseContext : public antlr4::ParserRuleContext {
  public:
    If_statement_elif_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_IF_ELIF();
    If_clauseContext *if_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statement_elif_clauseContext* if_statement_elif_clause();

  class  If_statement_else_clauseContext : public antlr4::ParserRuleContext {
  public:
    If_statement_else_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_ELSE();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statement_else_clauseContext* if_statement_else_clause();

  class  If_clauseContext : public antlr4::ParserRuleContext {
  public:
    If_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *TOKEN_IF_THEN();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_clauseContext* if_clause();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_WHILE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *TOKEN_DO();
    antlr4::tree::TerminalNode *TOKEN_WHILE_END();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_statementContext* while_statement();

  class  For_statementContext : public antlr4::ParserRuleContext {
  public:
    For_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_FOR();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *TOKEN_TO();
    antlr4::tree::TerminalNode *TOKEN_DO();
    antlr4::tree::TerminalNode *TOKEN_FOR_END();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_statementContext* for_statement();

  class  Repeat_statementContext : public antlr4::ParserRuleContext {
  public:
    Repeat_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_REPEAT();
    antlr4::tree::TerminalNode *TOKEN_UNTIL();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *TOKEN_REPEAT_END();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repeat_statementContext* repeat_statement();

  class  Repeat_exit_statementContext : public antlr4::ParserRuleContext {
  public:
    Repeat_exit_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_REPEAT_EXIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repeat_exit_statementContext* repeat_exit_statement();

  class  Case_statementContext : public antlr4::ParserRuleContext {
  public:
    Case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_CASE();
    VariableContext *variable();
    antlr4::tree::TerminalNode *TOKEN_OF();
    antlr4::tree::TerminalNode *TOKEN_CASE_END();
    std::vector<Case_one_selectionContext *> case_one_selection();
    Case_one_selectionContext* case_one_selection(size_t i);
    antlr4::tree::TerminalNode *TOKEN_ELSE();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_statementContext* case_statement();

  class  Case_one_selectionContext : public antlr4::ParserRuleContext {
  public:
    Case_one_selectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Token_case_labelContext *token_case_label();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_one_selectionContext* case_one_selection();

  class  Token_case_labelContext : public antlr4::ParserRuleContext {
  public:
    Token_case_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_CASE_LBL_SEP();
    std::vector<Case_label_valueContext *> case_label_value();
    Case_label_valueContext* case_label_value(size_t i);
    std::vector<Case_label_rangeContext *> case_label_range();
    Case_label_rangeContext* case_label_range(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TOKEN_ARG_LBL_SEP();
    antlr4::tree::TerminalNode* TOKEN_ARG_LBL_SEP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Token_case_labelContext* token_case_label();

  class  Case_label_valueContext : public antlr4::ParserRuleContext {
  public:
    Case_label_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_label_valueContext* case_label_value();

  class  Case_label_rangeContext : public antlr4::ParserRuleContext {
  public:
    Case_label_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    antlr4::tree::TerminalNode *TOKEN_CASE_RANGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_label_rangeContext* case_label_range();

  class  Assign_statementContext : public antlr4::ParserRuleContext {
  public:
    Assign_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    Assign_operatorContext *assign_operator();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assign_statementContext* assign_statement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();
    antlr4::tree::TerminalNode *TOKEN_OPEN_BRACE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *TOKEN_CLOSE_BRACE();
    Function_callContext *function_call();
    Arith_operator_muldivContext *arith_operator_muldiv();
    Arith_operator_addsubContext *arith_operator_addsub();
    Compare_operator_cmpContext *compare_operator_cmp();
    Compare_operator_eqContext *compare_operator_eq();
    antlr4::tree::TerminalNode *TOKEN_AND();
    antlr4::tree::TerminalNode *TOKEN_XOR();
    antlr4::tree::TerminalNode *TOKEN_OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *TOKEN_OPEN_BRACE();
    antlr4::tree::TerminalNode *TOKEN_CLOSE_BRACE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TOKEN_ARG_LBL_SEP();
    antlr4::tree::TerminalNode* TOKEN_ARG_LBL_SEP(size_t i);
    std::vector<Func_in_argumentContext *> func_in_argument();
    Func_in_argumentContext* func_in_argument(size_t i);
    std::vector<Func_out_argumentContext *> func_out_argument();
    Func_out_argumentContext* func_out_argument(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  Func_in_argumentContext : public antlr4::ParserRuleContext {
  public:
    Func_in_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    Assign_operatorContext *assign_operator();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_in_argumentContext* func_in_argument();

  class  Func_out_argumentContext : public antlr4::ParserRuleContext {
  public:
    Func_out_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    Assign_operator_outContext *assign_operator_out();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_out_argumentContext* func_out_argument();

  class  Assign_operatorContext : public antlr4::ParserRuleContext {
  public:
    Assign_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_ASSIGN_RL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assign_operatorContext* assign_operator();

  class  Compare_operator_cmpContext : public antlr4::ParserRuleContext {
  public:
    Compare_operator_cmpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_CMP_GT_EQ();
    antlr4::tree::TerminalNode *TOKEN_CMP_LT_EQ();
    antlr4::tree::TerminalNode *TOKEN_CMP_GT();
    antlr4::tree::TerminalNode *TOKEN_CMP_LT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compare_operator_cmpContext* compare_operator_cmp();

  class  Compare_operator_eqContext : public antlr4::ParserRuleContext {
  public:
    Compare_operator_eqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_CMP_EQ();
    antlr4::tree::TerminalNode *TOKEN_CMP_NEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compare_operator_eqContext* compare_operator_eq();

  class  Assign_operator_outContext : public antlr4::ParserRuleContext {
  public:
    Assign_operator_outContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_ASSIGN_LR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assign_operator_outContext* assign_operator_out();

  class  Unary_operator_preContext : public antlr4::ParserRuleContext {
  public:
    Unary_operator_preContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_PLUS();
    antlr4::tree::TerminalNode *TOKEN_MINUS();
    antlr4::tree::TerminalNode *TOKEN_NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_operator_preContext* unary_operator_pre();

  class  Arith_operator_muldivContext : public antlr4::ParserRuleContext {
  public:
    Arith_operator_muldivContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_MUL();
    antlr4::tree::TerminalNode *TOKEN_DIV();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arith_operator_muldivContext* arith_operator_muldiv();

  class  Arith_operator_addsubContext : public antlr4::ParserRuleContext {
  public:
    Arith_operator_addsubContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_PLUS();
    antlr4::tree::TerminalNode *TOKEN_MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arith_operator_addsubContext* arith_operator_addsub();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unary_operator_preContext *unary_operator_pre();
    ValueContext *value();
    ImmediateContext *immediate();
    VariableContext *variable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  ImmediateContext : public antlr4::ParserRuleContext {
  public:
    ImmediateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ImmediateContext() = default;
    void copyFrom(ImmediateContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Immediate_oct_numberContext : public ImmediateContext {
  public:
    Immediate_oct_numberContext(ImmediateContext *ctx);

    antlr4::tree::TerminalNode *TOKEN_OCT_NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Immediate_dint_dec_numberContext : public ImmediateContext {
  public:
    Immediate_dint_dec_numberContext(ImmediateContext *ctx);

    antlr4::tree::TerminalNode *TOKEN_TYPE_DINT();
    antlr4::tree::TerminalNode *TOKEN_SHARP();
    antlr4::tree::TerminalNode *TOKEN_DEC_NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Immediate_real_fp_numberContext : public ImmediateContext {
  public:
    Immediate_real_fp_numberContext(ImmediateContext *ctx);

    antlr4::tree::TerminalNode *TOKEN_TYPE_REAL();
    antlr4::tree::TerminalNode *TOKEN_SHARP();
    antlr4::tree::TerminalNode *TOKEN_FP_NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Immediate_dec_numberContext : public ImmediateContext {
  public:
    Immediate_dec_numberContext(ImmediateContext *ctx);

    antlr4::tree::TerminalNode *TOKEN_DEC_NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Immediate_lreal_fp_numberContext : public ImmediateContext {
  public:
    Immediate_lreal_fp_numberContext(ImmediateContext *ctx);

    antlr4::tree::TerminalNode *TOKEN_TYPE_LREAL();
    antlr4::tree::TerminalNode *TOKEN_SHARP();
    antlr4::tree::TerminalNode *TOKEN_FP_NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Immediate_udint_dec_numberContext : public ImmediateContext {
  public:
    Immediate_udint_dec_numberContext(ImmediateContext *ctx);

    antlr4::tree::TerminalNode *TOKEN_TYPE_UDINT();
    antlr4::tree::TerminalNode *TOKEN_SHARP();
    antlr4::tree::TerminalNode *TOKEN_DEC_NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Immediate_int_dec_numberContext : public ImmediateContext {
  public:
    Immediate_int_dec_numberContext(ImmediateContext *ctx);

    antlr4::tree::TerminalNode *TOKEN_TYPE_INT();
    antlr4::tree::TerminalNode *TOKEN_SHARP();
    antlr4::tree::TerminalNode *TOKEN_DEC_NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Immediate_hex_numberContext : public ImmediateContext {
  public:
    Immediate_hex_numberContext(ImmediateContext *ctx);

    antlr4::tree::TerminalNode *TOKEN_HEX_NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Immediate_uint_dec_numberContext : public ImmediateContext {
  public:
    Immediate_uint_dec_numberContext(ImmediateContext *ctx);

    antlr4::tree::TerminalNode *TOKEN_TYPE_UINT();
    antlr4::tree::TerminalNode *TOKEN_SHARP();
    antlr4::tree::TerminalNode *TOKEN_DEC_NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Immediate_bin_NumberContext : public ImmediateContext {
  public:
    Immediate_bin_NumberContext(ImmediateContext *ctx);

    antlr4::tree::TerminalNode *TOKEN_BIN_NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Immediate_fp_numberContext : public ImmediateContext {
  public:
    Immediate_fp_numberContext(ImmediateContext *ctx);

    antlr4::tree::TerminalNode *TOKEN_FP_NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ImmediateContext* immediate();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};



// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer/ST_Combined\STLanguage.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  STLanguageParser : public antlr4::Parser {
public:
  enum {
    WS = 1, TOKEN_ASSIGN_RL = 2, TOKEN_ASSIGN_LR = 3, TOKEN_CMP_EQ = 4, 
    TOKEN_CMP_GT_EQ = 5, TOKEN_CMP_LT_EQ = 6, TOKEN_CMP_GT = 7, TOKEN_CMP_LT = 8, 
    TOKEN_RETURN = 9, TOKEN_FOR = 10, TOKEN_FOR_END = 11, TOKEN_WHILE = 12, 
    TOKEN_DO = 13, TOKEN_TO = 14, TOKEN_WHILE_END = 15, TOKEN_IF = 16, TOKEN_IF_THEN = 17, 
    TOKEN_IF_ELIF = 18, TOKEN_ELSE = 19, TOKEN_IF_END = 20, TOKEN_SELECT = 21, 
    TOKEN_SELECT_END = 22, TOKEN_REPEAT = 23, TOKEN_UNTIL = 24, TOKEN_REPEAT_END = 25, 
    TOKEN_CASE = 26, TOKEN_OF = 27, TOKEN_CASE_END = 28, TOKEN_OPEN_BRACE = 29, 
    TOKEN_CLOSE_BRACE = 30, TOKEN_HEX_NUMBER = 31, TOKEN_DEC_NUMBER = 32, 
    TOKEN_OCT_NUMBER = 33, TOKEN_BIN_NUMBER = 34, TOKEN_INCREMENT = 35, 
    TOKEN_DECREMENT = 36, TOKEN_CASE_RANGE = 37, TOKEN_PLUS = 38, TOKEN_MINUS = 39, 
    TOKEN_MUL = 40, TOKEN_DIV = 41, TOKEN_ARG_SEP = 42, TOKEN_CASE_VAL_SEP = 43, 
    TOKEN_CASE_LBL_SEP = 44, STATEMENT_SEPARATOR = 45, IDENTIFIER = 46
  };

  enum {
    RuleInput = 0, RuleStatement = 1, RuleReturn_statement = 2, RuleIf_statement = 3, 
    RuleWhile_statement = 4, RuleFor_statement = 5, RuleRepeat_statement = 6, 
    RuleCase_statement = 7, RuleToken_case_label = 8, RuleExpression = 9, 
    RuleFunction_call = 10, RuleFunc_in_argument = 11, RuleFunc_out_argument = 12, 
    RuleAssign_operator = 13, RuleCompare_operator = 14, RuleAssign_operator_out = 15, 
    RuleUnary_operator_post = 16, RuleUnary_operator_pre = 17, RuleArith_operator_muldiv = 18, 
    RuleArith_operator_addsub = 19, RuleValue = 20, RuleImmediate = 21, 
    RuleVariable = 22
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
  class Return_statementContext;
  class If_statementContext;
  class While_statementContext;
  class For_statementContext;
  class Repeat_statementContext;
  class Case_statementContext;
  class Token_case_labelContext;
  class ExpressionContext;
  class Function_callContext;
  class Func_in_argumentContext;
  class Func_out_argumentContext;
  class Assign_operatorContext;
  class Compare_operatorContext;
  class Assign_operator_outContext;
  class Unary_operator_postContext;
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
    Return_statementContext *return_statement();
    If_statementContext *if_statement();
    While_statementContext *while_statement();
    For_statementContext *for_statement();
    Repeat_statementContext *repeat_statement();
    Case_statementContext *case_statement();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *STATEMENT_SEPARATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

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
    antlr4::tree::TerminalNode *TOKEN_IF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *TOKEN_IF_THEN();
    antlr4::tree::TerminalNode *TOKEN_IF_END();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TOKEN_IF_ELIF();
    antlr4::tree::TerminalNode* TOKEN_IF_ELIF(size_t i);
    antlr4::tree::TerminalNode *TOKEN_ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

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

  class  Case_statementContext : public antlr4::ParserRuleContext {
  public:
    Case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_CASE();
    VariableContext *variable();
    antlr4::tree::TerminalNode *TOKEN_OF();
    antlr4::tree::TerminalNode *TOKEN_CASE_END();
    std::vector<Token_case_labelContext *> token_case_label();
    Token_case_labelContext* token_case_label(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_statementContext* case_statement();

  class  Token_case_labelContext : public antlr4::ParserRuleContext {
  public:
    Token_case_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    antlr4::tree::TerminalNode *TOKEN_CASE_LBL_SEP();
    std::vector<antlr4::tree::TerminalNode *> TOKEN_CASE_VAL_SEP();
    antlr4::tree::TerminalNode* TOKEN_CASE_VAL_SEP(size_t i);
    antlr4::tree::TerminalNode *TOKEN_CASE_RANGE();
    antlr4::tree::TerminalNode *TOKEN_ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Token_case_labelContext* token_case_label();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ImmediateContext *immediate();
    VariableContext *variable();
    Unary_operator_preContext *unary_operator_pre();
    Unary_operator_postContext *unary_operator_post();
    antlr4::tree::TerminalNode *TOKEN_OPEN_BRACE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *TOKEN_CLOSE_BRACE();
    Function_callContext *function_call();
    Arith_operator_muldivContext *arith_operator_muldiv();
    Arith_operator_addsubContext *arith_operator_addsub();
    Compare_operatorContext *compare_operator();
    Assign_operatorContext *assign_operator();

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
    std::vector<antlr4::tree::TerminalNode *> TOKEN_ARG_SEP();
    antlr4::tree::TerminalNode* TOKEN_ARG_SEP(size_t i);
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

  class  Compare_operatorContext : public antlr4::ParserRuleContext {
  public:
    Compare_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_CMP_EQ();
    antlr4::tree::TerminalNode *TOKEN_CMP_GT_EQ();
    antlr4::tree::TerminalNode *TOKEN_CMP_LT_EQ();
    antlr4::tree::TerminalNode *TOKEN_CMP_GT();
    antlr4::tree::TerminalNode *TOKEN_CMP_LT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compare_operatorContext* compare_operator();

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

  class  Unary_operator_postContext : public antlr4::ParserRuleContext {
  public:
    Unary_operator_postContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_INCREMENT();
    antlr4::tree::TerminalNode *TOKEN_DECREMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_operator_postContext* unary_operator_post();

  class  Unary_operator_preContext : public antlr4::ParserRuleContext {
  public:
    Unary_operator_preContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_PLUS();
    antlr4::tree::TerminalNode *TOKEN_MINUS();

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
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_DEC_NUMBER();
    antlr4::tree::TerminalNode *TOKEN_MINUS();
    antlr4::tree::TerminalNode *TOKEN_HEX_NUMBER();
    antlr4::tree::TerminalNode *TOKEN_OCT_NUMBER();
    antlr4::tree::TerminalNode *TOKEN_BIN_NUMBER();

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


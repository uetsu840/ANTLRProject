
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer/ST_Normal\STLanguageParser.g4 by ANTLR 4.7.2


#include "STLanguageParserListener.h"
#include "STLanguageParserVisitor.h"

#include "STLanguageParser.h"


using namespace antlrcpp;
using namespace antlr4;

STLanguageParser::STLanguageParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

STLanguageParser::~STLanguageParser() {
  delete _interpreter;
}

std::string STLanguageParser::getGrammarFileName() const {
  return "STLanguageParser.g4";
}

const std::vector<std::string>& STLanguageParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& STLanguageParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InputContext ------------------------------------------------------------------

STLanguageParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::InputContext::EOF() {
  return getToken(STLanguageParser::EOF, 0);
}

std::vector<STLanguageParser::StatementContext *> STLanguageParser::InputContext::statement() {
  return getRuleContexts<STLanguageParser::StatementContext>();
}

STLanguageParser::StatementContext* STLanguageParser::InputContext::statement(size_t i) {
  return getRuleContext<STLanguageParser::StatementContext>(i);
}


size_t STLanguageParser::InputContext::getRuleIndex() const {
  return STLanguageParser::RuleInput;
}

void STLanguageParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void STLanguageParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}


antlrcpp::Any STLanguageParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::InputContext* STLanguageParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 0, STLanguageParser::RuleInput);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_CASE)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0)) {
      setState(60);
      statement();
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(66);
    match(STLanguageParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

STLanguageParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STLanguageParser::Single_statementContext* STLanguageParser::StatementContext::single_statement() {
  return getRuleContext<STLanguageParser::Single_statementContext>(0);
}

tree::TerminalNode* STLanguageParser::StatementContext::STATEMENT_SEPARATOR() {
  return getToken(STLanguageParser::STATEMENT_SEPARATOR, 0);
}


size_t STLanguageParser::StatementContext::getRuleIndex() const {
  return STLanguageParser::RuleStatement;
}

void STLanguageParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void STLanguageParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any STLanguageParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::StatementContext* STLanguageParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, STLanguageParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    single_statement();
    setState(69);
    match(STLanguageParser::STATEMENT_SEPARATOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Single_statementContext ------------------------------------------------------------------

STLanguageParser::Single_statementContext::Single_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STLanguageParser::Return_statementContext* STLanguageParser::Single_statementContext::return_statement() {
  return getRuleContext<STLanguageParser::Return_statementContext>(0);
}

STLanguageParser::If_statementContext* STLanguageParser::Single_statementContext::if_statement() {
  return getRuleContext<STLanguageParser::If_statementContext>(0);
}

STLanguageParser::While_statementContext* STLanguageParser::Single_statementContext::while_statement() {
  return getRuleContext<STLanguageParser::While_statementContext>(0);
}

STLanguageParser::For_statementContext* STLanguageParser::Single_statementContext::for_statement() {
  return getRuleContext<STLanguageParser::For_statementContext>(0);
}

STLanguageParser::Repeat_statementContext* STLanguageParser::Single_statementContext::repeat_statement() {
  return getRuleContext<STLanguageParser::Repeat_statementContext>(0);
}

STLanguageParser::Case_statementContext* STLanguageParser::Single_statementContext::case_statement() {
  return getRuleContext<STLanguageParser::Case_statementContext>(0);
}

STLanguageParser::Assign_statementContext* STLanguageParser::Single_statementContext::assign_statement() {
  return getRuleContext<STLanguageParser::Assign_statementContext>(0);
}

STLanguageParser::Function_call_statementContext* STLanguageParser::Single_statementContext::function_call_statement() {
  return getRuleContext<STLanguageParser::Function_call_statementContext>(0);
}


size_t STLanguageParser::Single_statementContext::getRuleIndex() const {
  return STLanguageParser::RuleSingle_statement;
}

void STLanguageParser::Single_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingle_statement(this);
}

void STLanguageParser::Single_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingle_statement(this);
}


antlrcpp::Any STLanguageParser::Single_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitSingle_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Single_statementContext* STLanguageParser::single_statement() {
  Single_statementContext *_localctx = _tracker.createInstance<Single_statementContext>(_ctx, getState());
  enterRule(_localctx, 4, STLanguageParser::RuleSingle_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(71);
      return_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(72);
      if_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(73);
      while_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(74);
      for_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(75);
      repeat_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(76);
      case_statement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(77);
      assign_statement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(78);
      function_call_statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_call_statementContext ------------------------------------------------------------------

STLanguageParser::Function_call_statementContext::Function_call_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STLanguageParser::Function_callContext* STLanguageParser::Function_call_statementContext::function_call() {
  return getRuleContext<STLanguageParser::Function_callContext>(0);
}


size_t STLanguageParser::Function_call_statementContext::getRuleIndex() const {
  return STLanguageParser::RuleFunction_call_statement;
}

void STLanguageParser::Function_call_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call_statement(this);
}

void STLanguageParser::Function_call_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call_statement(this);
}


antlrcpp::Any STLanguageParser::Function_call_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitFunction_call_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Function_call_statementContext* STLanguageParser::function_call_statement() {
  Function_call_statementContext *_localctx = _tracker.createInstance<Function_call_statementContext>(_ctx, getState());
  enterRule(_localctx, 6, STLanguageParser::RuleFunction_call_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    function_call();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_statementContext ------------------------------------------------------------------

STLanguageParser::Return_statementContext::Return_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::Return_statementContext::TOKEN_RETURN() {
  return getToken(STLanguageParser::TOKEN_RETURN, 0);
}


size_t STLanguageParser::Return_statementContext::getRuleIndex() const {
  return STLanguageParser::RuleReturn_statement;
}

void STLanguageParser::Return_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_statement(this);
}

void STLanguageParser::Return_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_statement(this);
}


antlrcpp::Any STLanguageParser::Return_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitReturn_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Return_statementContext* STLanguageParser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
  enterRule(_localctx, 8, STLanguageParser::RuleReturn_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(STLanguageParser::TOKEN_RETURN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

STLanguageParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STLanguageParser::If_statement_main_clauseContext* STLanguageParser::If_statementContext::if_statement_main_clause() {
  return getRuleContext<STLanguageParser::If_statement_main_clauseContext>(0);
}

tree::TerminalNode* STLanguageParser::If_statementContext::TOKEN_IF_END() {
  return getToken(STLanguageParser::TOKEN_IF_END, 0);
}

std::vector<STLanguageParser::If_statement_elif_clauseContext *> STLanguageParser::If_statementContext::if_statement_elif_clause() {
  return getRuleContexts<STLanguageParser::If_statement_elif_clauseContext>();
}

STLanguageParser::If_statement_elif_clauseContext* STLanguageParser::If_statementContext::if_statement_elif_clause(size_t i) {
  return getRuleContext<STLanguageParser::If_statement_elif_clauseContext>(i);
}

STLanguageParser::If_statement_else_clauseContext* STLanguageParser::If_statementContext::if_statement_else_clause() {
  return getRuleContext<STLanguageParser::If_statement_else_clauseContext>(0);
}


size_t STLanguageParser::If_statementContext::getRuleIndex() const {
  return STLanguageParser::RuleIf_statement;
}

void STLanguageParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void STLanguageParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


antlrcpp::Any STLanguageParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::If_statementContext* STLanguageParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 10, STLanguageParser::RuleIf_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    if_statement_main_clause();
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == STLanguageParser::TOKEN_IF_ELIF) {
      setState(86);
      if_statement_elif_clause();
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(93);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == STLanguageParser::TOKEN_ELSE) {
      setState(92);
      if_statement_else_clause();
    }
    setState(95);
    match(STLanguageParser::TOKEN_IF_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statement_main_clauseContext ------------------------------------------------------------------

STLanguageParser::If_statement_main_clauseContext::If_statement_main_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::If_statement_main_clauseContext::TOKEN_IF() {
  return getToken(STLanguageParser::TOKEN_IF, 0);
}

STLanguageParser::If_clauseContext* STLanguageParser::If_statement_main_clauseContext::if_clause() {
  return getRuleContext<STLanguageParser::If_clauseContext>(0);
}


size_t STLanguageParser::If_statement_main_clauseContext::getRuleIndex() const {
  return STLanguageParser::RuleIf_statement_main_clause;
}

void STLanguageParser::If_statement_main_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement_main_clause(this);
}

void STLanguageParser::If_statement_main_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement_main_clause(this);
}


antlrcpp::Any STLanguageParser::If_statement_main_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitIf_statement_main_clause(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::If_statement_main_clauseContext* STLanguageParser::if_statement_main_clause() {
  If_statement_main_clauseContext *_localctx = _tracker.createInstance<If_statement_main_clauseContext>(_ctx, getState());
  enterRule(_localctx, 12, STLanguageParser::RuleIf_statement_main_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(STLanguageParser::TOKEN_IF);
    setState(98);
    if_clause();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statement_elif_clauseContext ------------------------------------------------------------------

STLanguageParser::If_statement_elif_clauseContext::If_statement_elif_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::If_statement_elif_clauseContext::TOKEN_IF_ELIF() {
  return getToken(STLanguageParser::TOKEN_IF_ELIF, 0);
}

STLanguageParser::If_clauseContext* STLanguageParser::If_statement_elif_clauseContext::if_clause() {
  return getRuleContext<STLanguageParser::If_clauseContext>(0);
}


size_t STLanguageParser::If_statement_elif_clauseContext::getRuleIndex() const {
  return STLanguageParser::RuleIf_statement_elif_clause;
}

void STLanguageParser::If_statement_elif_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement_elif_clause(this);
}

void STLanguageParser::If_statement_elif_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement_elif_clause(this);
}


antlrcpp::Any STLanguageParser::If_statement_elif_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitIf_statement_elif_clause(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::If_statement_elif_clauseContext* STLanguageParser::if_statement_elif_clause() {
  If_statement_elif_clauseContext *_localctx = _tracker.createInstance<If_statement_elif_clauseContext>(_ctx, getState());
  enterRule(_localctx, 14, STLanguageParser::RuleIf_statement_elif_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(STLanguageParser::TOKEN_IF_ELIF);
    setState(101);
    if_clause();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statement_else_clauseContext ------------------------------------------------------------------

STLanguageParser::If_statement_else_clauseContext::If_statement_else_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::If_statement_else_clauseContext::TOKEN_ELSE() {
  return getToken(STLanguageParser::TOKEN_ELSE, 0);
}

std::vector<STLanguageParser::StatementContext *> STLanguageParser::If_statement_else_clauseContext::statement() {
  return getRuleContexts<STLanguageParser::StatementContext>();
}

STLanguageParser::StatementContext* STLanguageParser::If_statement_else_clauseContext::statement(size_t i) {
  return getRuleContext<STLanguageParser::StatementContext>(i);
}


size_t STLanguageParser::If_statement_else_clauseContext::getRuleIndex() const {
  return STLanguageParser::RuleIf_statement_else_clause;
}

void STLanguageParser::If_statement_else_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement_else_clause(this);
}

void STLanguageParser::If_statement_else_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement_else_clause(this);
}


antlrcpp::Any STLanguageParser::If_statement_else_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitIf_statement_else_clause(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::If_statement_else_clauseContext* STLanguageParser::if_statement_else_clause() {
  If_statement_else_clauseContext *_localctx = _tracker.createInstance<If_statement_else_clauseContext>(_ctx, getState());
  enterRule(_localctx, 16, STLanguageParser::RuleIf_statement_else_clause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(STLanguageParser::TOKEN_ELSE);
    setState(105); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(104);
      statement();
      setState(107); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_CASE)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_clauseContext ------------------------------------------------------------------

STLanguageParser::If_clauseContext::If_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STLanguageParser::ExpressionContext* STLanguageParser::If_clauseContext::expression() {
  return getRuleContext<STLanguageParser::ExpressionContext>(0);
}

tree::TerminalNode* STLanguageParser::If_clauseContext::TOKEN_IF_THEN() {
  return getToken(STLanguageParser::TOKEN_IF_THEN, 0);
}

std::vector<STLanguageParser::StatementContext *> STLanguageParser::If_clauseContext::statement() {
  return getRuleContexts<STLanguageParser::StatementContext>();
}

STLanguageParser::StatementContext* STLanguageParser::If_clauseContext::statement(size_t i) {
  return getRuleContext<STLanguageParser::StatementContext>(i);
}


size_t STLanguageParser::If_clauseContext::getRuleIndex() const {
  return STLanguageParser::RuleIf_clause;
}

void STLanguageParser::If_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_clause(this);
}

void STLanguageParser::If_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_clause(this);
}


antlrcpp::Any STLanguageParser::If_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitIf_clause(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::If_clauseContext* STLanguageParser::if_clause() {
  If_clauseContext *_localctx = _tracker.createInstance<If_clauseContext>(_ctx, getState());
  enterRule(_localctx, 18, STLanguageParser::RuleIf_clause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    expression(0);
    setState(110);
    match(STLanguageParser::TOKEN_IF_THEN);
    setState(112); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(111);
      statement();
      setState(114); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_CASE)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_statementContext ------------------------------------------------------------------

STLanguageParser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::While_statementContext::TOKEN_WHILE() {
  return getToken(STLanguageParser::TOKEN_WHILE, 0);
}

STLanguageParser::ExpressionContext* STLanguageParser::While_statementContext::expression() {
  return getRuleContext<STLanguageParser::ExpressionContext>(0);
}

tree::TerminalNode* STLanguageParser::While_statementContext::TOKEN_DO() {
  return getToken(STLanguageParser::TOKEN_DO, 0);
}

tree::TerminalNode* STLanguageParser::While_statementContext::TOKEN_WHILE_END() {
  return getToken(STLanguageParser::TOKEN_WHILE_END, 0);
}

std::vector<STLanguageParser::StatementContext *> STLanguageParser::While_statementContext::statement() {
  return getRuleContexts<STLanguageParser::StatementContext>();
}

STLanguageParser::StatementContext* STLanguageParser::While_statementContext::statement(size_t i) {
  return getRuleContext<STLanguageParser::StatementContext>(i);
}


size_t STLanguageParser::While_statementContext::getRuleIndex() const {
  return STLanguageParser::RuleWhile_statement;
}

void STLanguageParser::While_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_statement(this);
}

void STLanguageParser::While_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_statement(this);
}


antlrcpp::Any STLanguageParser::While_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitWhile_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::While_statementContext* STLanguageParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 20, STLanguageParser::RuleWhile_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(STLanguageParser::TOKEN_WHILE);
    setState(117);
    expression(0);
    setState(118);
    match(STLanguageParser::TOKEN_DO);
    setState(120); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(119);
      statement();
      setState(122); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_CASE)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
    setState(124);
    match(STLanguageParser::TOKEN_WHILE_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_statementContext ------------------------------------------------------------------

STLanguageParser::For_statementContext::For_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::For_statementContext::TOKEN_FOR() {
  return getToken(STLanguageParser::TOKEN_FOR, 0);
}

std::vector<STLanguageParser::ExpressionContext *> STLanguageParser::For_statementContext::expression() {
  return getRuleContexts<STLanguageParser::ExpressionContext>();
}

STLanguageParser::ExpressionContext* STLanguageParser::For_statementContext::expression(size_t i) {
  return getRuleContext<STLanguageParser::ExpressionContext>(i);
}

tree::TerminalNode* STLanguageParser::For_statementContext::TOKEN_TO() {
  return getToken(STLanguageParser::TOKEN_TO, 0);
}

tree::TerminalNode* STLanguageParser::For_statementContext::TOKEN_DO() {
  return getToken(STLanguageParser::TOKEN_DO, 0);
}

tree::TerminalNode* STLanguageParser::For_statementContext::TOKEN_FOR_END() {
  return getToken(STLanguageParser::TOKEN_FOR_END, 0);
}

std::vector<STLanguageParser::StatementContext *> STLanguageParser::For_statementContext::statement() {
  return getRuleContexts<STLanguageParser::StatementContext>();
}

STLanguageParser::StatementContext* STLanguageParser::For_statementContext::statement(size_t i) {
  return getRuleContext<STLanguageParser::StatementContext>(i);
}


size_t STLanguageParser::For_statementContext::getRuleIndex() const {
  return STLanguageParser::RuleFor_statement;
}

void STLanguageParser::For_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_statement(this);
}

void STLanguageParser::For_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_statement(this);
}


antlrcpp::Any STLanguageParser::For_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitFor_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::For_statementContext* STLanguageParser::for_statement() {
  For_statementContext *_localctx = _tracker.createInstance<For_statementContext>(_ctx, getState());
  enterRule(_localctx, 22, STLanguageParser::RuleFor_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(STLanguageParser::TOKEN_FOR);
    setState(127);
    expression(0);
    setState(128);
    match(STLanguageParser::TOKEN_TO);
    setState(129);
    expression(0);
    setState(130);
    match(STLanguageParser::TOKEN_DO);
    setState(132); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(131);
      statement();
      setState(134); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_CASE)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
    setState(136);
    match(STLanguageParser::TOKEN_FOR_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Repeat_statementContext ------------------------------------------------------------------

STLanguageParser::Repeat_statementContext::Repeat_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::Repeat_statementContext::TOKEN_REPEAT() {
  return getToken(STLanguageParser::TOKEN_REPEAT, 0);
}

tree::TerminalNode* STLanguageParser::Repeat_statementContext::TOKEN_UNTIL() {
  return getToken(STLanguageParser::TOKEN_UNTIL, 0);
}

STLanguageParser::ExpressionContext* STLanguageParser::Repeat_statementContext::expression() {
  return getRuleContext<STLanguageParser::ExpressionContext>(0);
}

tree::TerminalNode* STLanguageParser::Repeat_statementContext::TOKEN_REPEAT_END() {
  return getToken(STLanguageParser::TOKEN_REPEAT_END, 0);
}

std::vector<STLanguageParser::StatementContext *> STLanguageParser::Repeat_statementContext::statement() {
  return getRuleContexts<STLanguageParser::StatementContext>();
}

STLanguageParser::StatementContext* STLanguageParser::Repeat_statementContext::statement(size_t i) {
  return getRuleContext<STLanguageParser::StatementContext>(i);
}


size_t STLanguageParser::Repeat_statementContext::getRuleIndex() const {
  return STLanguageParser::RuleRepeat_statement;
}

void STLanguageParser::Repeat_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeat_statement(this);
}

void STLanguageParser::Repeat_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeat_statement(this);
}


antlrcpp::Any STLanguageParser::Repeat_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitRepeat_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Repeat_statementContext* STLanguageParser::repeat_statement() {
  Repeat_statementContext *_localctx = _tracker.createInstance<Repeat_statementContext>(_ctx, getState());
  enterRule(_localctx, 24, STLanguageParser::RuleRepeat_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(STLanguageParser::TOKEN_REPEAT);
    setState(140); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(139);
      statement();
      setState(142); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_CASE)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
    setState(144);
    match(STLanguageParser::TOKEN_UNTIL);
    setState(145);
    expression(0);
    setState(146);
    match(STLanguageParser::TOKEN_REPEAT_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_statementContext ------------------------------------------------------------------

STLanguageParser::Case_statementContext::Case_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::Case_statementContext::TOKEN_CASE() {
  return getToken(STLanguageParser::TOKEN_CASE, 0);
}

STLanguageParser::VariableContext* STLanguageParser::Case_statementContext::variable() {
  return getRuleContext<STLanguageParser::VariableContext>(0);
}

tree::TerminalNode* STLanguageParser::Case_statementContext::TOKEN_OF() {
  return getToken(STLanguageParser::TOKEN_OF, 0);
}

tree::TerminalNode* STLanguageParser::Case_statementContext::TOKEN_CASE_END() {
  return getToken(STLanguageParser::TOKEN_CASE_END, 0);
}

std::vector<STLanguageParser::Token_case_labelContext *> STLanguageParser::Case_statementContext::token_case_label() {
  return getRuleContexts<STLanguageParser::Token_case_labelContext>();
}

STLanguageParser::Token_case_labelContext* STLanguageParser::Case_statementContext::token_case_label(size_t i) {
  return getRuleContext<STLanguageParser::Token_case_labelContext>(i);
}

std::vector<STLanguageParser::StatementContext *> STLanguageParser::Case_statementContext::statement() {
  return getRuleContexts<STLanguageParser::StatementContext>();
}

STLanguageParser::StatementContext* STLanguageParser::Case_statementContext::statement(size_t i) {
  return getRuleContext<STLanguageParser::StatementContext>(i);
}


size_t STLanguageParser::Case_statementContext::getRuleIndex() const {
  return STLanguageParser::RuleCase_statement;
}

void STLanguageParser::Case_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_statement(this);
}

void STLanguageParser::Case_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_statement(this);
}


antlrcpp::Any STLanguageParser::Case_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitCase_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Case_statementContext* STLanguageParser::case_statement() {
  Case_statementContext *_localctx = _tracker.createInstance<Case_statementContext>(_ctx, getState());
  enterRule(_localctx, 26, STLanguageParser::RuleCase_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(STLanguageParser::TOKEN_CASE);
    setState(149);
    variable();
    setState(150);
    match(STLanguageParser::TOKEN_OF);
    setState(161); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(152); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(151);
                token_case_label();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(154); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(157); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(156);
                statement();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(159); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(163); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_ELSE)
      | (1ULL << STLanguageParser::TOKEN_NOT)
      | (1ULL << STLanguageParser::TOKEN_HEX_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_DEC_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_OCT_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_BIN_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_PLUS)
      | (1ULL << STLanguageParser::TOKEN_MINUS)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
    setState(165);
    match(STLanguageParser::TOKEN_CASE_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Token_case_labelContext ------------------------------------------------------------------

STLanguageParser::Token_case_labelContext::Token_case_labelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<STLanguageParser::ValueContext *> STLanguageParser::Token_case_labelContext::value() {
  return getRuleContexts<STLanguageParser::ValueContext>();
}

STLanguageParser::ValueContext* STLanguageParser::Token_case_labelContext::value(size_t i) {
  return getRuleContext<STLanguageParser::ValueContext>(i);
}

tree::TerminalNode* STLanguageParser::Token_case_labelContext::TOKEN_CASE_LBL_SEP() {
  return getToken(STLanguageParser::TOKEN_CASE_LBL_SEP, 0);
}

std::vector<tree::TerminalNode *> STLanguageParser::Token_case_labelContext::TOKEN_CASE_VAL_SEP() {
  return getTokens(STLanguageParser::TOKEN_CASE_VAL_SEP);
}

tree::TerminalNode* STLanguageParser::Token_case_labelContext::TOKEN_CASE_VAL_SEP(size_t i) {
  return getToken(STLanguageParser::TOKEN_CASE_VAL_SEP, i);
}

tree::TerminalNode* STLanguageParser::Token_case_labelContext::TOKEN_CASE_RANGE() {
  return getToken(STLanguageParser::TOKEN_CASE_RANGE, 0);
}

tree::TerminalNode* STLanguageParser::Token_case_labelContext::TOKEN_ELSE() {
  return getToken(STLanguageParser::TOKEN_ELSE, 0);
}


size_t STLanguageParser::Token_case_labelContext::getRuleIndex() const {
  return STLanguageParser::RuleToken_case_label;
}

void STLanguageParser::Token_case_labelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToken_case_label(this);
}

void STLanguageParser::Token_case_labelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToken_case_label(this);
}


antlrcpp::Any STLanguageParser::Token_case_labelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitToken_case_label(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Token_case_labelContext* STLanguageParser::token_case_label() {
  Token_case_labelContext *_localctx = _tracker.createInstance<Token_case_labelContext>(_ctx, getState());
  enterRule(_localctx, 28, STLanguageParser::RuleToken_case_label);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(183);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(167);
      value();
      setState(172);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == STLanguageParser::TOKEN_CASE_VAL_SEP) {
        setState(168);
        match(STLanguageParser::TOKEN_CASE_VAL_SEP);
        setState(169);
        value();
        setState(174);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(175);
      match(STLanguageParser::TOKEN_CASE_LBL_SEP);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(177);
      value();
      setState(178);
      match(STLanguageParser::TOKEN_CASE_RANGE);
      setState(179);
      value();
      setState(180);
      match(STLanguageParser::TOKEN_CASE_LBL_SEP);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(182);
      match(STLanguageParser::TOKEN_ELSE);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_statementContext ------------------------------------------------------------------

STLanguageParser::Assign_statementContext::Assign_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STLanguageParser::VariableContext* STLanguageParser::Assign_statementContext::variable() {
  return getRuleContext<STLanguageParser::VariableContext>(0);
}

STLanguageParser::Assign_operatorContext* STLanguageParser::Assign_statementContext::assign_operator() {
  return getRuleContext<STLanguageParser::Assign_operatorContext>(0);
}

STLanguageParser::ExpressionContext* STLanguageParser::Assign_statementContext::expression() {
  return getRuleContext<STLanguageParser::ExpressionContext>(0);
}


size_t STLanguageParser::Assign_statementContext::getRuleIndex() const {
  return STLanguageParser::RuleAssign_statement;
}

void STLanguageParser::Assign_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign_statement(this);
}

void STLanguageParser::Assign_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign_statement(this);
}


antlrcpp::Any STLanguageParser::Assign_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitAssign_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Assign_statementContext* STLanguageParser::assign_statement() {
  Assign_statementContext *_localctx = _tracker.createInstance<Assign_statementContext>(_ctx, getState());
  enterRule(_localctx, 30, STLanguageParser::RuleAssign_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    variable();
    setState(186);
    assign_operator();
    setState(187);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

STLanguageParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STLanguageParser::ValueContext* STLanguageParser::ExpressionContext::value() {
  return getRuleContext<STLanguageParser::ValueContext>(0);
}

tree::TerminalNode* STLanguageParser::ExpressionContext::TOKEN_OPEN_BRACE() {
  return getToken(STLanguageParser::TOKEN_OPEN_BRACE, 0);
}

std::vector<STLanguageParser::ExpressionContext *> STLanguageParser::ExpressionContext::expression() {
  return getRuleContexts<STLanguageParser::ExpressionContext>();
}

STLanguageParser::ExpressionContext* STLanguageParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<STLanguageParser::ExpressionContext>(i);
}

tree::TerminalNode* STLanguageParser::ExpressionContext::TOKEN_CLOSE_BRACE() {
  return getToken(STLanguageParser::TOKEN_CLOSE_BRACE, 0);
}

STLanguageParser::Function_callContext* STLanguageParser::ExpressionContext::function_call() {
  return getRuleContext<STLanguageParser::Function_callContext>(0);
}

STLanguageParser::Arith_operator_muldivContext* STLanguageParser::ExpressionContext::arith_operator_muldiv() {
  return getRuleContext<STLanguageParser::Arith_operator_muldivContext>(0);
}

STLanguageParser::Arith_operator_addsubContext* STLanguageParser::ExpressionContext::arith_operator_addsub() {
  return getRuleContext<STLanguageParser::Arith_operator_addsubContext>(0);
}

STLanguageParser::Compare_operator_cmpContext* STLanguageParser::ExpressionContext::compare_operator_cmp() {
  return getRuleContext<STLanguageParser::Compare_operator_cmpContext>(0);
}

STLanguageParser::Compare_operator_eqContext* STLanguageParser::ExpressionContext::compare_operator_eq() {
  return getRuleContext<STLanguageParser::Compare_operator_eqContext>(0);
}

tree::TerminalNode* STLanguageParser::ExpressionContext::TOKEN_AND() {
  return getToken(STLanguageParser::TOKEN_AND, 0);
}

tree::TerminalNode* STLanguageParser::ExpressionContext::TOKEN_XOR() {
  return getToken(STLanguageParser::TOKEN_XOR, 0);
}

tree::TerminalNode* STLanguageParser::ExpressionContext::TOKEN_OR() {
  return getToken(STLanguageParser::TOKEN_OR, 0);
}


size_t STLanguageParser::ExpressionContext::getRuleIndex() const {
  return STLanguageParser::RuleExpression;
}

void STLanguageParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void STLanguageParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any STLanguageParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


STLanguageParser::ExpressionContext* STLanguageParser::expression() {
   return expression(0);
}

STLanguageParser::ExpressionContext* STLanguageParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  STLanguageParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  STLanguageParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, STLanguageParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(196);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(190);
      value();
      break;
    }

    case 2: {
      setState(191);
      match(STLanguageParser::TOKEN_OPEN_BRACE);
      setState(192);
      expression(0);
      setState(193);
      match(STLanguageParser::TOKEN_CLOSE_BRACE);
      break;
    }

    case 3: {
      setState(195);
      function_call();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(225);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(223);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(198);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(199);
          arith_operator_muldiv();
          setState(200);
          expression(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(202);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(203);
          arith_operator_addsub();
          setState(204);
          expression(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(206);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(207);
          compare_operator_cmp();
          setState(208);
          expression(7);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(210);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(211);
          compare_operator_eq();
          setState(212);
          expression(6);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(214);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(215);
          match(STLanguageParser::TOKEN_AND);
          setState(216);
          expression(5);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(217);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(218);
          match(STLanguageParser::TOKEN_XOR);
          setState(219);
          expression(4);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(220);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(221);
          match(STLanguageParser::TOKEN_OR);
          setState(222);
          expression(3);
          break;
        }

        } 
      }
      setState(227);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

STLanguageParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::Function_callContext::IDENTIFIER() {
  return getToken(STLanguageParser::IDENTIFIER, 0);
}

tree::TerminalNode* STLanguageParser::Function_callContext::TOKEN_OPEN_BRACE() {
  return getToken(STLanguageParser::TOKEN_OPEN_BRACE, 0);
}

tree::TerminalNode* STLanguageParser::Function_callContext::TOKEN_CLOSE_BRACE() {
  return getToken(STLanguageParser::TOKEN_CLOSE_BRACE, 0);
}

std::vector<STLanguageParser::ExpressionContext *> STLanguageParser::Function_callContext::expression() {
  return getRuleContexts<STLanguageParser::ExpressionContext>();
}

STLanguageParser::ExpressionContext* STLanguageParser::Function_callContext::expression(size_t i) {
  return getRuleContext<STLanguageParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> STLanguageParser::Function_callContext::TOKEN_ARG_SEP() {
  return getTokens(STLanguageParser::TOKEN_ARG_SEP);
}

tree::TerminalNode* STLanguageParser::Function_callContext::TOKEN_ARG_SEP(size_t i) {
  return getToken(STLanguageParser::TOKEN_ARG_SEP, i);
}

std::vector<STLanguageParser::Func_in_argumentContext *> STLanguageParser::Function_callContext::func_in_argument() {
  return getRuleContexts<STLanguageParser::Func_in_argumentContext>();
}

STLanguageParser::Func_in_argumentContext* STLanguageParser::Function_callContext::func_in_argument(size_t i) {
  return getRuleContext<STLanguageParser::Func_in_argumentContext>(i);
}

std::vector<STLanguageParser::Func_out_argumentContext *> STLanguageParser::Function_callContext::func_out_argument() {
  return getRuleContexts<STLanguageParser::Func_out_argumentContext>();
}

STLanguageParser::Func_out_argumentContext* STLanguageParser::Function_callContext::func_out_argument(size_t i) {
  return getRuleContext<STLanguageParser::Func_out_argumentContext>(i);
}


size_t STLanguageParser::Function_callContext::getRuleIndex() const {
  return STLanguageParser::RuleFunction_call;
}

void STLanguageParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void STLanguageParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}


antlrcpp::Any STLanguageParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Function_callContext* STLanguageParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 34, STLanguageParser::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(261);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(228);
      match(STLanguageParser::IDENTIFIER);
      setState(229);
      match(STLanguageParser::TOKEN_OPEN_BRACE);
      setState(230);
      match(STLanguageParser::TOKEN_CLOSE_BRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(231);
      match(STLanguageParser::IDENTIFIER);
      setState(232);
      match(STLanguageParser::TOKEN_OPEN_BRACE);
      setState(233);
      expression(0);
      setState(238);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == STLanguageParser::TOKEN_ARG_SEP) {
        setState(234);
        match(STLanguageParser::TOKEN_ARG_SEP);
        setState(235);
        expression(0);
        setState(240);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(241);
      match(STLanguageParser::TOKEN_CLOSE_BRACE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(243);
      match(STLanguageParser::IDENTIFIER);
      setState(244);
      match(STLanguageParser::TOKEN_OPEN_BRACE);

      setState(247);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
      case 1: {
        setState(245);
        func_in_argument();
        break;
      }

      case 2: {
        setState(246);
        func_out_argument();
        break;
      }

      }
      setState(256);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == STLanguageParser::TOKEN_ARG_SEP) {
        setState(249);
        match(STLanguageParser::TOKEN_ARG_SEP);
        setState(252);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          setState(250);
          func_in_argument();
          break;
        }

        case 2: {
          setState(251);
          func_out_argument();
          break;
        }

        }
        setState(258);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(259);
      match(STLanguageParser::TOKEN_CLOSE_BRACE);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_in_argumentContext ------------------------------------------------------------------

STLanguageParser::Func_in_argumentContext::Func_in_argumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STLanguageParser::VariableContext* STLanguageParser::Func_in_argumentContext::variable() {
  return getRuleContext<STLanguageParser::VariableContext>(0);
}

STLanguageParser::Assign_operatorContext* STLanguageParser::Func_in_argumentContext::assign_operator() {
  return getRuleContext<STLanguageParser::Assign_operatorContext>(0);
}

STLanguageParser::ExpressionContext* STLanguageParser::Func_in_argumentContext::expression() {
  return getRuleContext<STLanguageParser::ExpressionContext>(0);
}


size_t STLanguageParser::Func_in_argumentContext::getRuleIndex() const {
  return STLanguageParser::RuleFunc_in_argument;
}

void STLanguageParser::Func_in_argumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_in_argument(this);
}

void STLanguageParser::Func_in_argumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_in_argument(this);
}


antlrcpp::Any STLanguageParser::Func_in_argumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitFunc_in_argument(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Func_in_argumentContext* STLanguageParser::func_in_argument() {
  Func_in_argumentContext *_localctx = _tracker.createInstance<Func_in_argumentContext>(_ctx, getState());
  enterRule(_localctx, 36, STLanguageParser::RuleFunc_in_argument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    variable();
    setState(264);
    assign_operator();
    setState(265);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_out_argumentContext ------------------------------------------------------------------

STLanguageParser::Func_out_argumentContext::Func_out_argumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<STLanguageParser::VariableContext *> STLanguageParser::Func_out_argumentContext::variable() {
  return getRuleContexts<STLanguageParser::VariableContext>();
}

STLanguageParser::VariableContext* STLanguageParser::Func_out_argumentContext::variable(size_t i) {
  return getRuleContext<STLanguageParser::VariableContext>(i);
}

STLanguageParser::Assign_operator_outContext* STLanguageParser::Func_out_argumentContext::assign_operator_out() {
  return getRuleContext<STLanguageParser::Assign_operator_outContext>(0);
}


size_t STLanguageParser::Func_out_argumentContext::getRuleIndex() const {
  return STLanguageParser::RuleFunc_out_argument;
}

void STLanguageParser::Func_out_argumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_out_argument(this);
}

void STLanguageParser::Func_out_argumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_out_argument(this);
}


antlrcpp::Any STLanguageParser::Func_out_argumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitFunc_out_argument(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Func_out_argumentContext* STLanguageParser::func_out_argument() {
  Func_out_argumentContext *_localctx = _tracker.createInstance<Func_out_argumentContext>(_ctx, getState());
  enterRule(_localctx, 38, STLanguageParser::RuleFunc_out_argument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    variable();
    setState(268);
    assign_operator_out();
    setState(269);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_operatorContext ------------------------------------------------------------------

STLanguageParser::Assign_operatorContext::Assign_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::Assign_operatorContext::TOKEN_ASSIGN_RL() {
  return getToken(STLanguageParser::TOKEN_ASSIGN_RL, 0);
}


size_t STLanguageParser::Assign_operatorContext::getRuleIndex() const {
  return STLanguageParser::RuleAssign_operator;
}

void STLanguageParser::Assign_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign_operator(this);
}

void STLanguageParser::Assign_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign_operator(this);
}


antlrcpp::Any STLanguageParser::Assign_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitAssign_operator(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Assign_operatorContext* STLanguageParser::assign_operator() {
  Assign_operatorContext *_localctx = _tracker.createInstance<Assign_operatorContext>(_ctx, getState());
  enterRule(_localctx, 40, STLanguageParser::RuleAssign_operator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(STLanguageParser::TOKEN_ASSIGN_RL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compare_operator_cmpContext ------------------------------------------------------------------

STLanguageParser::Compare_operator_cmpContext::Compare_operator_cmpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::Compare_operator_cmpContext::TOKEN_CMP_GT_EQ() {
  return getToken(STLanguageParser::TOKEN_CMP_GT_EQ, 0);
}

tree::TerminalNode* STLanguageParser::Compare_operator_cmpContext::TOKEN_CMP_LT_EQ() {
  return getToken(STLanguageParser::TOKEN_CMP_LT_EQ, 0);
}

tree::TerminalNode* STLanguageParser::Compare_operator_cmpContext::TOKEN_CMP_GT() {
  return getToken(STLanguageParser::TOKEN_CMP_GT, 0);
}

tree::TerminalNode* STLanguageParser::Compare_operator_cmpContext::TOKEN_CMP_LT() {
  return getToken(STLanguageParser::TOKEN_CMP_LT, 0);
}


size_t STLanguageParser::Compare_operator_cmpContext::getRuleIndex() const {
  return STLanguageParser::RuleCompare_operator_cmp;
}

void STLanguageParser::Compare_operator_cmpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompare_operator_cmp(this);
}

void STLanguageParser::Compare_operator_cmpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompare_operator_cmp(this);
}


antlrcpp::Any STLanguageParser::Compare_operator_cmpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitCompare_operator_cmp(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Compare_operator_cmpContext* STLanguageParser::compare_operator_cmp() {
  Compare_operator_cmpContext *_localctx = _tracker.createInstance<Compare_operator_cmpContext>(_ctx, getState());
  enterRule(_localctx, 42, STLanguageParser::RuleCompare_operator_cmp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_CMP_GT_EQ)
      | (1ULL << STLanguageParser::TOKEN_CMP_LT_EQ)
      | (1ULL << STLanguageParser::TOKEN_CMP_GT)
      | (1ULL << STLanguageParser::TOKEN_CMP_LT))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compare_operator_eqContext ------------------------------------------------------------------

STLanguageParser::Compare_operator_eqContext::Compare_operator_eqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::Compare_operator_eqContext::TOKEN_CMP_EQ() {
  return getToken(STLanguageParser::TOKEN_CMP_EQ, 0);
}

tree::TerminalNode* STLanguageParser::Compare_operator_eqContext::TOKEN_CMP_NEQ() {
  return getToken(STLanguageParser::TOKEN_CMP_NEQ, 0);
}


size_t STLanguageParser::Compare_operator_eqContext::getRuleIndex() const {
  return STLanguageParser::RuleCompare_operator_eq;
}

void STLanguageParser::Compare_operator_eqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompare_operator_eq(this);
}

void STLanguageParser::Compare_operator_eqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompare_operator_eq(this);
}


antlrcpp::Any STLanguageParser::Compare_operator_eqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitCompare_operator_eq(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Compare_operator_eqContext* STLanguageParser::compare_operator_eq() {
  Compare_operator_eqContext *_localctx = _tracker.createInstance<Compare_operator_eqContext>(_ctx, getState());
  enterRule(_localctx, 44, STLanguageParser::RuleCompare_operator_eq);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    _la = _input->LA(1);
    if (!(_la == STLanguageParser::TOKEN_CMP_EQ

    || _la == STLanguageParser::TOKEN_CMP_NEQ)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_operator_outContext ------------------------------------------------------------------

STLanguageParser::Assign_operator_outContext::Assign_operator_outContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::Assign_operator_outContext::TOKEN_ASSIGN_LR() {
  return getToken(STLanguageParser::TOKEN_ASSIGN_LR, 0);
}


size_t STLanguageParser::Assign_operator_outContext::getRuleIndex() const {
  return STLanguageParser::RuleAssign_operator_out;
}

void STLanguageParser::Assign_operator_outContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign_operator_out(this);
}

void STLanguageParser::Assign_operator_outContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign_operator_out(this);
}


antlrcpp::Any STLanguageParser::Assign_operator_outContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitAssign_operator_out(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Assign_operator_outContext* STLanguageParser::assign_operator_out() {
  Assign_operator_outContext *_localctx = _tracker.createInstance<Assign_operator_outContext>(_ctx, getState());
  enterRule(_localctx, 46, STLanguageParser::RuleAssign_operator_out);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(277);
    match(STLanguageParser::TOKEN_ASSIGN_LR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_operator_preContext ------------------------------------------------------------------

STLanguageParser::Unary_operator_preContext::Unary_operator_preContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::Unary_operator_preContext::TOKEN_PLUS() {
  return getToken(STLanguageParser::TOKEN_PLUS, 0);
}

tree::TerminalNode* STLanguageParser::Unary_operator_preContext::TOKEN_MINUS() {
  return getToken(STLanguageParser::TOKEN_MINUS, 0);
}

tree::TerminalNode* STLanguageParser::Unary_operator_preContext::TOKEN_NOT() {
  return getToken(STLanguageParser::TOKEN_NOT, 0);
}


size_t STLanguageParser::Unary_operator_preContext::getRuleIndex() const {
  return STLanguageParser::RuleUnary_operator_pre;
}

void STLanguageParser::Unary_operator_preContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_operator_pre(this);
}

void STLanguageParser::Unary_operator_preContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_operator_pre(this);
}


antlrcpp::Any STLanguageParser::Unary_operator_preContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitUnary_operator_pre(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Unary_operator_preContext* STLanguageParser::unary_operator_pre() {
  Unary_operator_preContext *_localctx = _tracker.createInstance<Unary_operator_preContext>(_ctx, getState());
  enterRule(_localctx, 48, STLanguageParser::RuleUnary_operator_pre);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_NOT)
      | (1ULL << STLanguageParser::TOKEN_PLUS)
      | (1ULL << STLanguageParser::TOKEN_MINUS))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arith_operator_muldivContext ------------------------------------------------------------------

STLanguageParser::Arith_operator_muldivContext::Arith_operator_muldivContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::Arith_operator_muldivContext::TOKEN_MUL() {
  return getToken(STLanguageParser::TOKEN_MUL, 0);
}

tree::TerminalNode* STLanguageParser::Arith_operator_muldivContext::TOKEN_DIV() {
  return getToken(STLanguageParser::TOKEN_DIV, 0);
}


size_t STLanguageParser::Arith_operator_muldivContext::getRuleIndex() const {
  return STLanguageParser::RuleArith_operator_muldiv;
}

void STLanguageParser::Arith_operator_muldivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArith_operator_muldiv(this);
}

void STLanguageParser::Arith_operator_muldivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArith_operator_muldiv(this);
}


antlrcpp::Any STLanguageParser::Arith_operator_muldivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitArith_operator_muldiv(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Arith_operator_muldivContext* STLanguageParser::arith_operator_muldiv() {
  Arith_operator_muldivContext *_localctx = _tracker.createInstance<Arith_operator_muldivContext>(_ctx, getState());
  enterRule(_localctx, 50, STLanguageParser::RuleArith_operator_muldiv);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    _la = _input->LA(1);
    if (!(_la == STLanguageParser::TOKEN_MUL

    || _la == STLanguageParser::TOKEN_DIV)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arith_operator_addsubContext ------------------------------------------------------------------

STLanguageParser::Arith_operator_addsubContext::Arith_operator_addsubContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::Arith_operator_addsubContext::TOKEN_PLUS() {
  return getToken(STLanguageParser::TOKEN_PLUS, 0);
}

tree::TerminalNode* STLanguageParser::Arith_operator_addsubContext::TOKEN_MINUS() {
  return getToken(STLanguageParser::TOKEN_MINUS, 0);
}


size_t STLanguageParser::Arith_operator_addsubContext::getRuleIndex() const {
  return STLanguageParser::RuleArith_operator_addsub;
}

void STLanguageParser::Arith_operator_addsubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArith_operator_addsub(this);
}

void STLanguageParser::Arith_operator_addsubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArith_operator_addsub(this);
}


antlrcpp::Any STLanguageParser::Arith_operator_addsubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitArith_operator_addsub(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Arith_operator_addsubContext* STLanguageParser::arith_operator_addsub() {
  Arith_operator_addsubContext *_localctx = _tracker.createInstance<Arith_operator_addsubContext>(_ctx, getState());
  enterRule(_localctx, 52, STLanguageParser::RuleArith_operator_addsub);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    _la = _input->LA(1);
    if (!(_la == STLanguageParser::TOKEN_PLUS

    || _la == STLanguageParser::TOKEN_MINUS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

STLanguageParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STLanguageParser::Unary_operator_preContext* STLanguageParser::ValueContext::unary_operator_pre() {
  return getRuleContext<STLanguageParser::Unary_operator_preContext>(0);
}

STLanguageParser::ValueContext* STLanguageParser::ValueContext::value() {
  return getRuleContext<STLanguageParser::ValueContext>(0);
}

STLanguageParser::ImmediateContext* STLanguageParser::ValueContext::immediate() {
  return getRuleContext<STLanguageParser::ImmediateContext>(0);
}

STLanguageParser::VariableContext* STLanguageParser::ValueContext::variable() {
  return getRuleContext<STLanguageParser::VariableContext>(0);
}


size_t STLanguageParser::ValueContext::getRuleIndex() const {
  return STLanguageParser::RuleValue;
}

void STLanguageParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void STLanguageParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


antlrcpp::Any STLanguageParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::ValueContext* STLanguageParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 54, STLanguageParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(290);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(285);
      unary_operator_pre();
      setState(286);
      value();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(288);
      immediate();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(289);
      variable();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImmediateContext ------------------------------------------------------------------

STLanguageParser::ImmediateContext::ImmediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::ImmediateContext::TOKEN_DEC_NUMBER() {
  return getToken(STLanguageParser::TOKEN_DEC_NUMBER, 0);
}

tree::TerminalNode* STLanguageParser::ImmediateContext::TOKEN_MINUS() {
  return getToken(STLanguageParser::TOKEN_MINUS, 0);
}

tree::TerminalNode* STLanguageParser::ImmediateContext::TOKEN_HEX_NUMBER() {
  return getToken(STLanguageParser::TOKEN_HEX_NUMBER, 0);
}

tree::TerminalNode* STLanguageParser::ImmediateContext::TOKEN_OCT_NUMBER() {
  return getToken(STLanguageParser::TOKEN_OCT_NUMBER, 0);
}

tree::TerminalNode* STLanguageParser::ImmediateContext::TOKEN_BIN_NUMBER() {
  return getToken(STLanguageParser::TOKEN_BIN_NUMBER, 0);
}


size_t STLanguageParser::ImmediateContext::getRuleIndex() const {
  return STLanguageParser::RuleImmediate;
}

void STLanguageParser::ImmediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate(this);
}

void STLanguageParser::ImmediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate(this);
}


antlrcpp::Any STLanguageParser::ImmediateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitImmediate(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::ImmediateContext* STLanguageParser::immediate() {
  ImmediateContext *_localctx = _tracker.createInstance<ImmediateContext>(_ctx, getState());
  enterRule(_localctx, 56, STLanguageParser::RuleImmediate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(299);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case STLanguageParser::TOKEN_DEC_NUMBER:
      case STLanguageParser::TOKEN_MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(293);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == STLanguageParser::TOKEN_MINUS) {
          setState(292);
          match(STLanguageParser::TOKEN_MINUS);
        }
        setState(295);
        match(STLanguageParser::TOKEN_DEC_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_HEX_NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(296);
        match(STLanguageParser::TOKEN_HEX_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_OCT_NUMBER: {
        enterOuterAlt(_localctx, 3);
        setState(297);
        match(STLanguageParser::TOKEN_OCT_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_BIN_NUMBER: {
        enterOuterAlt(_localctx, 4);
        setState(298);
        match(STLanguageParser::TOKEN_BIN_NUMBER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

STLanguageParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::VariableContext::IDENTIFIER() {
  return getToken(STLanguageParser::IDENTIFIER, 0);
}


size_t STLanguageParser::VariableContext::getRuleIndex() const {
  return STLanguageParser::RuleVariable;
}

void STLanguageParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void STLanguageParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}


antlrcpp::Any STLanguageParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::VariableContext* STLanguageParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 58, STLanguageParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(301);
    match(STLanguageParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool STLanguageParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 16: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool STLanguageParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> STLanguageParser::_decisionToDFA;
atn::PredictionContextCache STLanguageParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN STLanguageParser::_atn;
std::vector<uint16_t> STLanguageParser::_serializedATN;

std::vector<std::string> STLanguageParser::_ruleNames = {
  "input", "statement", "single_statement", "function_call_statement", "return_statement", 
  "if_statement", "if_statement_main_clause", "if_statement_elif_clause", 
  "if_statement_else_clause", "if_clause", "while_statement", "for_statement", 
  "repeat_statement", "case_statement", "token_case_label", "assign_statement", 
  "expression", "function_call", "func_in_argument", "func_out_argument", 
  "assign_operator", "compare_operator_cmp", "compare_operator_eq", "assign_operator_out", 
  "unary_operator_pre", "arith_operator_muldiv", "arith_operator_addsub", 
  "value", "immediate", "variable"
};

std::vector<std::string> STLanguageParser::_literalNames = {
  "", "'//'", "'/*'", "", "", "", "", "", "", "", "", "", "'RETURN'", "'FOR'", 
  "'END_FOR'", "'WHILE'", "'DO'", "'TO'", "'END_WHILE'", "'IF'", "'THEN'", 
  "'ELSIF'", "'ELSE'", "'END_IF'", "'SELECT'", "'END_SELECT'", "'REPEAT'", 
  "'UNTIL'", "'END_REPEAT'", "'CASE'", "'OF'", "'END_CASE'", "'NOT'", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'XOR'", "'OR'", 
  "", "", "", "", "'*/'"
};

std::vector<std::string> STLanguageParser::_symbolicNames = {
  "", "LINE_COMMENT", "C_STYLE_COMMENT", "WS", "TOKEN_ASSIGN_RL", "TOKEN_ASSIGN_LR", 
  "TOKEN_CMP_EQ", "TOKEN_CMP_GT_EQ", "TOKEN_CMP_LT_EQ", "TOKEN_CMP_NEQ", 
  "TOKEN_CMP_GT", "TOKEN_CMP_LT", "TOKEN_RETURN", "TOKEN_FOR", "TOKEN_FOR_END", 
  "TOKEN_WHILE", "TOKEN_DO", "TOKEN_TO", "TOKEN_WHILE_END", "TOKEN_IF", 
  "TOKEN_IF_THEN", "TOKEN_IF_ELIF", "TOKEN_ELSE", "TOKEN_IF_END", "TOKEN_SELECT", 
  "TOKEN_SELECT_END", "TOKEN_REPEAT", "TOKEN_UNTIL", "TOKEN_REPEAT_END", 
  "TOKEN_CASE", "TOKEN_OF", "TOKEN_CASE_END", "TOKEN_NOT", "TOKEN_OPEN_BRACE", 
  "TOKEN_CLOSE_BRACE", "TOKEN_HEX_NUMBER", "TOKEN_DEC_NUMBER", "TOKEN_OCT_NUMBER", 
  "TOKEN_BIN_NUMBER", "TOKEN_CASE_RANGE", "TOKEN_PLUS", "TOKEN_MINUS", "TOKEN_MUL", 
  "TOKEN_DIV", "TOKEN_ARG_SEP", "TOKEN_CASE_VAL_SEP", "TOKEN_CASE_LBL_SEP", 
  "TOKEN_AND", "TOKEN_XOR", "TOKEN_OR", "STATEMENT_SEPARATOR", "IDENTIFIER", 
  "NL", "NOT_NL", "END_COMMENT", "COMMENT"
};

dfa::Vocabulary STLanguageParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> STLanguageParser::_tokenNames;

STLanguageParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x39, 0x132, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x3, 0x2, 0x7, 0x2, 0x40, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x43, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x52, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x5a, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 
    0x5d, 0xb, 0x7, 0x3, 0x7, 0x5, 0x7, 0x60, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x6, 0xa, 0x6c, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x6d, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x6, 0xb, 0x73, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0x74, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x6, 0xc, 0x7b, 0xa, 0xc, 0xd, 
    0xc, 0xe, 0xc, 0x7c, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0x87, 0xa, 0xd, 0xd, 0xd, 0xe, 
    0xd, 0x88, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x6, 0xe, 0x8f, 0xa, 
    0xe, 0xd, 0xe, 0xe, 0xe, 0x90, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x6, 0xf, 0x9b, 0xa, 0xf, 0xd, 
    0xf, 0xe, 0xf, 0x9c, 0x3, 0xf, 0x6, 0xf, 0xa0, 0xa, 0xf, 0xd, 0xf, 0xe, 
    0xf, 0xa1, 0x6, 0xf, 0xa4, 0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0xa5, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xad, 0xa, 
    0x10, 0xc, 0x10, 0xe, 0x10, 0xb0, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0xba, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0xc7, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x7, 0x12, 0xe2, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xe5, 0xb, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xef, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 
    0xf2, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0xfa, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x5, 0x13, 0xff, 0xa, 0x13, 0x7, 0x13, 0x101, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0x104, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x108, 
    0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x125, 0xa, 0x1d, 0x3, 0x1e, 0x5, 0x1e, 
    0x128, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 
    0x12e, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x2, 0x3, 0x22, 0x20, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
    0x34, 0x36, 0x38, 0x3a, 0x3c, 0x2, 0x7, 0x4, 0x2, 0x9, 0xa, 0xc, 0xd, 
    0x4, 0x2, 0x8, 0x8, 0xb, 0xb, 0x4, 0x2, 0x22, 0x22, 0x2a, 0x2b, 0x3, 
    0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2a, 0x2b, 0x2, 0x13d, 0x2, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x46, 0x3, 0x2, 0x2, 0x2, 0x6, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x53, 0x3, 0x2, 0x2, 0x2, 0xa, 0x55, 0x3, 0x2, 0x2, 0x2, 0xc, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x63, 0x3, 0x2, 0x2, 0x2, 0x10, 0x66, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x69, 0x3, 0x2, 0x2, 0x2, 0x14, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x76, 0x3, 0x2, 0x2, 0x2, 0x18, 0x80, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x96, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x20, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xc6, 0x3, 0x2, 0x2, 0x2, 0x24, 0x107, 0x3, 0x2, 0x2, 0x2, 0x26, 0x109, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x111, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x113, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x115, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x117, 0x3, 0x2, 0x2, 0x2, 0x32, 0x119, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x36, 0x11d, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x124, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x12f, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 0x5, 0x4, 0x3, 0x2, 0x3f, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x40, 0x43, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x3, 0x2, 
    0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0x2, 0x2, 
    0x3, 0x45, 0x3, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x5, 0x6, 0x4, 0x2, 
    0x47, 0x48, 0x7, 0x34, 0x2, 0x2, 0x48, 0x5, 0x3, 0x2, 0x2, 0x2, 0x49, 
    0x52, 0x5, 0xa, 0x6, 0x2, 0x4a, 0x52, 0x5, 0xc, 0x7, 0x2, 0x4b, 0x52, 
    0x5, 0x16, 0xc, 0x2, 0x4c, 0x52, 0x5, 0x18, 0xd, 0x2, 0x4d, 0x52, 0x5, 
    0x1a, 0xe, 0x2, 0x4e, 0x52, 0x5, 0x1c, 0xf, 0x2, 0x4f, 0x52, 0x5, 0x20, 
    0x11, 0x2, 0x50, 0x52, 0x5, 0x8, 0x5, 0x2, 0x51, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x51, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x51, 
    0x4e, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x52, 0x7, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x5, 
    0x24, 0x13, 0x2, 0x54, 0x9, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0xe, 
    0x2, 0x2, 0x56, 0xb, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5b, 0x5, 0xe, 0x8, 
    0x2, 0x58, 0x5a, 0x5, 0x10, 0x9, 0x2, 0x59, 0x58, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x60, 0x5, 0x12, 0xa, 0x2, 0x5f, 0x5e, 0x3, 
    0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x61, 0x62, 0x7, 0x19, 0x2, 0x2, 0x62, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x63, 0x64, 0x7, 0x15, 0x2, 0x2, 0x64, 0x65, 0x5, 0x14, 0xb, 0x2, 
    0x65, 0xf, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x7, 0x17, 0x2, 0x2, 0x67, 
    0x68, 0x5, 0x14, 0xb, 0x2, 0x68, 0x11, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6b, 
    0x7, 0x18, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0x4, 0x3, 0x2, 0x6b, 0x6a, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x6f, 0x70, 0x5, 0x22, 0x12, 0x2, 0x70, 0x72, 0x7, 0x16, 0x2, 0x2, 
    0x71, 0x73, 0x5, 0x4, 0x3, 0x2, 0x72, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 
    0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x75, 0x15, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x7, 
    0x11, 0x2, 0x2, 0x77, 0x78, 0x5, 0x22, 0x12, 0x2, 0x78, 0x7a, 0x7, 0x12, 
    0x2, 0x2, 0x79, 0x7b, 0x5, 0x4, 0x3, 0x2, 0x7a, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0x7f, 0x7, 0x14, 0x2, 0x2, 0x7f, 0x17, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 
    0x7, 0xf, 0x2, 0x2, 0x81, 0x82, 0x5, 0x22, 0x12, 0x2, 0x82, 0x83, 0x7, 
    0x13, 0x2, 0x2, 0x83, 0x84, 0x5, 0x22, 0x12, 0x2, 0x84, 0x86, 0x7, 0x12, 
    0x2, 0x2, 0x85, 0x87, 0x5, 0x4, 0x3, 0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 
    0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x8b, 0x7, 0x10, 0x2, 0x2, 0x8b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8e, 
    0x7, 0x1c, 0x2, 0x2, 0x8d, 0x8f, 0x5, 0x4, 0x3, 0x2, 0x8e, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x93, 0x7, 0x1d, 0x2, 0x2, 0x93, 0x94, 0x5, 0x22, 0x12, 0x2, 
    0x94, 0x95, 0x7, 0x1e, 0x2, 0x2, 0x95, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x97, 0x7, 0x1f, 0x2, 0x2, 0x97, 0x98, 0x5, 0x3c, 0x1f, 0x2, 0x98, 0xa3, 
    0x7, 0x20, 0x2, 0x2, 0x99, 0x9b, 0x5, 0x1e, 0x10, 0x2, 0x9a, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x9b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0xa0, 0x5, 0x4, 0x3, 0x2, 0x9f, 0x9e, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x9a, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0xa5, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0xa7, 0xa8, 0x7, 0x21, 0x2, 0x2, 0xa8, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0xae, 0x5, 0x38, 0x1d, 0x2, 0xaa, 0xab, 0x7, 0x2f, 0x2, 0x2, 
    0xab, 0xad, 0x5, 0x38, 0x1d, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xad, 
    0xb0, 0x3, 0x2, 0x2, 0x2, 0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 
    0x3, 0x2, 0x2, 0x2, 0xaf, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xae, 0x3, 
    0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x30, 0x2, 0x2, 0xb2, 0xba, 0x3, 0x2, 
    0x2, 0x2, 0xb3, 0xb4, 0x5, 0x38, 0x1d, 0x2, 0xb4, 0xb5, 0x7, 0x29, 0x2, 
    0x2, 0xb5, 0xb6, 0x5, 0x38, 0x1d, 0x2, 0xb6, 0xb7, 0x7, 0x30, 0x2, 0x2, 
    0xb7, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xba, 0x7, 0x18, 0x2, 0x2, 0xb9, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb8, 
    0x3, 0x2, 0x2, 0x2, 0xba, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x5, 
    0x3c, 0x1f, 0x2, 0xbc, 0xbd, 0x5, 0x2a, 0x16, 0x2, 0xbd, 0xbe, 0x5, 
    0x22, 0x12, 0x2, 0xbe, 0x21, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x8, 0x12, 
    0x1, 0x2, 0xc0, 0xc7, 0x5, 0x38, 0x1d, 0x2, 0xc1, 0xc2, 0x7, 0x23, 0x2, 
    0x2, 0xc2, 0xc3, 0x5, 0x22, 0x12, 0x2, 0xc3, 0xc4, 0x7, 0x24, 0x2, 0x2, 
    0xc4, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc7, 0x5, 0x24, 0x13, 0x2, 0xc6, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc5, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0xc, 
    0xa, 0x2, 0x2, 0xc9, 0xca, 0x5, 0x34, 0x1b, 0x2, 0xca, 0xcb, 0x5, 0x22, 
    0x12, 0xb, 0xcb, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0xc, 0x9, 0x2, 
    0x2, 0xcd, 0xce, 0x5, 0x36, 0x1c, 0x2, 0xce, 0xcf, 0x5, 0x22, 0x12, 
    0xa, 0xcf, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0xc, 0x8, 0x2, 0x2, 
    0xd1, 0xd2, 0x5, 0x2c, 0x17, 0x2, 0xd2, 0xd3, 0x5, 0x22, 0x12, 0x9, 
    0xd3, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0xc, 0x7, 0x2, 0x2, 0xd5, 
    0xd6, 0x5, 0x2e, 0x18, 0x2, 0xd6, 0xd7, 0x5, 0x22, 0x12, 0x8, 0xd7, 
    0xe2, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0xc, 0x6, 0x2, 0x2, 0xd9, 0xda, 
    0x7, 0x31, 0x2, 0x2, 0xda, 0xe2, 0x5, 0x22, 0x12, 0x7, 0xdb, 0xdc, 0xc, 
    0x5, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x32, 0x2, 0x2, 0xdd, 0xe2, 0x5, 0x22, 
    0x12, 0x6, 0xde, 0xdf, 0xc, 0x4, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x33, 0x2, 
    0x2, 0xe0, 0xe2, 0x5, 0x22, 0x12, 0x5, 0xe1, 0xc8, 0x3, 0x2, 0x2, 0x2, 
    0xe1, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xe1, 
    0xd4, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdb, 
    0x3, 0x2, 0x2, 0x2, 0xe1, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe5, 0x3, 
    0x2, 0x2, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0x23, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe3, 0x3, 0x2, 0x2, 
    0x2, 0xe6, 0xe7, 0x7, 0x35, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x23, 0x2, 0x2, 
    0xe8, 0x108, 0x7, 0x24, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x35, 0x2, 0x2, 0xea, 
    0xeb, 0x7, 0x23, 0x2, 0x2, 0xeb, 0xf0, 0x5, 0x22, 0x12, 0x2, 0xec, 0xed, 
    0x7, 0x2e, 0x2, 0x2, 0xed, 0xef, 0x5, 0x22, 0x12, 0x2, 0xee, 0xec, 0x3, 
    0x2, 0x2, 0x2, 0xef, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf3, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x7, 0x24, 0x2, 0x2, 
    0xf4, 0x108, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x35, 0x2, 0x2, 0xf6, 
    0xf9, 0x7, 0x23, 0x2, 0x2, 0xf7, 0xfa, 0x5, 0x26, 0x14, 0x2, 0xf8, 0xfa, 
    0x5, 0x28, 0x15, 0x2, 0xf9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf8, 0x3, 
    0x2, 0x2, 0x2, 0xfa, 0x102, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfe, 0x7, 0x2e, 
    0x2, 0x2, 0xfc, 0xff, 0x5, 0x26, 0x14, 0x2, 0xfd, 0xff, 0x5, 0x28, 0x15, 
    0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfd, 0x3, 0x2, 0x2, 0x2, 
    0xff, 0x101, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0x104, 0x3, 0x2, 0x2, 0x2, 0x102, 0x100, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 0x105, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x7, 0x24, 0x2, 0x2, 0x106, 
    0x108, 0x3, 0x2, 0x2, 0x2, 0x107, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x107, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0x107, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x108, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x3c, 0x1f, 0x2, 0x10a, 0x10b, 0x5, 
    0x2a, 0x16, 0x2, 0x10b, 0x10c, 0x5, 0x22, 0x12, 0x2, 0x10c, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x10d, 0x10e, 0x5, 0x3c, 0x1f, 0x2, 0x10e, 0x10f, 0x5, 
    0x30, 0x19, 0x2, 0x10f, 0x110, 0x5, 0x3c, 0x1f, 0x2, 0x110, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x111, 0x112, 0x7, 0x6, 0x2, 0x2, 0x112, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x113, 0x114, 0x9, 0x2, 0x2, 0x2, 0x114, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x115, 0x116, 0x9, 0x3, 0x2, 0x2, 0x116, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x117, 0x118, 0x7, 0x7, 0x2, 0x2, 0x118, 0x31, 0x3, 0x2, 0x2, 0x2, 0x119, 
    0x11a, 0x9, 0x4, 0x2, 0x2, 0x11a, 0x33, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 
    0x9, 0x5, 0x2, 0x2, 0x11c, 0x35, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x9, 
    0x6, 0x2, 0x2, 0x11e, 0x37, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x5, 0x32, 
    0x1a, 0x2, 0x120, 0x121, 0x5, 0x38, 0x1d, 0x2, 0x121, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x122, 0x125, 0x5, 0x3a, 0x1e, 0x2, 0x123, 0x125, 0x5, 0x3c, 
    0x1f, 0x2, 0x124, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x124, 0x122, 0x3, 0x2, 
    0x2, 0x2, 0x124, 0x123, 0x3, 0x2, 0x2, 0x2, 0x125, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x126, 0x128, 0x7, 0x2b, 0x2, 0x2, 0x127, 0x126, 0x3, 0x2, 0x2, 
    0x2, 0x127, 0x128, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 
    0x2, 0x129, 0x12e, 0x7, 0x26, 0x2, 0x2, 0x12a, 0x12e, 0x7, 0x25, 0x2, 
    0x2, 0x12b, 0x12e, 0x7, 0x27, 0x2, 0x2, 0x12c, 0x12e, 0x7, 0x28, 0x2, 
    0x2, 0x12d, 0x127, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12a, 0x3, 0x2, 0x2, 
    0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12c, 0x3, 0x2, 0x2, 
    0x2, 0x12e, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x7, 0x35, 0x2, 
    0x2, 0x130, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x41, 0x51, 0x5b, 0x5f, 
    0x6d, 0x74, 0x7c, 0x88, 0x90, 0x9c, 0xa1, 0xa5, 0xae, 0xb9, 0xc6, 0xe1, 
    0xe3, 0xf0, 0xf9, 0xfe, 0x102, 0x107, 0x124, 0x127, 0x12d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

STLanguageParser::Initializer STLanguageParser::_init;

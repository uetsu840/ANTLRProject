
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
    setState(71);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_REPEAT_EXIT)
      | (1ULL << STLanguageParser::TOKEN_CASE)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0)) {
      setState(68);
      statement();
      setState(73);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(74);
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
    setState(76);
    single_statement();
    setState(77);
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

STLanguageParser::Repeat_exit_statementContext* STLanguageParser::Single_statementContext::repeat_exit_statement() {
  return getRuleContext<STLanguageParser::Repeat_exit_statementContext>(0);
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
    setState(88);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(79);
      return_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(80);
      if_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(81);
      while_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(82);
      for_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(83);
      repeat_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(84);
      repeat_exit_statement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(85);
      case_statement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(86);
      assign_statement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(87);
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
    setState(90);
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
    setState(92);
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
    setState(94);
    if_statement_main_clause();
    setState(98);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == STLanguageParser::TOKEN_IF_ELIF) {
      setState(95);
      if_statement_elif_clause();
      setState(100);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == STLanguageParser::TOKEN_ELSE) {
      setState(101);
      if_statement_else_clause();
    }
    setState(104);
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
    setState(106);
    match(STLanguageParser::TOKEN_IF);
    setState(107);
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
    setState(109);
    match(STLanguageParser::TOKEN_IF_ELIF);
    setState(110);
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
    setState(112);
    match(STLanguageParser::TOKEN_ELSE);
    setState(114); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(113);
      statement();
      setState(116); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_REPEAT_EXIT)
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
    setState(118);
    expression(0);
    setState(119);
    match(STLanguageParser::TOKEN_IF_THEN);
    setState(121); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(120);
      statement();
      setState(123); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_REPEAT_EXIT)
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
    setState(125);
    match(STLanguageParser::TOKEN_WHILE);
    setState(126);
    expression(0);
    setState(127);
    match(STLanguageParser::TOKEN_DO);
    setState(129); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(128);
      statement();
      setState(131); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_REPEAT_EXIT)
      | (1ULL << STLanguageParser::TOKEN_CASE)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
    setState(133);
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
    setState(135);
    match(STLanguageParser::TOKEN_FOR);
    setState(136);
    expression(0);
    setState(137);
    match(STLanguageParser::TOKEN_TO);
    setState(138);
    expression(0);
    setState(139);
    match(STLanguageParser::TOKEN_DO);
    setState(141); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(140);
      statement();
      setState(143); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_REPEAT_EXIT)
      | (1ULL << STLanguageParser::TOKEN_CASE)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
    setState(145);
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
    setState(147);
    match(STLanguageParser::TOKEN_REPEAT);
    setState(149); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(148);
      statement();
      setState(151); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_REPEAT_EXIT)
      | (1ULL << STLanguageParser::TOKEN_CASE)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
    setState(153);
    match(STLanguageParser::TOKEN_UNTIL);
    setState(154);
    expression(0);
    setState(155);
    match(STLanguageParser::TOKEN_REPEAT_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Repeat_exit_statementContext ------------------------------------------------------------------

STLanguageParser::Repeat_exit_statementContext::Repeat_exit_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::Repeat_exit_statementContext::TOKEN_REPEAT_EXIT() {
  return getToken(STLanguageParser::TOKEN_REPEAT_EXIT, 0);
}


size_t STLanguageParser::Repeat_exit_statementContext::getRuleIndex() const {
  return STLanguageParser::RuleRepeat_exit_statement;
}

void STLanguageParser::Repeat_exit_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeat_exit_statement(this);
}

void STLanguageParser::Repeat_exit_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeat_exit_statement(this);
}


antlrcpp::Any STLanguageParser::Repeat_exit_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitRepeat_exit_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Repeat_exit_statementContext* STLanguageParser::repeat_exit_statement() {
  Repeat_exit_statementContext *_localctx = _tracker.createInstance<Repeat_exit_statementContext>(_ctx, getState());
  enterRule(_localctx, 26, STLanguageParser::RuleRepeat_exit_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(STLanguageParser::TOKEN_REPEAT_EXIT);
   
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

std::vector<STLanguageParser::Case_one_selectionContext *> STLanguageParser::Case_statementContext::case_one_selection() {
  return getRuleContexts<STLanguageParser::Case_one_selectionContext>();
}

STLanguageParser::Case_one_selectionContext* STLanguageParser::Case_statementContext::case_one_selection(size_t i) {
  return getRuleContext<STLanguageParser::Case_one_selectionContext>(i);
}

tree::TerminalNode* STLanguageParser::Case_statementContext::TOKEN_ELSE() {
  return getToken(STLanguageParser::TOKEN_ELSE, 0);
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
  enterRule(_localctx, 28, STLanguageParser::RuleCase_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(STLanguageParser::TOKEN_CASE);
    setState(160);
    variable();
    setState(161);
    match(STLanguageParser::TOKEN_OF);
    setState(163); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(162);
      case_one_selection();
      setState(165); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_NOT)
      | (1ULL << STLanguageParser::TOKEN_HEX_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_DEC_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_OCT_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_BIN_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_FP_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_PLUS)
      | (1ULL << STLanguageParser::TOKEN_MINUS)
      | (1ULL << STLanguageParser::TOKEN_TYPE_LREAL)
      | (1ULL << STLanguageParser::TOKEN_TYPE_REAL)
      | (1ULL << STLanguageParser::TOKEN_TYPE_INT)
      | (1ULL << STLanguageParser::TOKEN_TYPE_UINT)
      | (1ULL << STLanguageParser::TOKEN_TYPE_DINT)
      | (1ULL << STLanguageParser::TOKEN_TYPE_UDINT)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
    setState(173);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == STLanguageParser::TOKEN_ELSE) {
      setState(167);
      match(STLanguageParser::TOKEN_ELSE);
      setState(169); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(168);
        statement();
        setState(171); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
        | (1ULL << STLanguageParser::TOKEN_FOR)
        | (1ULL << STLanguageParser::TOKEN_WHILE)
        | (1ULL << STLanguageParser::TOKEN_IF)
        | (1ULL << STLanguageParser::TOKEN_REPEAT)
        | (1ULL << STLanguageParser::TOKEN_REPEAT_EXIT)
        | (1ULL << STLanguageParser::TOKEN_CASE)
        | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
    }
    setState(175);
    match(STLanguageParser::TOKEN_CASE_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_one_selectionContext ------------------------------------------------------------------

STLanguageParser::Case_one_selectionContext::Case_one_selectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STLanguageParser::Token_case_labelContext* STLanguageParser::Case_one_selectionContext::token_case_label() {
  return getRuleContext<STLanguageParser::Token_case_labelContext>(0);
}

std::vector<STLanguageParser::StatementContext *> STLanguageParser::Case_one_selectionContext::statement() {
  return getRuleContexts<STLanguageParser::StatementContext>();
}

STLanguageParser::StatementContext* STLanguageParser::Case_one_selectionContext::statement(size_t i) {
  return getRuleContext<STLanguageParser::StatementContext>(i);
}


size_t STLanguageParser::Case_one_selectionContext::getRuleIndex() const {
  return STLanguageParser::RuleCase_one_selection;
}

void STLanguageParser::Case_one_selectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_one_selection(this);
}

void STLanguageParser::Case_one_selectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_one_selection(this);
}


antlrcpp::Any STLanguageParser::Case_one_selectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitCase_one_selection(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Case_one_selectionContext* STLanguageParser::case_one_selection() {
  Case_one_selectionContext *_localctx = _tracker.createInstance<Case_one_selectionContext>(_ctx, getState());
  enterRule(_localctx, 30, STLanguageParser::RuleCase_one_selection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(177);
    token_case_label();
    setState(181);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(178);
        statement(); 
      }
      setState(183);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
   
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

tree::TerminalNode* STLanguageParser::Token_case_labelContext::TOKEN_CASE_LBL_SEP() {
  return getToken(STLanguageParser::TOKEN_CASE_LBL_SEP, 0);
}

std::vector<STLanguageParser::Case_label_valueContext *> STLanguageParser::Token_case_labelContext::case_label_value() {
  return getRuleContexts<STLanguageParser::Case_label_valueContext>();
}

STLanguageParser::Case_label_valueContext* STLanguageParser::Token_case_labelContext::case_label_value(size_t i) {
  return getRuleContext<STLanguageParser::Case_label_valueContext>(i);
}

std::vector<STLanguageParser::Case_label_rangeContext *> STLanguageParser::Token_case_labelContext::case_label_range() {
  return getRuleContexts<STLanguageParser::Case_label_rangeContext>();
}

STLanguageParser::Case_label_rangeContext* STLanguageParser::Token_case_labelContext::case_label_range(size_t i) {
  return getRuleContext<STLanguageParser::Case_label_rangeContext>(i);
}

std::vector<tree::TerminalNode *> STLanguageParser::Token_case_labelContext::TOKEN_ARG_LBL_SEP() {
  return getTokens(STLanguageParser::TOKEN_ARG_LBL_SEP);
}

tree::TerminalNode* STLanguageParser::Token_case_labelContext::TOKEN_ARG_LBL_SEP(size_t i) {
  return getToken(STLanguageParser::TOKEN_ARG_LBL_SEP, i);
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
  enterRule(_localctx, 32, STLanguageParser::RuleToken_case_label);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(184);
      case_label_value();
      break;
    }

    case 2: {
      setState(185);
      case_label_range();
      break;
    }

    }
    setState(195);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == STLanguageParser::TOKEN_ARG_LBL_SEP) {
      setState(188);
      match(STLanguageParser::TOKEN_ARG_LBL_SEP);
      setState(191);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(189);
        case_label_value();
        break;
      }

      case 2: {
        setState(190);
        case_label_range();
        break;
      }

      }
      setState(197);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(198);
    match(STLanguageParser::TOKEN_CASE_LBL_SEP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_label_valueContext ------------------------------------------------------------------

STLanguageParser::Case_label_valueContext::Case_label_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STLanguageParser::ValueContext* STLanguageParser::Case_label_valueContext::value() {
  return getRuleContext<STLanguageParser::ValueContext>(0);
}


size_t STLanguageParser::Case_label_valueContext::getRuleIndex() const {
  return STLanguageParser::RuleCase_label_value;
}

void STLanguageParser::Case_label_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_label_value(this);
}

void STLanguageParser::Case_label_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_label_value(this);
}


antlrcpp::Any STLanguageParser::Case_label_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitCase_label_value(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Case_label_valueContext* STLanguageParser::case_label_value() {
  Case_label_valueContext *_localctx = _tracker.createInstance<Case_label_valueContext>(_ctx, getState());
  enterRule(_localctx, 34, STLanguageParser::RuleCase_label_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_label_rangeContext ------------------------------------------------------------------

STLanguageParser::Case_label_rangeContext::Case_label_rangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<STLanguageParser::ValueContext *> STLanguageParser::Case_label_rangeContext::value() {
  return getRuleContexts<STLanguageParser::ValueContext>();
}

STLanguageParser::ValueContext* STLanguageParser::Case_label_rangeContext::value(size_t i) {
  return getRuleContext<STLanguageParser::ValueContext>(i);
}

tree::TerminalNode* STLanguageParser::Case_label_rangeContext::TOKEN_CASE_RANGE() {
  return getToken(STLanguageParser::TOKEN_CASE_RANGE, 0);
}


size_t STLanguageParser::Case_label_rangeContext::getRuleIndex() const {
  return STLanguageParser::RuleCase_label_range;
}

void STLanguageParser::Case_label_rangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_label_range(this);
}

void STLanguageParser::Case_label_rangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_label_range(this);
}


antlrcpp::Any STLanguageParser::Case_label_rangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitCase_label_range(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Case_label_rangeContext* STLanguageParser::case_label_range() {
  Case_label_rangeContext *_localctx = _tracker.createInstance<Case_label_rangeContext>(_ctx, getState());
  enterRule(_localctx, 36, STLanguageParser::RuleCase_label_range);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    value();
    setState(203);
    match(STLanguageParser::TOKEN_CASE_RANGE);
    setState(204);
    value();
   
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
  enterRule(_localctx, 38, STLanguageParser::RuleAssign_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    variable();
    setState(207);
    assign_operator();
    setState(208);
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
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, STLanguageParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(217);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(211);
      value();
      break;
    }

    case 2: {
      setState(212);
      match(STLanguageParser::TOKEN_OPEN_BRACE);
      setState(213);
      expression(0);
      setState(214);
      match(STLanguageParser::TOKEN_CLOSE_BRACE);
      break;
    }

    case 3: {
      setState(216);
      function_call();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(246);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(244);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(219);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(220);
          arith_operator_muldiv();
          setState(221);
          expression(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(223);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(224);
          arith_operator_addsub();
          setState(225);
          expression(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(227);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(228);
          compare_operator_cmp();
          setState(229);
          expression(7);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(231);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(232);
          compare_operator_eq();
          setState(233);
          expression(6);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(235);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(236);
          match(STLanguageParser::TOKEN_AND);
          setState(237);
          expression(5);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(238);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(239);
          match(STLanguageParser::TOKEN_XOR);
          setState(240);
          expression(4);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(241);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(242);
          match(STLanguageParser::TOKEN_OR);
          setState(243);
          expression(3);
          break;
        }

        } 
      }
      setState(248);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
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

std::vector<tree::TerminalNode *> STLanguageParser::Function_callContext::TOKEN_ARG_LBL_SEP() {
  return getTokens(STLanguageParser::TOKEN_ARG_LBL_SEP);
}

tree::TerminalNode* STLanguageParser::Function_callContext::TOKEN_ARG_LBL_SEP(size_t i) {
  return getToken(STLanguageParser::TOKEN_ARG_LBL_SEP, i);
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
  enterRule(_localctx, 42, STLanguageParser::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(282);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(249);
      match(STLanguageParser::IDENTIFIER);
      setState(250);
      match(STLanguageParser::TOKEN_OPEN_BRACE);
      setState(251);
      match(STLanguageParser::TOKEN_CLOSE_BRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(252);
      match(STLanguageParser::IDENTIFIER);
      setState(253);
      match(STLanguageParser::TOKEN_OPEN_BRACE);
      setState(254);
      expression(0);
      setState(259);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == STLanguageParser::TOKEN_ARG_LBL_SEP) {
        setState(255);
        match(STLanguageParser::TOKEN_ARG_LBL_SEP);
        setState(256);
        expression(0);
        setState(261);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(262);
      match(STLanguageParser::TOKEN_CLOSE_BRACE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(264);
      match(STLanguageParser::IDENTIFIER);
      setState(265);
      match(STLanguageParser::TOKEN_OPEN_BRACE);

      setState(268);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(266);
        func_in_argument();
        break;
      }

      case 2: {
        setState(267);
        func_out_argument();
        break;
      }

      }
      setState(277);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == STLanguageParser::TOKEN_ARG_LBL_SEP) {
        setState(270);
        match(STLanguageParser::TOKEN_ARG_LBL_SEP);
        setState(273);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          setState(271);
          func_in_argument();
          break;
        }

        case 2: {
          setState(272);
          func_out_argument();
          break;
        }

        }
        setState(279);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(280);
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
  enterRule(_localctx, 44, STLanguageParser::RuleFunc_in_argument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    variable();
    setState(285);
    assign_operator();
    setState(286);
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
  enterRule(_localctx, 46, STLanguageParser::RuleFunc_out_argument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    variable();
    setState(289);
    assign_operator_out();
    setState(290);
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
  enterRule(_localctx, 48, STLanguageParser::RuleAssign_operator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
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
  enterRule(_localctx, 50, STLanguageParser::RuleCompare_operator_cmp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
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
  enterRule(_localctx, 52, STLanguageParser::RuleCompare_operator_eq);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
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
  enterRule(_localctx, 54, STLanguageParser::RuleAssign_operator_out);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
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
  enterRule(_localctx, 56, STLanguageParser::RuleUnary_operator_pre);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(300);
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
  enterRule(_localctx, 58, STLanguageParser::RuleArith_operator_muldiv);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
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
  enterRule(_localctx, 60, STLanguageParser::RuleArith_operator_addsub);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(304);
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
  enterRule(_localctx, 62, STLanguageParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(311);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case STLanguageParser::TOKEN_NOT:
      case STLanguageParser::TOKEN_PLUS:
      case STLanguageParser::TOKEN_MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(306);
        unary_operator_pre();
        setState(307);
        value();
        break;
      }

      case STLanguageParser::TOKEN_HEX_NUMBER:
      case STLanguageParser::TOKEN_DEC_NUMBER:
      case STLanguageParser::TOKEN_OCT_NUMBER:
      case STLanguageParser::TOKEN_BIN_NUMBER:
      case STLanguageParser::TOKEN_FP_NUMBER:
      case STLanguageParser::TOKEN_TYPE_LREAL:
      case STLanguageParser::TOKEN_TYPE_REAL:
      case STLanguageParser::TOKEN_TYPE_INT:
      case STLanguageParser::TOKEN_TYPE_UINT:
      case STLanguageParser::TOKEN_TYPE_DINT:
      case STLanguageParser::TOKEN_TYPE_UDINT: {
        enterOuterAlt(_localctx, 2);
        setState(309);
        immediate();
        break;
      }

      case STLanguageParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 3);
        setState(310);
        variable();
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

//----------------- ImmediateContext ------------------------------------------------------------------

STLanguageParser::ImmediateContext::ImmediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t STLanguageParser::ImmediateContext::getRuleIndex() const {
  return STLanguageParser::RuleImmediate;
}

void STLanguageParser::ImmediateContext::copyFrom(ImmediateContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Immediate_oct_numberContext ------------------------------------------------------------------

tree::TerminalNode* STLanguageParser::Immediate_oct_numberContext::TOKEN_OCT_NUMBER() {
  return getToken(STLanguageParser::TOKEN_OCT_NUMBER, 0);
}

STLanguageParser::Immediate_oct_numberContext::Immediate_oct_numberContext(ImmediateContext *ctx) { copyFrom(ctx); }

void STLanguageParser::Immediate_oct_numberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate_oct_number(this);
}
void STLanguageParser::Immediate_oct_numberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate_oct_number(this);
}

antlrcpp::Any STLanguageParser::Immediate_oct_numberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitImmediate_oct_number(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Immediate_dint_dec_numberContext ------------------------------------------------------------------

tree::TerminalNode* STLanguageParser::Immediate_dint_dec_numberContext::TOKEN_TYPE_DINT() {
  return getToken(STLanguageParser::TOKEN_TYPE_DINT, 0);
}

tree::TerminalNode* STLanguageParser::Immediate_dint_dec_numberContext::TOKEN_SHARP() {
  return getToken(STLanguageParser::TOKEN_SHARP, 0);
}

tree::TerminalNode* STLanguageParser::Immediate_dint_dec_numberContext::TOKEN_DEC_NUMBER() {
  return getToken(STLanguageParser::TOKEN_DEC_NUMBER, 0);
}

STLanguageParser::Immediate_dint_dec_numberContext::Immediate_dint_dec_numberContext(ImmediateContext *ctx) { copyFrom(ctx); }

void STLanguageParser::Immediate_dint_dec_numberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate_dint_dec_number(this);
}
void STLanguageParser::Immediate_dint_dec_numberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate_dint_dec_number(this);
}

antlrcpp::Any STLanguageParser::Immediate_dint_dec_numberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitImmediate_dint_dec_number(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Immediate_real_fp_numberContext ------------------------------------------------------------------

tree::TerminalNode* STLanguageParser::Immediate_real_fp_numberContext::TOKEN_TYPE_REAL() {
  return getToken(STLanguageParser::TOKEN_TYPE_REAL, 0);
}

tree::TerminalNode* STLanguageParser::Immediate_real_fp_numberContext::TOKEN_SHARP() {
  return getToken(STLanguageParser::TOKEN_SHARP, 0);
}

tree::TerminalNode* STLanguageParser::Immediate_real_fp_numberContext::TOKEN_FP_NUMBER() {
  return getToken(STLanguageParser::TOKEN_FP_NUMBER, 0);
}

STLanguageParser::Immediate_real_fp_numberContext::Immediate_real_fp_numberContext(ImmediateContext *ctx) { copyFrom(ctx); }

void STLanguageParser::Immediate_real_fp_numberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate_real_fp_number(this);
}
void STLanguageParser::Immediate_real_fp_numberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate_real_fp_number(this);
}

antlrcpp::Any STLanguageParser::Immediate_real_fp_numberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitImmediate_real_fp_number(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Immediate_dec_numberContext ------------------------------------------------------------------

tree::TerminalNode* STLanguageParser::Immediate_dec_numberContext::TOKEN_DEC_NUMBER() {
  return getToken(STLanguageParser::TOKEN_DEC_NUMBER, 0);
}

STLanguageParser::Immediate_dec_numberContext::Immediate_dec_numberContext(ImmediateContext *ctx) { copyFrom(ctx); }

void STLanguageParser::Immediate_dec_numberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate_dec_number(this);
}
void STLanguageParser::Immediate_dec_numberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate_dec_number(this);
}

antlrcpp::Any STLanguageParser::Immediate_dec_numberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitImmediate_dec_number(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Immediate_lreal_fp_numberContext ------------------------------------------------------------------

tree::TerminalNode* STLanguageParser::Immediate_lreal_fp_numberContext::TOKEN_TYPE_LREAL() {
  return getToken(STLanguageParser::TOKEN_TYPE_LREAL, 0);
}

tree::TerminalNode* STLanguageParser::Immediate_lreal_fp_numberContext::TOKEN_SHARP() {
  return getToken(STLanguageParser::TOKEN_SHARP, 0);
}

tree::TerminalNode* STLanguageParser::Immediate_lreal_fp_numberContext::TOKEN_FP_NUMBER() {
  return getToken(STLanguageParser::TOKEN_FP_NUMBER, 0);
}

STLanguageParser::Immediate_lreal_fp_numberContext::Immediate_lreal_fp_numberContext(ImmediateContext *ctx) { copyFrom(ctx); }

void STLanguageParser::Immediate_lreal_fp_numberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate_lreal_fp_number(this);
}
void STLanguageParser::Immediate_lreal_fp_numberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate_lreal_fp_number(this);
}

antlrcpp::Any STLanguageParser::Immediate_lreal_fp_numberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitImmediate_lreal_fp_number(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Immediate_udint_dec_numberContext ------------------------------------------------------------------

tree::TerminalNode* STLanguageParser::Immediate_udint_dec_numberContext::TOKEN_TYPE_UDINT() {
  return getToken(STLanguageParser::TOKEN_TYPE_UDINT, 0);
}

tree::TerminalNode* STLanguageParser::Immediate_udint_dec_numberContext::TOKEN_SHARP() {
  return getToken(STLanguageParser::TOKEN_SHARP, 0);
}

tree::TerminalNode* STLanguageParser::Immediate_udint_dec_numberContext::TOKEN_DEC_NUMBER() {
  return getToken(STLanguageParser::TOKEN_DEC_NUMBER, 0);
}

STLanguageParser::Immediate_udint_dec_numberContext::Immediate_udint_dec_numberContext(ImmediateContext *ctx) { copyFrom(ctx); }

void STLanguageParser::Immediate_udint_dec_numberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate_udint_dec_number(this);
}
void STLanguageParser::Immediate_udint_dec_numberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate_udint_dec_number(this);
}

antlrcpp::Any STLanguageParser::Immediate_udint_dec_numberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitImmediate_udint_dec_number(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Immediate_int_dec_numberContext ------------------------------------------------------------------

tree::TerminalNode* STLanguageParser::Immediate_int_dec_numberContext::TOKEN_TYPE_INT() {
  return getToken(STLanguageParser::TOKEN_TYPE_INT, 0);
}

tree::TerminalNode* STLanguageParser::Immediate_int_dec_numberContext::TOKEN_SHARP() {
  return getToken(STLanguageParser::TOKEN_SHARP, 0);
}

tree::TerminalNode* STLanguageParser::Immediate_int_dec_numberContext::TOKEN_DEC_NUMBER() {
  return getToken(STLanguageParser::TOKEN_DEC_NUMBER, 0);
}

STLanguageParser::Immediate_int_dec_numberContext::Immediate_int_dec_numberContext(ImmediateContext *ctx) { copyFrom(ctx); }

void STLanguageParser::Immediate_int_dec_numberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate_int_dec_number(this);
}
void STLanguageParser::Immediate_int_dec_numberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate_int_dec_number(this);
}

antlrcpp::Any STLanguageParser::Immediate_int_dec_numberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitImmediate_int_dec_number(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Immediate_hex_numberContext ------------------------------------------------------------------

tree::TerminalNode* STLanguageParser::Immediate_hex_numberContext::TOKEN_HEX_NUMBER() {
  return getToken(STLanguageParser::TOKEN_HEX_NUMBER, 0);
}

STLanguageParser::Immediate_hex_numberContext::Immediate_hex_numberContext(ImmediateContext *ctx) { copyFrom(ctx); }

void STLanguageParser::Immediate_hex_numberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate_hex_number(this);
}
void STLanguageParser::Immediate_hex_numberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate_hex_number(this);
}

antlrcpp::Any STLanguageParser::Immediate_hex_numberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitImmediate_hex_number(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Immediate_uint_dec_numberContext ------------------------------------------------------------------

tree::TerminalNode* STLanguageParser::Immediate_uint_dec_numberContext::TOKEN_TYPE_UINT() {
  return getToken(STLanguageParser::TOKEN_TYPE_UINT, 0);
}

tree::TerminalNode* STLanguageParser::Immediate_uint_dec_numberContext::TOKEN_SHARP() {
  return getToken(STLanguageParser::TOKEN_SHARP, 0);
}

tree::TerminalNode* STLanguageParser::Immediate_uint_dec_numberContext::TOKEN_DEC_NUMBER() {
  return getToken(STLanguageParser::TOKEN_DEC_NUMBER, 0);
}

STLanguageParser::Immediate_uint_dec_numberContext::Immediate_uint_dec_numberContext(ImmediateContext *ctx) { copyFrom(ctx); }

void STLanguageParser::Immediate_uint_dec_numberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate_uint_dec_number(this);
}
void STLanguageParser::Immediate_uint_dec_numberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate_uint_dec_number(this);
}

antlrcpp::Any STLanguageParser::Immediate_uint_dec_numberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitImmediate_uint_dec_number(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Immediate_bin_NumberContext ------------------------------------------------------------------

tree::TerminalNode* STLanguageParser::Immediate_bin_NumberContext::TOKEN_BIN_NUMBER() {
  return getToken(STLanguageParser::TOKEN_BIN_NUMBER, 0);
}

STLanguageParser::Immediate_bin_NumberContext::Immediate_bin_NumberContext(ImmediateContext *ctx) { copyFrom(ctx); }

void STLanguageParser::Immediate_bin_NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate_bin_Number(this);
}
void STLanguageParser::Immediate_bin_NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate_bin_Number(this);
}

antlrcpp::Any STLanguageParser::Immediate_bin_NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitImmediate_bin_Number(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Immediate_fp_numberContext ------------------------------------------------------------------

tree::TerminalNode* STLanguageParser::Immediate_fp_numberContext::TOKEN_FP_NUMBER() {
  return getToken(STLanguageParser::TOKEN_FP_NUMBER, 0);
}

STLanguageParser::Immediate_fp_numberContext::Immediate_fp_numberContext(ImmediateContext *ctx) { copyFrom(ctx); }

void STLanguageParser::Immediate_fp_numberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate_fp_number(this);
}
void STLanguageParser::Immediate_fp_numberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate_fp_number(this);
}

antlrcpp::Any STLanguageParser::Immediate_fp_numberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageParserVisitor*>(visitor))
    return parserVisitor->visitImmediate_fp_number(this);
  else
    return visitor->visitChildren(this);
}
STLanguageParser::ImmediateContext* STLanguageParser::immediate() {
  ImmediateContext *_localctx = _tracker.createInstance<ImmediateContext>(_ctx, getState());
  enterRule(_localctx, 64, STLanguageParser::RuleImmediate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(336);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case STLanguageParser::TOKEN_DEC_NUMBER: {
        _localctx = dynamic_cast<ImmediateContext *>(_tracker.createInstance<STLanguageParser::Immediate_dec_numberContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(313);
        match(STLanguageParser::TOKEN_DEC_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_HEX_NUMBER: {
        _localctx = dynamic_cast<ImmediateContext *>(_tracker.createInstance<STLanguageParser::Immediate_hex_numberContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(314);
        match(STLanguageParser::TOKEN_HEX_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_OCT_NUMBER: {
        _localctx = dynamic_cast<ImmediateContext *>(_tracker.createInstance<STLanguageParser::Immediate_oct_numberContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(315);
        match(STLanguageParser::TOKEN_OCT_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_BIN_NUMBER: {
        _localctx = dynamic_cast<ImmediateContext *>(_tracker.createInstance<STLanguageParser::Immediate_bin_NumberContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(316);
        match(STLanguageParser::TOKEN_BIN_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_FP_NUMBER: {
        _localctx = dynamic_cast<ImmediateContext *>(_tracker.createInstance<STLanguageParser::Immediate_fp_numberContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(317);
        match(STLanguageParser::TOKEN_FP_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_TYPE_LREAL: {
        _localctx = dynamic_cast<ImmediateContext *>(_tracker.createInstance<STLanguageParser::Immediate_lreal_fp_numberContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(318);
        match(STLanguageParser::TOKEN_TYPE_LREAL);
        setState(319);
        match(STLanguageParser::TOKEN_SHARP);
        setState(320);
        match(STLanguageParser::TOKEN_FP_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_TYPE_REAL: {
        _localctx = dynamic_cast<ImmediateContext *>(_tracker.createInstance<STLanguageParser::Immediate_real_fp_numberContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(321);
        match(STLanguageParser::TOKEN_TYPE_REAL);
        setState(322);
        match(STLanguageParser::TOKEN_SHARP);
        setState(323);
        match(STLanguageParser::TOKEN_FP_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_TYPE_INT: {
        _localctx = dynamic_cast<ImmediateContext *>(_tracker.createInstance<STLanguageParser::Immediate_int_dec_numberContext>(_localctx));
        enterOuterAlt(_localctx, 8);
        setState(324);
        match(STLanguageParser::TOKEN_TYPE_INT);
        setState(325);
        match(STLanguageParser::TOKEN_SHARP);
        setState(326);
        match(STLanguageParser::TOKEN_DEC_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_TYPE_UINT: {
        _localctx = dynamic_cast<ImmediateContext *>(_tracker.createInstance<STLanguageParser::Immediate_uint_dec_numberContext>(_localctx));
        enterOuterAlt(_localctx, 9);
        setState(327);
        match(STLanguageParser::TOKEN_TYPE_UINT);
        setState(328);
        match(STLanguageParser::TOKEN_SHARP);
        setState(329);
        match(STLanguageParser::TOKEN_DEC_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_TYPE_DINT: {
        _localctx = dynamic_cast<ImmediateContext *>(_tracker.createInstance<STLanguageParser::Immediate_dint_dec_numberContext>(_localctx));
        enterOuterAlt(_localctx, 10);
        setState(330);
        match(STLanguageParser::TOKEN_TYPE_DINT);
        setState(331);
        match(STLanguageParser::TOKEN_SHARP);
        setState(332);
        match(STLanguageParser::TOKEN_DEC_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_TYPE_UDINT: {
        _localctx = dynamic_cast<ImmediateContext *>(_tracker.createInstance<STLanguageParser::Immediate_udint_dec_numberContext>(_localctx));
        enterOuterAlt(_localctx, 11);
        setState(333);
        match(STLanguageParser::TOKEN_TYPE_UDINT);
        setState(334);
        match(STLanguageParser::TOKEN_SHARP);
        setState(335);
        match(STLanguageParser::TOKEN_DEC_NUMBER);
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
  enterRule(_localctx, 66, STLanguageParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
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
    case 20: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

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
  "repeat_statement", "repeat_exit_statement", "case_statement", "case_one_selection", 
  "token_case_label", "case_label_value", "case_label_range", "assign_statement", 
  "expression", "function_call", "func_in_argument", "func_out_argument", 
  "assign_operator", "compare_operator_cmp", "compare_operator_eq", "assign_operator_out", 
  "unary_operator_pre", "arith_operator_muldiv", "arith_operator_addsub", 
  "value", "immediate", "variable"
};

std::vector<std::string> STLanguageParser::_literalNames = {
  "", "'//'", "'/*'", "", "", "", "", "", "", "", "", "", "'RETURN'", "'FOR'", 
  "'END_FOR'", "'WHILE'", "'DO'", "'TO'", "'END_WHILE'", "'IF'", "'THEN'", 
  "'ELSIF'", "'ELSE'", "'END_IF'", "'SELECT'", "'END_SELECT'", "'REPEAT'", 
  "'UNTIL'", "'END_REPEAT'", "'EXIT'", "'CASE'", "'OF'", "'END_CASE'", "'NOT'", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'XOR'", "'OR'", 
  "'LREAL'", "'REAL'", "'INT'", "'UINT'", "'DINT'", "'UDINT'", "'BOOL'", 
  "", "", "", "", "", "'*/'"
};

std::vector<std::string> STLanguageParser::_symbolicNames = {
  "", "LINE_COMMENT", "C_STYLE_COMMENT", "WS", "TOKEN_ASSIGN_RL", "TOKEN_ASSIGN_LR", 
  "TOKEN_CMP_EQ", "TOKEN_CMP_GT_EQ", "TOKEN_CMP_LT_EQ", "TOKEN_CMP_NEQ", 
  "TOKEN_CMP_GT", "TOKEN_CMP_LT", "TOKEN_RETURN", "TOKEN_FOR", "TOKEN_FOR_END", 
  "TOKEN_WHILE", "TOKEN_DO", "TOKEN_TO", "TOKEN_WHILE_END", "TOKEN_IF", 
  "TOKEN_IF_THEN", "TOKEN_IF_ELIF", "TOKEN_ELSE", "TOKEN_IF_END", "TOKEN_SELECT", 
  "TOKEN_SELECT_END", "TOKEN_REPEAT", "TOKEN_UNTIL", "TOKEN_REPEAT_END", 
  "TOKEN_REPEAT_EXIT", "TOKEN_CASE", "TOKEN_OF", "TOKEN_CASE_END", "TOKEN_NOT", 
  "TOKEN_OPEN_BRACE", "TOKEN_CLOSE_BRACE", "TOKEN_HEX_NUMBER", "TOKEN_DEC_NUMBER", 
  "TOKEN_OCT_NUMBER", "TOKEN_BIN_NUMBER", "TOKEN_FP_NUMBER", "TOKEN_CASE_RANGE", 
  "TOKEN_PLUS", "TOKEN_MINUS", "TOKEN_MUL", "TOKEN_DIV", "TOKEN_ARG_LBL_SEP", 
  "TOKEN_CASE_LBL_SEP", "TOKEN_AND", "TOKEN_XOR", "TOKEN_OR", "TOKEN_TYPE_LREAL", 
  "TOKEN_TYPE_REAL", "TOKEN_TYPE_INT", "TOKEN_TYPE_UINT", "TOKEN_TYPE_DINT", 
  "TOKEN_TYPE_UDINT", "TOKEN_TYPE_BOOL", "TOKEN_SHARP", "STATEMENT_SEPARATOR", 
  "IDENTIFIER", "NL", "NOT_NL", "END_COMMENT", "COMMENT"
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
    0x3, 0x42, 0x157, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x3, 0x2, 0x7, 0x2, 0x48, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x4b, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x5b, 0xa, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x63, 0xa, 
    0x7, 0xc, 0x7, 0xe, 0x7, 0x66, 0xb, 0x7, 0x3, 0x7, 0x5, 0x7, 0x69, 0xa, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x6, 0xa, 0x75, 0xa, 0xa, 0xd, 0xa, 
    0xe, 0xa, 0x76, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x6, 0xb, 0x7c, 0xa, 0xb, 
    0xd, 0xb, 0xe, 0xb, 0x7d, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x6, 
    0xc, 0x84, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0x85, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0x90, 
    0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0x91, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x6, 0xe, 0x98, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0x99, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x6, 0x10, 0xa6, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0xa7, 
    0x3, 0x10, 0x3, 0x10, 0x6, 0x10, 0xac, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 
    0xad, 0x5, 0x10, 0xb0, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x7, 0x11, 0xb6, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xb9, 0xb, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xbd, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x5, 0x12, 0xc2, 0xa, 0x12, 0x7, 0x12, 0xc4, 0xa, 0x12, 0xc, 
    0x12, 0xe, 0x12, 0xc7, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xdc, 0xa, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0xf7, 0xa, 0x16, 
    0xc, 0x16, 0xe, 0x16, 0xfa, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x104, 
    0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x107, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x10f, 0xa, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x114, 0xa, 0x17, 0x7, 0x17, 
    0x116, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x119, 0xb, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x11d, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x13a, 
    0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x153, 
    0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x2, 0x3, 0x2a, 0x24, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
    0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x2, 0x7, 0x4, 0x2, 
    0x9, 0xa, 0xc, 0xd, 0x4, 0x2, 0x8, 0x8, 0xb, 0xb, 0x4, 0x2, 0x23, 0x23, 
    0x2c, 0x2d, 0x3, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2c, 0x2d, 0x2, 0x166, 
    0x2, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x5a, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x5c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5e, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x60, 0x3, 0x2, 0x2, 0x2, 0xe, 0x6c, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x72, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x78, 0x3, 0x2, 0x2, 0x2, 0x16, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x18, 0x89, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x95, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x9f, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x20, 0xb3, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x24, 0xca, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd0, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x11e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x122, 0x3, 0x2, 0x2, 0x2, 0x32, 0x126, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x128, 0x3, 0x2, 0x2, 0x2, 0x36, 0x12a, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x12e, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x130, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x132, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x139, 0x3, 0x2, 0x2, 0x2, 0x42, 0x152, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x154, 0x3, 0x2, 0x2, 0x2, 0x46, 0x48, 0x5, 0x4, 0x3, 0x2, 0x47, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4c, 0x3, 
    0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x2, 
    0x2, 0x3, 0x4d, 0x3, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x5, 0x6, 0x4, 
    0x2, 0x4f, 0x50, 0x7, 0x3d, 0x2, 0x2, 0x50, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x5b, 0x5, 0xa, 0x6, 0x2, 0x52, 0x5b, 0x5, 0xc, 0x7, 0x2, 0x53, 
    0x5b, 0x5, 0x16, 0xc, 0x2, 0x54, 0x5b, 0x5, 0x18, 0xd, 0x2, 0x55, 0x5b, 
    0x5, 0x1a, 0xe, 0x2, 0x56, 0x5b, 0x5, 0x1c, 0xf, 0x2, 0x57, 0x5b, 0x5, 
    0x1e, 0x10, 0x2, 0x58, 0x5b, 0x5, 0x28, 0x15, 0x2, 0x59, 0x5b, 0x5, 
    0x8, 0x5, 0x2, 0x5a, 0x51, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x52, 0x3, 0x2, 
    0x2, 0x2, 0x5a, 0x53, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x54, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x55, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x56, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 
    0x5, 0x2c, 0x17, 0x2, 0x5d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 
    0xe, 0x2, 0x2, 0x5f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x60, 0x64, 0x5, 0xe, 
    0x8, 0x2, 0x61, 0x63, 0x5, 0x10, 0x9, 0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x63, 0x66, 0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x68, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 0x69, 0x5, 0x12, 0xa, 0x2, 0x68, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 
    0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x19, 0x2, 0x2, 0x6b, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x6d, 0x7, 0x15, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0x14, 0xb, 
    0x2, 0x6e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x17, 0x2, 0x2, 
    0x70, 0x71, 0x5, 0x14, 0xb, 0x2, 0x71, 0x11, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x74, 0x7, 0x18, 0x2, 0x2, 0x73, 0x75, 0x5, 0x4, 0x3, 0x2, 0x74, 0x73, 
    0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x74, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x79, 0x5, 0x2a, 0x16, 0x2, 0x79, 0x7b, 0x7, 0x16, 0x2, 
    0x2, 0x7a, 0x7c, 0x5, 0x4, 0x3, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x15, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 
    0x7, 0x11, 0x2, 0x2, 0x80, 0x81, 0x5, 0x2a, 0x16, 0x2, 0x81, 0x83, 0x7, 
    0x12, 0x2, 0x2, 0x82, 0x84, 0x5, 0x4, 0x3, 0x2, 0x83, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x85, 0x3, 0x2, 0x2, 0x2, 0x85, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x87, 0x88, 0x7, 0x14, 0x2, 0x2, 0x88, 0x17, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x8a, 0x7, 0xf, 0x2, 0x2, 0x8a, 0x8b, 0x5, 0x2a, 0x16, 0x2, 0x8b, 0x8c, 
    0x7, 0x13, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0x2a, 0x16, 0x2, 0x8d, 0x8f, 0x7, 
    0x12, 0x2, 0x2, 0x8e, 0x90, 0x5, 0x4, 0x3, 0x2, 0x8f, 0x8e, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x94, 0x7, 0x10, 0x2, 0x2, 0x94, 0x19, 0x3, 0x2, 0x2, 0x2, 0x95, 
    0x97, 0x7, 0x1c, 0x2, 0x2, 0x96, 0x98, 0x5, 0x4, 0x3, 0x2, 0x97, 0x96, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0x9c, 0x7, 0x1d, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0x2a, 0x16, 
    0x2, 0x9d, 0x9e, 0x7, 0x1e, 0x2, 0x2, 0x9e, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x9f, 0xa0, 0x7, 0x1f, 0x2, 0x2, 0xa0, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xa1, 
    0xa2, 0x7, 0x20, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x44, 0x23, 0x2, 0xa3, 0xa5, 
    0x7, 0x21, 0x2, 0x2, 0xa4, 0xa6, 0x5, 0x20, 0x11, 0x2, 0xa5, 0xa4, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa5, 0x3, 0x2, 
    0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0xab, 0x7, 0x18, 0x2, 0x2, 0xaa, 0xac, 0x5, 0x4, 0x3, 0x2, 
    0xab, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 
    0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0xaf, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x3, 
    0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x22, 
    0x2, 0x2, 0xb2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb7, 0x5, 0x22, 0x12, 
    0x2, 0xb4, 0xb6, 0x5, 0x4, 0x3, 0x2, 0xb5, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0xb6, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 
    0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x21, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 
    0x3, 0x2, 0x2, 0x2, 0xba, 0xbd, 0x5, 0x24, 0x13, 0x2, 0xbb, 0xbd, 0x5, 
    0x26, 0x14, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0xbd, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc1, 0x7, 0x30, 0x2, 
    0x2, 0xbf, 0xc2, 0x5, 0x24, 0x13, 0x2, 0xc0, 0xc2, 0x5, 0x26, 0x14, 
    0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc0, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc4, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 
    0x3, 0x2, 0x2, 0x2, 0xc6, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 
    0x2, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0x31, 0x2, 0x2, 0xc9, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0xca, 0xcb, 0x5, 0x40, 0x21, 0x2, 0xcb, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0xcc, 0xcd, 0x5, 0x40, 0x21, 0x2, 0xcd, 0xce, 0x7, 0x2b, 0x2, 0x2, 
    0xce, 0xcf, 0x5, 0x40, 0x21, 0x2, 0xcf, 0x27, 0x3, 0x2, 0x2, 0x2, 0xd0, 
    0xd1, 0x5, 0x44, 0x23, 0x2, 0xd1, 0xd2, 0x5, 0x32, 0x1a, 0x2, 0xd2, 
    0xd3, 0x5, 0x2a, 0x16, 0x2, 0xd3, 0x29, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 
    0x8, 0x16, 0x1, 0x2, 0xd5, 0xdc, 0x5, 0x40, 0x21, 0x2, 0xd6, 0xd7, 0x7, 
    0x24, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0x2a, 0x16, 0x2, 0xd8, 0xd9, 0x7, 0x25, 
    0x2, 0x2, 0xd9, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdc, 0x5, 0x2c, 0x17, 
    0x2, 0xdb, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd6, 0x3, 0x2, 0x2, 0x2, 
    0xdb, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xdd, 
    0xde, 0xc, 0xa, 0x2, 0x2, 0xde, 0xdf, 0x5, 0x3c, 0x1f, 0x2, 0xdf, 0xe0, 
    0x5, 0x2a, 0x16, 0xb, 0xe0, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0xc, 
    0x9, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x3e, 0x20, 0x2, 0xe3, 0xe4, 0x5, 0x2a, 
    0x16, 0xa, 0xe4, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0xc, 0x8, 0x2, 
    0x2, 0xe6, 0xe7, 0x5, 0x34, 0x1b, 0x2, 0xe7, 0xe8, 0x5, 0x2a, 0x16, 
    0x9, 0xe8, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0xc, 0x7, 0x2, 0x2, 
    0xea, 0xeb, 0x5, 0x36, 0x1c, 0x2, 0xeb, 0xec, 0x5, 0x2a, 0x16, 0x8, 
    0xec, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0xc, 0x6, 0x2, 0x2, 0xee, 
    0xef, 0x7, 0x32, 0x2, 0x2, 0xef, 0xf7, 0x5, 0x2a, 0x16, 0x7, 0xf0, 0xf1, 
    0xc, 0x5, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x33, 0x2, 0x2, 0xf2, 0xf7, 0x5, 
    0x2a, 0x16, 0x6, 0xf3, 0xf4, 0xc, 0x4, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x34, 
    0x2, 0x2, 0xf5, 0xf7, 0x5, 0x2a, 0x16, 0x5, 0xf6, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0xf6, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0xf6, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf6, 
    0xf0, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xfa, 
    0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x3, 
    0x2, 0x2, 0x2, 0xf9, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xf8, 0x3, 0x2, 
    0x2, 0x2, 0xfb, 0xfc, 0x7, 0x3e, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x24, 0x2, 
    0x2, 0xfd, 0x11d, 0x7, 0x25, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x3e, 0x2, 0x2, 
    0xff, 0x100, 0x7, 0x24, 0x2, 0x2, 0x100, 0x105, 0x5, 0x2a, 0x16, 0x2, 
    0x101, 0x102, 0x7, 0x30, 0x2, 0x2, 0x102, 0x104, 0x5, 0x2a, 0x16, 0x2, 
    0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 0x104, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x108, 0x3, 0x2, 0x2, 0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 
    0x108, 0x109, 0x7, 0x25, 0x2, 0x2, 0x109, 0x11d, 0x3, 0x2, 0x2, 0x2, 
    0x10a, 0x10b, 0x7, 0x3e, 0x2, 0x2, 0x10b, 0x10e, 0x7, 0x24, 0x2, 0x2, 
    0x10c, 0x10f, 0x5, 0x2e, 0x18, 0x2, 0x10d, 0x10f, 0x5, 0x30, 0x19, 0x2, 
    0x10e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10d, 0x3, 0x2, 0x2, 0x2, 
    0x10f, 0x117, 0x3, 0x2, 0x2, 0x2, 0x110, 0x113, 0x7, 0x30, 0x2, 0x2, 
    0x111, 0x114, 0x5, 0x2e, 0x18, 0x2, 0x112, 0x114, 0x5, 0x30, 0x19, 0x2, 
    0x113, 0x111, 0x3, 0x2, 0x2, 0x2, 0x113, 0x112, 0x3, 0x2, 0x2, 0x2, 
    0x114, 0x116, 0x3, 0x2, 0x2, 0x2, 0x115, 0x110, 0x3, 0x2, 0x2, 0x2, 
    0x116, 0x119, 0x3, 0x2, 0x2, 0x2, 0x117, 0x115, 0x3, 0x2, 0x2, 0x2, 
    0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11a, 0x3, 0x2, 0x2, 0x2, 
    0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x7, 0x25, 0x2, 0x2, 
    0x11b, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11c, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x11c, 
    0xfe, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x5, 0x44, 0x23, 0x2, 0x11f, 0x120, 
    0x5, 0x32, 0x1a, 0x2, 0x120, 0x121, 0x5, 0x2a, 0x16, 0x2, 0x121, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x5, 0x44, 0x23, 0x2, 0x123, 0x124, 
    0x5, 0x38, 0x1d, 0x2, 0x124, 0x125, 0x5, 0x44, 0x23, 0x2, 0x125, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x7, 0x6, 0x2, 0x2, 0x127, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0x128, 0x129, 0x9, 0x2, 0x2, 0x2, 0x129, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x12a, 0x12b, 0x9, 0x3, 0x2, 0x2, 0x12b, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x12c, 0x12d, 0x7, 0x7, 0x2, 0x2, 0x12d, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x12e, 0x12f, 0x9, 0x4, 0x2, 0x2, 0x12f, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x130, 
    0x131, 0x9, 0x5, 0x2, 0x2, 0x131, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 
    0x9, 0x6, 0x2, 0x2, 0x133, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x5, 
    0x3a, 0x1e, 0x2, 0x135, 0x136, 0x5, 0x40, 0x21, 0x2, 0x136, 0x13a, 0x3, 
    0x2, 0x2, 0x2, 0x137, 0x13a, 0x5, 0x42, 0x22, 0x2, 0x138, 0x13a, 0x5, 
    0x44, 0x23, 0x2, 0x139, 0x134, 0x3, 0x2, 0x2, 0x2, 0x139, 0x137, 0x3, 
    0x2, 0x2, 0x2, 0x139, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x13b, 0x153, 0x7, 0x27, 0x2, 0x2, 0x13c, 0x153, 0x7, 0x26, 
    0x2, 0x2, 0x13d, 0x153, 0x7, 0x28, 0x2, 0x2, 0x13e, 0x153, 0x7, 0x29, 
    0x2, 0x2, 0x13f, 0x153, 0x7, 0x2a, 0x2, 0x2, 0x140, 0x141, 0x7, 0x35, 
    0x2, 0x2, 0x141, 0x142, 0x7, 0x3c, 0x2, 0x2, 0x142, 0x153, 0x7, 0x2a, 
    0x2, 0x2, 0x143, 0x144, 0x7, 0x36, 0x2, 0x2, 0x144, 0x145, 0x7, 0x3c, 
    0x2, 0x2, 0x145, 0x153, 0x7, 0x2a, 0x2, 0x2, 0x146, 0x147, 0x7, 0x37, 
    0x2, 0x2, 0x147, 0x148, 0x7, 0x3c, 0x2, 0x2, 0x148, 0x153, 0x7, 0x27, 
    0x2, 0x2, 0x149, 0x14a, 0x7, 0x38, 0x2, 0x2, 0x14a, 0x14b, 0x7, 0x3c, 
    0x2, 0x2, 0x14b, 0x153, 0x7, 0x27, 0x2, 0x2, 0x14c, 0x14d, 0x7, 0x39, 
    0x2, 0x2, 0x14d, 0x14e, 0x7, 0x3c, 0x2, 0x2, 0x14e, 0x153, 0x7, 0x27, 
    0x2, 0x2, 0x14f, 0x150, 0x7, 0x3a, 0x2, 0x2, 0x150, 0x151, 0x7, 0x3c, 
    0x2, 0x2, 0x151, 0x153, 0x7, 0x27, 0x2, 0x2, 0x152, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x152, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x152, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x152, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x152, 0x13f, 0x3, 0x2, 
    0x2, 0x2, 0x152, 0x140, 0x3, 0x2, 0x2, 0x2, 0x152, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x152, 0x146, 0x3, 0x2, 0x2, 0x2, 0x152, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x152, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x152, 0x14f, 0x3, 0x2, 
    0x2, 0x2, 0x153, 0x43, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x7, 0x3e, 
    0x2, 0x2, 0x155, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x49, 0x5a, 0x64, 0x68, 
    0x76, 0x7d, 0x85, 0x91, 0x99, 0xa7, 0xad, 0xaf, 0xb7, 0xbc, 0xc1, 0xc5, 
    0xdb, 0xf6, 0xf8, 0x105, 0x10e, 0x113, 0x117, 0x11c, 0x139, 0x152, 
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

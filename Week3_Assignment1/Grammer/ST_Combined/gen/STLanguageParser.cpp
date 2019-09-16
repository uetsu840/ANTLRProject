
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer/ST_Combined\STLanguage.g4 by ANTLR 4.7.2


#include "STLanguageListener.h"
#include "STLanguageVisitor.h"

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
  return "STLanguage.g4";
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void STLanguageParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}


antlrcpp::Any STLanguageParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
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
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_CASE)
      | (1ULL << STLanguageParser::TOKEN_OPEN_BRACE)
      | (1ULL << STLanguageParser::TOKEN_HEX_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_DEC_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_OCT_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_BIN_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_PLUS)
      | (1ULL << STLanguageParser::TOKEN_MINUS)
      | (1ULL << STLanguageParser::STATEMENT_SEPARATOR)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0)) {
      setState(46);
      statement();
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(52);
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

STLanguageParser::Return_statementContext* STLanguageParser::StatementContext::return_statement() {
  return getRuleContext<STLanguageParser::Return_statementContext>(0);
}

STLanguageParser::If_statementContext* STLanguageParser::StatementContext::if_statement() {
  return getRuleContext<STLanguageParser::If_statementContext>(0);
}

STLanguageParser::While_statementContext* STLanguageParser::StatementContext::while_statement() {
  return getRuleContext<STLanguageParser::While_statementContext>(0);
}

STLanguageParser::For_statementContext* STLanguageParser::StatementContext::for_statement() {
  return getRuleContext<STLanguageParser::For_statementContext>(0);
}

STLanguageParser::Repeat_statementContext* STLanguageParser::StatementContext::repeat_statement() {
  return getRuleContext<STLanguageParser::Repeat_statementContext>(0);
}

STLanguageParser::Case_statementContext* STLanguageParser::StatementContext::case_statement() {
  return getRuleContext<STLanguageParser::Case_statementContext>(0);
}

STLanguageParser::ExpressionContext* STLanguageParser::StatementContext::expression() {
  return getRuleContext<STLanguageParser::ExpressionContext>(0);
}

tree::TerminalNode* STLanguageParser::StatementContext::STATEMENT_SEPARATOR() {
  return getToken(STLanguageParser::STATEMENT_SEPARATOR, 0);
}


size_t STLanguageParser::StatementContext::getRuleIndex() const {
  return STLanguageParser::RuleStatement;
}

void STLanguageParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void STLanguageParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any STLanguageParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
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
    setState(64);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case STLanguageParser::TOKEN_RETURN: {
        enterOuterAlt(_localctx, 1);
        setState(54);
        return_statement();
        break;
      }

      case STLanguageParser::TOKEN_IF: {
        enterOuterAlt(_localctx, 2);
        setState(55);
        if_statement();
        break;
      }

      case STLanguageParser::TOKEN_WHILE: {
        enterOuterAlt(_localctx, 3);
        setState(56);
        while_statement();
        break;
      }

      case STLanguageParser::TOKEN_FOR: {
        enterOuterAlt(_localctx, 4);
        setState(57);
        for_statement();
        break;
      }

      case STLanguageParser::TOKEN_REPEAT: {
        enterOuterAlt(_localctx, 5);
        setState(58);
        repeat_statement();
        break;
      }

      case STLanguageParser::TOKEN_CASE: {
        enterOuterAlt(_localctx, 6);
        setState(59);
        case_statement();
        break;
      }

      case STLanguageParser::TOKEN_OPEN_BRACE:
      case STLanguageParser::TOKEN_HEX_NUMBER:
      case STLanguageParser::TOKEN_DEC_NUMBER:
      case STLanguageParser::TOKEN_OCT_NUMBER:
      case STLanguageParser::TOKEN_BIN_NUMBER:
      case STLanguageParser::TOKEN_PLUS:
      case STLanguageParser::TOKEN_MINUS:
      case STLanguageParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 7);
        setState(60);
        expression(0);
        setState(61);
        match(STLanguageParser::STATEMENT_SEPARATOR);
        break;
      }

      case STLanguageParser::STATEMENT_SEPARATOR: {
        enterOuterAlt(_localctx, 8);
        setState(63);
        match(STLanguageParser::STATEMENT_SEPARATOR);
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_statement(this);
}

void STLanguageParser::Return_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_statement(this);
}


antlrcpp::Any STLanguageParser::Return_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitReturn_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Return_statementContext* STLanguageParser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
  enterRule(_localctx, 4, STLanguageParser::RuleReturn_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
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

tree::TerminalNode* STLanguageParser::If_statementContext::TOKEN_IF() {
  return getToken(STLanguageParser::TOKEN_IF, 0);
}

STLanguageParser::ExpressionContext* STLanguageParser::If_statementContext::expression() {
  return getRuleContext<STLanguageParser::ExpressionContext>(0);
}

tree::TerminalNode* STLanguageParser::If_statementContext::TOKEN_IF_THEN() {
  return getToken(STLanguageParser::TOKEN_IF_THEN, 0);
}

tree::TerminalNode* STLanguageParser::If_statementContext::TOKEN_IF_END() {
  return getToken(STLanguageParser::TOKEN_IF_END, 0);
}

std::vector<STLanguageParser::StatementContext *> STLanguageParser::If_statementContext::statement() {
  return getRuleContexts<STLanguageParser::StatementContext>();
}

STLanguageParser::StatementContext* STLanguageParser::If_statementContext::statement(size_t i) {
  return getRuleContext<STLanguageParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> STLanguageParser::If_statementContext::TOKEN_IF_ELIF() {
  return getTokens(STLanguageParser::TOKEN_IF_ELIF);
}

tree::TerminalNode* STLanguageParser::If_statementContext::TOKEN_IF_ELIF(size_t i) {
  return getToken(STLanguageParser::TOKEN_IF_ELIF, i);
}

tree::TerminalNode* STLanguageParser::If_statementContext::TOKEN_ELSE() {
  return getToken(STLanguageParser::TOKEN_ELSE, 0);
}


size_t STLanguageParser::If_statementContext::getRuleIndex() const {
  return STLanguageParser::RuleIf_statement;
}

void STLanguageParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void STLanguageParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


antlrcpp::Any STLanguageParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::If_statementContext* STLanguageParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 6, STLanguageParser::RuleIf_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(STLanguageParser::TOKEN_IF);
    setState(69);
    expression(0);
    setState(70);
    match(STLanguageParser::TOKEN_IF_THEN);
    setState(72); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(71);
      statement();
      setState(74); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_CASE)
      | (1ULL << STLanguageParser::TOKEN_OPEN_BRACE)
      | (1ULL << STLanguageParser::TOKEN_HEX_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_DEC_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_OCT_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_BIN_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_PLUS)
      | (1ULL << STLanguageParser::TOKEN_MINUS)
      | (1ULL << STLanguageParser::STATEMENT_SEPARATOR)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == STLanguageParser::TOKEN_IF_ELIF) {
      setState(76);
      match(STLanguageParser::TOKEN_IF_ELIF);
      setState(77);
      statement();
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(85);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == STLanguageParser::TOKEN_ELSE) {
      setState(83);
      match(STLanguageParser::TOKEN_ELSE);
      setState(84);
      statement();
    }
    setState(87);
    match(STLanguageParser::TOKEN_IF_END);
   
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_statement(this);
}

void STLanguageParser::While_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_statement(this);
}


antlrcpp::Any STLanguageParser::While_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitWhile_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::While_statementContext* STLanguageParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 8, STLanguageParser::RuleWhile_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(STLanguageParser::TOKEN_WHILE);
    setState(90);
    expression(0);
    setState(91);
    match(STLanguageParser::TOKEN_DO);
    setState(93); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(92);
      statement();
      setState(95); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_CASE)
      | (1ULL << STLanguageParser::TOKEN_OPEN_BRACE)
      | (1ULL << STLanguageParser::TOKEN_HEX_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_DEC_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_OCT_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_BIN_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_PLUS)
      | (1ULL << STLanguageParser::TOKEN_MINUS)
      | (1ULL << STLanguageParser::STATEMENT_SEPARATOR)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
    setState(97);
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_statement(this);
}

void STLanguageParser::For_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_statement(this);
}


antlrcpp::Any STLanguageParser::For_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitFor_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::For_statementContext* STLanguageParser::for_statement() {
  For_statementContext *_localctx = _tracker.createInstance<For_statementContext>(_ctx, getState());
  enterRule(_localctx, 10, STLanguageParser::RuleFor_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(STLanguageParser::TOKEN_FOR);
    setState(100);
    expression(0);
    setState(101);
    match(STLanguageParser::TOKEN_TO);
    setState(102);
    expression(0);
    setState(103);
    match(STLanguageParser::TOKEN_DO);
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
      | (1ULL << STLanguageParser::TOKEN_OPEN_BRACE)
      | (1ULL << STLanguageParser::TOKEN_HEX_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_DEC_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_OCT_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_BIN_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_PLUS)
      | (1ULL << STLanguageParser::TOKEN_MINUS)
      | (1ULL << STLanguageParser::STATEMENT_SEPARATOR)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
    setState(109);
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeat_statement(this);
}

void STLanguageParser::Repeat_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeat_statement(this);
}


antlrcpp::Any STLanguageParser::Repeat_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitRepeat_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Repeat_statementContext* STLanguageParser::repeat_statement() {
  Repeat_statementContext *_localctx = _tracker.createInstance<Repeat_statementContext>(_ctx, getState());
  enterRule(_localctx, 12, STLanguageParser::RuleRepeat_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(STLanguageParser::TOKEN_REPEAT);
    setState(113); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(112);
      statement();
      setState(115); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_RETURN)
      | (1ULL << STLanguageParser::TOKEN_FOR)
      | (1ULL << STLanguageParser::TOKEN_WHILE)
      | (1ULL << STLanguageParser::TOKEN_IF)
      | (1ULL << STLanguageParser::TOKEN_REPEAT)
      | (1ULL << STLanguageParser::TOKEN_CASE)
      | (1ULL << STLanguageParser::TOKEN_OPEN_BRACE)
      | (1ULL << STLanguageParser::TOKEN_HEX_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_DEC_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_OCT_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_BIN_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_PLUS)
      | (1ULL << STLanguageParser::TOKEN_MINUS)
      | (1ULL << STLanguageParser::STATEMENT_SEPARATOR)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
    setState(117);
    match(STLanguageParser::TOKEN_UNTIL);
    setState(118);
    expression(0);
    setState(119);
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_statement(this);
}

void STLanguageParser::Case_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_statement(this);
}


antlrcpp::Any STLanguageParser::Case_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitCase_statement(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Case_statementContext* STLanguageParser::case_statement() {
  Case_statementContext *_localctx = _tracker.createInstance<Case_statementContext>(_ctx, getState());
  enterRule(_localctx, 14, STLanguageParser::RuleCase_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(STLanguageParser::TOKEN_CASE);
    setState(122);
    variable();
    setState(123);
    match(STLanguageParser::TOKEN_OF);
    setState(134); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(125); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(124);
                token_case_label();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(127); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(130); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(129);
                statement();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(132); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(136); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_ELSE)
      | (1ULL << STLanguageParser::TOKEN_HEX_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_DEC_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_OCT_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_BIN_NUMBER)
      | (1ULL << STLanguageParser::TOKEN_MINUS)
      | (1ULL << STLanguageParser::IDENTIFIER))) != 0));
    setState(138);
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToken_case_label(this);
}

void STLanguageParser::Token_case_labelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToken_case_label(this);
}


antlrcpp::Any STLanguageParser::Token_case_labelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitToken_case_label(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Token_case_labelContext* STLanguageParser::token_case_label() {
  Token_case_labelContext *_localctx = _tracker.createInstance<Token_case_labelContext>(_ctx, getState());
  enterRule(_localctx, 16, STLanguageParser::RuleToken_case_label);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(156);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(140);
      value();
      setState(145);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == STLanguageParser::TOKEN_CASE_VAL_SEP) {
        setState(141);
        match(STLanguageParser::TOKEN_CASE_VAL_SEP);
        setState(142);
        value();
        setState(147);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(148);
      match(STLanguageParser::TOKEN_CASE_LBL_SEP);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(150);
      value();
      setState(151);
      match(STLanguageParser::TOKEN_CASE_RANGE);
      setState(152);
      value();
      setState(153);
      match(STLanguageParser::TOKEN_CASE_LBL_SEP);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(155);
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

//----------------- ExpressionContext ------------------------------------------------------------------

STLanguageParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

STLanguageParser::ImmediateContext* STLanguageParser::ExpressionContext::immediate() {
  return getRuleContext<STLanguageParser::ImmediateContext>(0);
}

STLanguageParser::VariableContext* STLanguageParser::ExpressionContext::variable() {
  return getRuleContext<STLanguageParser::VariableContext>(0);
}

STLanguageParser::Unary_operator_preContext* STLanguageParser::ExpressionContext::unary_operator_pre() {
  return getRuleContext<STLanguageParser::Unary_operator_preContext>(0);
}

STLanguageParser::Unary_operator_postContext* STLanguageParser::ExpressionContext::unary_operator_post() {
  return getRuleContext<STLanguageParser::Unary_operator_postContext>(0);
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

STLanguageParser::Compare_operatorContext* STLanguageParser::ExpressionContext::compare_operator() {
  return getRuleContext<STLanguageParser::Compare_operatorContext>(0);
}

STLanguageParser::Assign_operatorContext* STLanguageParser::ExpressionContext::assign_operator() {
  return getRuleContext<STLanguageParser::Assign_operatorContext>(0);
}


size_t STLanguageParser::ExpressionContext::getRuleIndex() const {
  return STLanguageParser::RuleExpression;
}

void STLanguageParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void STLanguageParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any STLanguageParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
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
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, STLanguageParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(172);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(159);
      immediate();
      break;
    }

    case 2: {
      setState(161);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == STLanguageParser::TOKEN_PLUS

      || _la == STLanguageParser::TOKEN_MINUS) {
        setState(160);
        unary_operator_pre();
      }
      setState(163);
      variable();
      setState(165);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(164);
        unary_operator_post();
        break;
      }

      }
      break;
    }

    case 3: {
      setState(167);
      match(STLanguageParser::TOKEN_OPEN_BRACE);
      setState(168);
      expression(0);
      setState(169);
      match(STLanguageParser::TOKEN_CLOSE_BRACE);
      break;
    }

    case 4: {
      setState(171);
      function_call();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(192);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(190);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(174);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(175);
          arith_operator_muldiv();
          setState(176);
          expression(6);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(178);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(179);
          arith_operator_addsub();
          setState(180);
          expression(5);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(182);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(183);
          compare_operator();
          setState(184);
          expression(4);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(186);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(187);
          assign_operator();
          setState(188);
          expression(3);
          break;
        }

        } 
      }
      setState(194);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void STLanguageParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}


antlrcpp::Any STLanguageParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Function_callContext* STLanguageParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 20, STLanguageParser::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(228);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(195);
      match(STLanguageParser::IDENTIFIER);
      setState(196);
      match(STLanguageParser::TOKEN_OPEN_BRACE);
      setState(197);
      match(STLanguageParser::TOKEN_CLOSE_BRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(198);
      match(STLanguageParser::IDENTIFIER);
      setState(199);
      match(STLanguageParser::TOKEN_OPEN_BRACE);
      setState(200);
      expression(0);
      setState(205);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == STLanguageParser::TOKEN_ARG_SEP) {
        setState(201);
        match(STLanguageParser::TOKEN_ARG_SEP);
        setState(202);
        expression(0);
        setState(207);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(208);
      match(STLanguageParser::TOKEN_CLOSE_BRACE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(210);
      match(STLanguageParser::IDENTIFIER);
      setState(211);
      match(STLanguageParser::TOKEN_OPEN_BRACE);

      setState(214);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(212);
        func_in_argument();
        break;
      }

      case 2: {
        setState(213);
        func_out_argument();
        break;
      }

      }
      setState(223);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == STLanguageParser::TOKEN_ARG_SEP) {
        setState(216);
        match(STLanguageParser::TOKEN_ARG_SEP);
        setState(219);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          setState(217);
          func_in_argument();
          break;
        }

        case 2: {
          setState(218);
          func_out_argument();
          break;
        }

        }
        setState(225);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(226);
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_in_argument(this);
}

void STLanguageParser::Func_in_argumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_in_argument(this);
}


antlrcpp::Any STLanguageParser::Func_in_argumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitFunc_in_argument(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Func_in_argumentContext* STLanguageParser::func_in_argument() {
  Func_in_argumentContext *_localctx = _tracker.createInstance<Func_in_argumentContext>(_ctx, getState());
  enterRule(_localctx, 22, STLanguageParser::RuleFunc_in_argument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    variable();
    setState(231);
    assign_operator();
    setState(232);
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_out_argument(this);
}

void STLanguageParser::Func_out_argumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_out_argument(this);
}


antlrcpp::Any STLanguageParser::Func_out_argumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitFunc_out_argument(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Func_out_argumentContext* STLanguageParser::func_out_argument() {
  Func_out_argumentContext *_localctx = _tracker.createInstance<Func_out_argumentContext>(_ctx, getState());
  enterRule(_localctx, 24, STLanguageParser::RuleFunc_out_argument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    variable();
    setState(235);
    assign_operator_out();
    setState(236);
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign_operator(this);
}

void STLanguageParser::Assign_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign_operator(this);
}


antlrcpp::Any STLanguageParser::Assign_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitAssign_operator(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Assign_operatorContext* STLanguageParser::assign_operator() {
  Assign_operatorContext *_localctx = _tracker.createInstance<Assign_operatorContext>(_ctx, getState());
  enterRule(_localctx, 26, STLanguageParser::RuleAssign_operator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(STLanguageParser::TOKEN_ASSIGN_RL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compare_operatorContext ------------------------------------------------------------------

STLanguageParser::Compare_operatorContext::Compare_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::Compare_operatorContext::TOKEN_CMP_EQ() {
  return getToken(STLanguageParser::TOKEN_CMP_EQ, 0);
}

tree::TerminalNode* STLanguageParser::Compare_operatorContext::TOKEN_CMP_GT_EQ() {
  return getToken(STLanguageParser::TOKEN_CMP_GT_EQ, 0);
}

tree::TerminalNode* STLanguageParser::Compare_operatorContext::TOKEN_CMP_LT_EQ() {
  return getToken(STLanguageParser::TOKEN_CMP_LT_EQ, 0);
}

tree::TerminalNode* STLanguageParser::Compare_operatorContext::TOKEN_CMP_GT() {
  return getToken(STLanguageParser::TOKEN_CMP_GT, 0);
}

tree::TerminalNode* STLanguageParser::Compare_operatorContext::TOKEN_CMP_LT() {
  return getToken(STLanguageParser::TOKEN_CMP_LT, 0);
}


size_t STLanguageParser::Compare_operatorContext::getRuleIndex() const {
  return STLanguageParser::RuleCompare_operator;
}

void STLanguageParser::Compare_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompare_operator(this);
}

void STLanguageParser::Compare_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompare_operator(this);
}


antlrcpp::Any STLanguageParser::Compare_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitCompare_operator(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Compare_operatorContext* STLanguageParser::compare_operator() {
  Compare_operatorContext *_localctx = _tracker.createInstance<Compare_operatorContext>(_ctx, getState());
  enterRule(_localctx, 28, STLanguageParser::RuleCompare_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << STLanguageParser::TOKEN_CMP_EQ)
      | (1ULL << STLanguageParser::TOKEN_CMP_GT_EQ)
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign_operator_out(this);
}

void STLanguageParser::Assign_operator_outContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign_operator_out(this);
}


antlrcpp::Any STLanguageParser::Assign_operator_outContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitAssign_operator_out(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Assign_operator_outContext* STLanguageParser::assign_operator_out() {
  Assign_operator_outContext *_localctx = _tracker.createInstance<Assign_operator_outContext>(_ctx, getState());
  enterRule(_localctx, 30, STLanguageParser::RuleAssign_operator_out);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
    match(STLanguageParser::TOKEN_ASSIGN_LR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_operator_postContext ------------------------------------------------------------------

STLanguageParser::Unary_operator_postContext::Unary_operator_postContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* STLanguageParser::Unary_operator_postContext::TOKEN_INCREMENT() {
  return getToken(STLanguageParser::TOKEN_INCREMENT, 0);
}

tree::TerminalNode* STLanguageParser::Unary_operator_postContext::TOKEN_DECREMENT() {
  return getToken(STLanguageParser::TOKEN_DECREMENT, 0);
}


size_t STLanguageParser::Unary_operator_postContext::getRuleIndex() const {
  return STLanguageParser::RuleUnary_operator_post;
}

void STLanguageParser::Unary_operator_postContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_operator_post(this);
}

void STLanguageParser::Unary_operator_postContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_operator_post(this);
}


antlrcpp::Any STLanguageParser::Unary_operator_postContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitUnary_operator_post(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Unary_operator_postContext* STLanguageParser::unary_operator_post() {
  Unary_operator_postContext *_localctx = _tracker.createInstance<Unary_operator_postContext>(_ctx, getState());
  enterRule(_localctx, 32, STLanguageParser::RuleUnary_operator_post);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    _la = _input->LA(1);
    if (!(_la == STLanguageParser::TOKEN_INCREMENT

    || _la == STLanguageParser::TOKEN_DECREMENT)) {
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


size_t STLanguageParser::Unary_operator_preContext::getRuleIndex() const {
  return STLanguageParser::RuleUnary_operator_pre;
}

void STLanguageParser::Unary_operator_preContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_operator_pre(this);
}

void STLanguageParser::Unary_operator_preContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_operator_pre(this);
}


antlrcpp::Any STLanguageParser::Unary_operator_preContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitUnary_operator_pre(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Unary_operator_preContext* STLanguageParser::unary_operator_pre() {
  Unary_operator_preContext *_localctx = _tracker.createInstance<Unary_operator_preContext>(_ctx, getState());
  enterRule(_localctx, 34, STLanguageParser::RuleUnary_operator_pre);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArith_operator_muldiv(this);
}

void STLanguageParser::Arith_operator_muldivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArith_operator_muldiv(this);
}


antlrcpp::Any STLanguageParser::Arith_operator_muldivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitArith_operator_muldiv(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Arith_operator_muldivContext* STLanguageParser::arith_operator_muldiv() {
  Arith_operator_muldivContext *_localctx = _tracker.createInstance<Arith_operator_muldivContext>(_ctx, getState());
  enterRule(_localctx, 36, STLanguageParser::RuleArith_operator_muldiv);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArith_operator_addsub(this);
}

void STLanguageParser::Arith_operator_addsubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArith_operator_addsub(this);
}


antlrcpp::Any STLanguageParser::Arith_operator_addsubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitArith_operator_addsub(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::Arith_operator_addsubContext* STLanguageParser::arith_operator_addsub() {
  Arith_operator_addsubContext *_localctx = _tracker.createInstance<Arith_operator_addsubContext>(_ctx, getState());
  enterRule(_localctx, 38, STLanguageParser::RuleArith_operator_addsub);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void STLanguageParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


antlrcpp::Any STLanguageParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::ValueContext* STLanguageParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 40, STLanguageParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(254);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case STLanguageParser::TOKEN_HEX_NUMBER:
      case STLanguageParser::TOKEN_DEC_NUMBER:
      case STLanguageParser::TOKEN_OCT_NUMBER:
      case STLanguageParser::TOKEN_BIN_NUMBER:
      case STLanguageParser::TOKEN_MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(252);
        immediate();
        break;
      }

      case STLanguageParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(253);
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate(this);
}

void STLanguageParser::ImmediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate(this);
}


antlrcpp::Any STLanguageParser::ImmediateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitImmediate(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::ImmediateContext* STLanguageParser::immediate() {
  ImmediateContext *_localctx = _tracker.createInstance<ImmediateContext>(_ctx, getState());
  enterRule(_localctx, 42, STLanguageParser::RuleImmediate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(263);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case STLanguageParser::TOKEN_DEC_NUMBER:
      case STLanguageParser::TOKEN_MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(257);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == STLanguageParser::TOKEN_MINUS) {
          setState(256);
          match(STLanguageParser::TOKEN_MINUS);
        }
        setState(259);
        match(STLanguageParser::TOKEN_DEC_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_HEX_NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(260);
        match(STLanguageParser::TOKEN_HEX_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_OCT_NUMBER: {
        enterOuterAlt(_localctx, 3);
        setState(261);
        match(STLanguageParser::TOKEN_OCT_NUMBER);
        break;
      }

      case STLanguageParser::TOKEN_BIN_NUMBER: {
        enterOuterAlt(_localctx, 4);
        setState(262);
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
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void STLanguageParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<STLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}


antlrcpp::Any STLanguageParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<STLanguageVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

STLanguageParser::VariableContext* STLanguageParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 44, STLanguageParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
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
    case 9: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool STLanguageParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);

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
  "input", "statement", "return_statement", "if_statement", "while_statement", 
  "for_statement", "repeat_statement", "case_statement", "token_case_label", 
  "expression", "function_call", "func_in_argument", "func_out_argument", 
  "assign_operator", "compare_operator", "assign_operator_out", "unary_operator_post", 
  "unary_operator_pre", "arith_operator_muldiv", "arith_operator_addsub", 
  "value", "immediate", "variable"
};

std::vector<std::string> STLanguageParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "'RETURN'", "'FOR'", "'END_FOR'", 
  "'WHILE'", "'DO'", "'TO'", "'END_WHILE'", "'IF'", "'THEN'", "'ELSIF'", 
  "'ELSE'", "'END_IF'", "'SELECT'", "'END_SELECT'", "'REPEAT'", "'UNTIL'", 
  "'END_REPEAT'", "'CASE'", "'OF'", "'END_CASE'"
};

std::vector<std::string> STLanguageParser::_symbolicNames = {
  "", "WS", "TOKEN_ASSIGN_RL", "TOKEN_ASSIGN_LR", "TOKEN_CMP_EQ", "TOKEN_CMP_GT_EQ", 
  "TOKEN_CMP_LT_EQ", "TOKEN_CMP_GT", "TOKEN_CMP_LT", "TOKEN_RETURN", "TOKEN_FOR", 
  "TOKEN_FOR_END", "TOKEN_WHILE", "TOKEN_DO", "TOKEN_TO", "TOKEN_WHILE_END", 
  "TOKEN_IF", "TOKEN_IF_THEN", "TOKEN_IF_ELIF", "TOKEN_ELSE", "TOKEN_IF_END", 
  "TOKEN_SELECT", "TOKEN_SELECT_END", "TOKEN_REPEAT", "TOKEN_UNTIL", "TOKEN_REPEAT_END", 
  "TOKEN_CASE", "TOKEN_OF", "TOKEN_CASE_END", "TOKEN_OPEN_BRACE", "TOKEN_CLOSE_BRACE", 
  "TOKEN_HEX_NUMBER", "TOKEN_DEC_NUMBER", "TOKEN_OCT_NUMBER", "TOKEN_BIN_NUMBER", 
  "TOKEN_INCREMENT", "TOKEN_DECREMENT", "TOKEN_CASE_RANGE", "TOKEN_PLUS", 
  "TOKEN_MINUS", "TOKEN_MUL", "TOKEN_DIV", "TOKEN_ARG_SEP", "TOKEN_CASE_VAL_SEP", 
  "TOKEN_CASE_LBL_SEP", "STATEMENT_SEPARATOR", "IDENTIFIER"
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
    0x3, 0x30, 0x10e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x3, 0x2, 0x7, 0x2, 0x32, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x35, 
    0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x43, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x6, 0x5, 0x4b, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x4c, 0x3, 0x5, 0x3, 
    0x5, 0x7, 0x5, 0x51, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x54, 0xb, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x58, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x6, 0x6, 0x60, 0xa, 0x6, 0xd, 0x6, 0xe, 
    0x6, 0x61, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x6, 0x7, 0x6c, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x6d, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x6, 0x8, 0x74, 0xa, 0x8, 0xd, 
    0x8, 0xe, 0x8, 0x75, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x6, 0x9, 0x80, 0xa, 0x9, 0xd, 0x9, 0xe, 
    0x9, 0x81, 0x3, 0x9, 0x6, 0x9, 0x85, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0x86, 
    0x6, 0x9, 0x89, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0x8a, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x92, 0xa, 0xa, 0xc, 0xa, 0xe, 
    0xa, 0x95, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x9f, 0xa, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x5, 0xb, 0xa4, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 
    0xa8, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 
    0xb, 0xaf, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0xc1, 0xa, 0xb, 0xc, 
    0xb, 0xe, 0xb, 0xc4, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xce, 0xa, 0xc, 0xc, 
    0xc, 0xe, 0xc, 0xd1, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xd9, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x5, 0xc, 0xde, 0xa, 0xc, 0x7, 0xc, 0xe0, 0xa, 0xc, 0xc, 0xc, 0xe, 
    0xc, 0xe3, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xe7, 0xa, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x101, 0xa, 0x16, 
    0x3, 0x17, 0x5, 0x17, 0x104, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x10a, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x2, 0x3, 0x14, 0x19, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
    0x2c, 0x2e, 0x2, 0x6, 0x3, 0x2, 0x6, 0xa, 0x3, 0x2, 0x25, 0x26, 0x3, 
    0x2, 0x28, 0x29, 0x3, 0x2, 0x2a, 0x2b, 0x2, 0x11e, 0x2, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x42, 0x3, 0x2, 0x2, 0x2, 0x6, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x46, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5b, 0x3, 0x2, 0x2, 0x2, 0xc, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x71, 0x3, 0x2, 0x2, 0x2, 0x10, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x14, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x18, 0xe8, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xec, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xf0, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x20, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0x24, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x26, 0xfa, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x100, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x109, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x10b, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x32, 0x5, 0x4, 0x3, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 
    0x2, 0x32, 0x35, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x36, 0x3, 0x2, 0x2, 0x2, 0x35, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 0x2, 0x2, 0x3, 0x37, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x43, 0x5, 0x6, 0x4, 0x2, 0x39, 0x43, 0x5, 
    0x8, 0x5, 0x2, 0x3a, 0x43, 0x5, 0xa, 0x6, 0x2, 0x3b, 0x43, 0x5, 0xc, 
    0x7, 0x2, 0x3c, 0x43, 0x5, 0xe, 0x8, 0x2, 0x3d, 0x43, 0x5, 0x10, 0x9, 
    0x2, 0x3e, 0x3f, 0x5, 0x14, 0xb, 0x2, 0x3f, 0x40, 0x7, 0x2f, 0x2, 0x2, 
    0x40, 0x43, 0x3, 0x2, 0x2, 0x2, 0x41, 0x43, 0x7, 0x2f, 0x2, 0x2, 0x42, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0x42, 0x39, 0x3, 0x2, 0x2, 0x2, 0x42, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x42, 0x3c, 0x3, 
    0x2, 0x2, 0x2, 0x42, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x42, 0x3e, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x45, 0x7, 0xb, 0x2, 0x2, 0x45, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x46, 0x47, 0x7, 0x12, 0x2, 0x2, 0x47, 0x48, 0x5, 0x14, 0xb, 0x2, 0x48, 
    0x4a, 0x7, 0x13, 0x2, 0x2, 0x49, 0x4b, 0x5, 0x4, 0x3, 0x2, 0x4a, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x52, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x4f, 0x7, 0x14, 0x2, 0x2, 0x4f, 0x51, 0x5, 0x4, 0x3, 
    0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x51, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 
    0x57, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 
    0x7, 0x15, 0x2, 0x2, 0x56, 0x58, 0x5, 0x4, 0x3, 0x2, 0x57, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x59, 0x5a, 0x7, 0x16, 0x2, 0x2, 0x5a, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x5b, 0x5c, 0x7, 0xe, 0x2, 0x2, 0x5c, 0x5d, 0x5, 0x14, 0xb, 0x2, 
    0x5d, 0x5f, 0x7, 0xf, 0x2, 0x2, 0x5e, 0x60, 0x5, 0x4, 0x3, 0x2, 0x5f, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x63, 0x64, 0x7, 0x11, 0x2, 0x2, 0x64, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x66, 0x7, 0xc, 0x2, 0x2, 0x66, 0x67, 0x5, 0x14, 0xb, 
    0x2, 0x67, 0x68, 0x7, 0x10, 0x2, 0x2, 0x68, 0x69, 0x5, 0x14, 0xb, 0x2, 
    0x69, 0x6b, 0x7, 0xf, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0x4, 0x3, 0x2, 0x6b, 
    0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x6f, 0x70, 0x7, 0xd, 0x2, 0x2, 0x70, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x71, 0x73, 0x7, 0x19, 0x2, 0x2, 0x72, 0x74, 0x5, 0x4, 0x3, 
    0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 
    0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 0x1a, 0x2, 0x2, 0x78, 0x79, 
    0x5, 0x14, 0xb, 0x2, 0x79, 0x7a, 0x7, 0x1b, 0x2, 0x2, 0x7a, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x1c, 0x2, 0x2, 0x7c, 0x7d, 0x5, 0x2e, 
    0x18, 0x2, 0x7d, 0x88, 0x7, 0x1d, 0x2, 0x2, 0x7e, 0x80, 0x5, 0x12, 0xa, 
    0x2, 0x7f, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 
    0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x83, 0x85, 0x5, 0x4, 0x3, 0x2, 0x84, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x1e, 0x2, 0x2, 0x8d, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x93, 0x5, 0x2a, 0x16, 0x2, 0x8f, 0x90, 
    0x7, 0x2d, 0x2, 0x2, 0x90, 0x92, 0x5, 0x2a, 0x16, 0x2, 0x91, 0x8f, 0x3, 
    0x2, 0x2, 0x2, 0x92, 0x95, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x96, 0x3, 0x2, 0x2, 
    0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0x2e, 0x2, 0x2, 
    0x97, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x5, 0x2a, 0x16, 0x2, 0x99, 
    0x9a, 0x7, 0x27, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x2a, 0x16, 0x2, 0x9b, 0x9c, 
    0x7, 0x2e, 0x2, 0x2, 0x9c, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f, 0x7, 
    0x15, 0x2, 0x2, 0x9e, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0xa0, 0xa1, 0x8, 0xb, 0x1, 0x2, 0xa1, 0xaf, 0x5, 0x2c, 0x17, 0x2, 
    0xa2, 0xa4, 0x5, 0x24, 0x13, 0x2, 0xa3, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa7, 
    0x5, 0x2e, 0x18, 0x2, 0xa6, 0xa8, 0x5, 0x22, 0x12, 0x2, 0xa7, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xaf, 0x3, 
    0x2, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0x1f, 0x2, 0x2, 0xaa, 0xab, 0x5, 0x14, 
    0xb, 0x2, 0xab, 0xac, 0x7, 0x20, 0x2, 0x2, 0xac, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xad, 0xaf, 0x5, 0x16, 0xc, 0x2, 0xae, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xae, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 
    0xc, 0x7, 0x2, 0x2, 0xb1, 0xb2, 0x5, 0x26, 0x14, 0x2, 0xb2, 0xb3, 0x5, 
    0x14, 0xb, 0x8, 0xb3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0xc, 0x6, 
    0x2, 0x2, 0xb5, 0xb6, 0x5, 0x28, 0x15, 0x2, 0xb6, 0xb7, 0x5, 0x14, 0xb, 
    0x7, 0xb7, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0xc, 0x5, 0x2, 0x2, 
    0xb9, 0xba, 0x5, 0x1e, 0x10, 0x2, 0xba, 0xbb, 0x5, 0x14, 0xb, 0x6, 0xbb, 
    0xc1, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0xc, 0x4, 0x2, 0x2, 0xbd, 0xbe, 
    0x5, 0x1c, 0xf, 0x2, 0xbe, 0xbf, 0x5, 0x14, 0xb, 0x5, 0xbf, 0xc1, 0x3, 
    0x2, 0x2, 0x2, 0xc0, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xb4, 0x3, 0x2, 
    0x2, 0x2, 0xc0, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0x15, 0x3, 0x2, 0x2, 0x2, 0xc4, 
    0xc2, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0x30, 0x2, 0x2, 0xc6, 0xc7, 
    0x7, 0x1f, 0x2, 0x2, 0xc7, 0xe7, 0x7, 0x20, 0x2, 0x2, 0xc8, 0xc9, 0x7, 
    0x30, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x1f, 0x2, 0x2, 0xca, 0xcf, 0x5, 0x14, 
    0xb, 0x2, 0xcb, 0xcc, 0x7, 0x2c, 0x2, 0x2, 0xcc, 0xce, 0x5, 0x14, 0xb, 
    0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd1, 0x3, 0x2, 0x2, 0x2, 
    0xcf, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 
    0xd2, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 
    0x7, 0x20, 0x2, 0x2, 0xd3, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x7, 
    0x30, 0x2, 0x2, 0xd5, 0xd8, 0x7, 0x1f, 0x2, 0x2, 0xd6, 0xd9, 0x5, 0x18, 
    0xd, 0x2, 0xd7, 0xd9, 0x5, 0x1a, 0xe, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xe1, 0x3, 0x2, 0x2, 0x2, 
    0xda, 0xdd, 0x7, 0x2c, 0x2, 0x2, 0xdb, 0xde, 0x5, 0x18, 0xd, 0x2, 0xdc, 
    0xde, 0x5, 0x1a, 0xe, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdc, 
    0x3, 0x2, 0x2, 0x2, 0xde, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xda, 0x3, 
    0x2, 0x2, 0x2, 0xe0, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdf, 0x3, 0x2, 
    0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe4, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x7, 0x20, 0x2, 0x2, 
    0xe5, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xe6, 
    0xc8, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xe7, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x5, 0x2e, 0x18, 0x2, 0xe9, 0xea, 0x5, 
    0x1c, 0xf, 0x2, 0xea, 0xeb, 0x5, 0x14, 0xb, 0x2, 0xeb, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0xec, 0xed, 0x5, 0x2e, 0x18, 0x2, 0xed, 0xee, 0x5, 0x20, 0x11, 
    0x2, 0xee, 0xef, 0x5, 0x2e, 0x18, 0x2, 0xef, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0xf0, 0xf1, 0x7, 0x4, 0x2, 0x2, 0xf1, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xf2, 
    0xf3, 0x9, 0x2, 0x2, 0x2, 0xf3, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 
    0x7, 0x5, 0x2, 0x2, 0xf5, 0x21, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x9, 
    0x3, 0x2, 0x2, 0xf7, 0x23, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x9, 0x4, 
    0x2, 0x2, 0xf9, 0x25, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x9, 0x5, 0x2, 
    0x2, 0xfb, 0x27, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x9, 0x4, 0x2, 0x2, 
    0xfd, 0x29, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x101, 0x5, 0x2c, 0x17, 0x2, 0xff, 
    0x101, 0x5, 0x2e, 0x18, 0x2, 0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x100, 
    0xff, 0x3, 0x2, 0x2, 0x2, 0x101, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x102, 0x104, 
    0x7, 0x29, 0x2, 0x2, 0x103, 0x102, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x10a, 
    0x7, 0x22, 0x2, 0x2, 0x106, 0x10a, 0x7, 0x21, 0x2, 0x2, 0x107, 0x10a, 
    0x7, 0x23, 0x2, 0x2, 0x108, 0x10a, 0x7, 0x24, 0x2, 0x2, 0x109, 0x103, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0x106, 0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x10b, 0x10c, 0x7, 0x30, 0x2, 0x2, 0x10c, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x33, 0x42, 0x4c, 0x52, 0x57, 0x61, 0x6d, 0x75, 
    0x81, 0x86, 0x8a, 0x93, 0x9e, 0xa3, 0xa7, 0xae, 0xc0, 0xc2, 0xcf, 0xd8, 
    0xdd, 0xe1, 0xe6, 0x100, 0x103, 0x109, 
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


// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment1/Grammer\calc.g4 by ANTLR 4.7.2


#include "calcListener.h"
#include "calcVisitor.h"

#include "calcParser.h"


using namespace antlrcpp;
using namespace antlr4;

calcParser::calcParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

calcParser::~calcParser() {
  delete _interpreter;
}

std::string calcParser::getGrammarFileName() const {
  return "calc.g4";
}

const std::vector<std::string>& calcParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& calcParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InputContext ------------------------------------------------------------------

calcParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

calcParser::ExprContext* calcParser::InputContext::expr() {
  return getRuleContext<calcParser::ExprContext>(0);
}

tree::TerminalNode* calcParser::InputContext::EOF() {
  return getToken(calcParser::EOF, 0);
}


size_t calcParser::InputContext::getRuleIndex() const {
  return calcParser::RuleInput;
}

void calcParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void calcParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}


antlrcpp::Any calcParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

calcParser::InputContext* calcParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 0, calcParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(10);
    expr(0);
    setState(11);
    match(calcParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

calcParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calcParser::ExprContext::getRuleIndex() const {
  return calcParser::RuleExpr;
}

void calcParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_raw_multiplicativeContext ------------------------------------------------------------------

calcParser::ExprContext* calcParser::Expr_raw_multiplicativeContext::expr() {
  return getRuleContext<calcParser::ExprContext>(0);
}

calcParser::Paren_exprContext* calcParser::Expr_raw_multiplicativeContext::paren_expr() {
  return getRuleContext<calcParser::Paren_exprContext>(0);
}

calcParser::Expr_raw_multiplicativeContext::Expr_raw_multiplicativeContext(ExprContext *ctx) { copyFrom(ctx); }

void calcParser::Expr_raw_multiplicativeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_raw_multiplicative(this);
}
void calcParser::Expr_raw_multiplicativeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_raw_multiplicative(this);
}

antlrcpp::Any calcParser::Expr_raw_multiplicativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitExpr_raw_multiplicative(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_additiveContext ------------------------------------------------------------------

std::vector<calcParser::ExprContext *> calcParser::Expr_additiveContext::expr() {
  return getRuleContexts<calcParser::ExprContext>();
}

calcParser::ExprContext* calcParser::Expr_additiveContext::expr(size_t i) {
  return getRuleContext<calcParser::ExprContext>(i);
}

tree::TerminalNode* calcParser::Expr_additiveContext::PLUS() {
  return getToken(calcParser::PLUS, 0);
}

tree::TerminalNode* calcParser::Expr_additiveContext::MINUS() {
  return getToken(calcParser::MINUS, 0);
}

calcParser::Expr_additiveContext::Expr_additiveContext(ExprContext *ctx) { copyFrom(ctx); }

void calcParser::Expr_additiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_additive(this);
}
void calcParser::Expr_additiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_additive(this);
}

antlrcpp::Any calcParser::Expr_additiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitExpr_additive(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_powerContext ------------------------------------------------------------------

tree::TerminalNode* calcParser::Expr_powerContext::HAT() {
  return getToken(calcParser::HAT, 0);
}

std::vector<calcParser::ExprContext *> calcParser::Expr_powerContext::expr() {
  return getRuleContexts<calcParser::ExprContext>();
}

calcParser::ExprContext* calcParser::Expr_powerContext::expr(size_t i) {
  return getRuleContext<calcParser::ExprContext>(i);
}

calcParser::Expr_powerContext::Expr_powerContext(ExprContext *ctx) { copyFrom(ctx); }

void calcParser::Expr_powerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_power(this);
}
void calcParser::Expr_powerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_power(this);
}

antlrcpp::Any calcParser::Expr_powerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitExpr_power(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_multiplicativeContext ------------------------------------------------------------------

std::vector<calcParser::ExprContext *> calcParser::Expr_multiplicativeContext::expr() {
  return getRuleContexts<calcParser::ExprContext>();
}

calcParser::ExprContext* calcParser::Expr_multiplicativeContext::expr(size_t i) {
  return getRuleContext<calcParser::ExprContext>(i);
}

tree::TerminalNode* calcParser::Expr_multiplicativeContext::ASTERISK() {
  return getToken(calcParser::ASTERISK, 0);
}

tree::TerminalNode* calcParser::Expr_multiplicativeContext::SLASH() {
  return getToken(calcParser::SLASH, 0);
}

calcParser::Expr_multiplicativeContext::Expr_multiplicativeContext(ExprContext *ctx) { copyFrom(ctx); }

void calcParser::Expr_multiplicativeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_multiplicative(this);
}
void calcParser::Expr_multiplicativeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_multiplicative(this);
}

antlrcpp::Any calcParser::Expr_multiplicativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitExpr_multiplicative(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_noneContext ------------------------------------------------------------------

calcParser::IntegerContext* calcParser::Expr_noneContext::integer() {
  return getRuleContext<calcParser::IntegerContext>(0);
}

calcParser::Fp_numContext* calcParser::Expr_noneContext::fp_num() {
  return getRuleContext<calcParser::Fp_numContext>(0);
}

calcParser::Paren_exprContext* calcParser::Expr_noneContext::paren_expr() {
  return getRuleContext<calcParser::Paren_exprContext>(0);
}

calcParser::Expr_noneContext::Expr_noneContext(ExprContext *ctx) { copyFrom(ctx); }

void calcParser::Expr_noneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_none(this);
}
void calcParser::Expr_noneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_none(this);
}

antlrcpp::Any calcParser::Expr_noneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitExpr_none(this);
  else
    return visitor->visitChildren(this);
}

calcParser::ExprContext* calcParser::expr() {
   return expr(0);
}

calcParser::ExprContext* calcParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  calcParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  calcParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, calcParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(17);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Expr_noneContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(14);
      integer();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Expr_noneContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(15);
      fp_num();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Expr_noneContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(16);
      paren_expr();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(32);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(30);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Expr_powerContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(19);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(20);
          match(calcParser::HAT);
          setState(21);
          dynamic_cast<Expr_powerContext *>(_localctx)->rhs = expr(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Expr_multiplicativeContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(22);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(23);
          dynamic_cast<Expr_multiplicativeContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == calcParser::ASTERISK

          || _la == calcParser::SLASH)) {
            dynamic_cast<Expr_multiplicativeContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(24);
          dynamic_cast<Expr_multiplicativeContext *>(_localctx)->rhs = expr(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Expr_additiveContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(25);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(26);
          dynamic_cast<Expr_additiveContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == calcParser::PLUS

          || _la == calcParser::MINUS)) {
            dynamic_cast<Expr_additiveContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(27);
          dynamic_cast<Expr_additiveContext *>(_localctx)->rhs = expr(2);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Expr_raw_multiplicativeContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(28);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(29);
          dynamic_cast<Expr_raw_multiplicativeContext *>(_localctx)->rhs = paren_expr();
          break;
        }

        } 
      }
      setState(34);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Paren_exprContext ------------------------------------------------------------------

calcParser::Paren_exprContext::Paren_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calcParser::Paren_exprContext::OPEN_PAREN() {
  return getToken(calcParser::OPEN_PAREN, 0);
}

calcParser::ExprContext* calcParser::Paren_exprContext::expr() {
  return getRuleContext<calcParser::ExprContext>(0);
}

tree::TerminalNode* calcParser::Paren_exprContext::CLOSE_PAREN() {
  return getToken(calcParser::CLOSE_PAREN, 0);
}


size_t calcParser::Paren_exprContext::getRuleIndex() const {
  return calcParser::RuleParen_expr;
}

void calcParser::Paren_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParen_expr(this);
}

void calcParser::Paren_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParen_expr(this);
}


antlrcpp::Any calcParser::Paren_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitParen_expr(this);
  else
    return visitor->visitChildren(this);
}

calcParser::Paren_exprContext* calcParser::paren_expr() {
  Paren_exprContext *_localctx = _tracker.createInstance<Paren_exprContext>(_ctx, getState());
  enterRule(_localctx, 4, calcParser::RuleParen_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    match(calcParser::OPEN_PAREN);
    setState(36);
    expr(0);
    setState(37);
    match(calcParser::CLOSE_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fp_numContext ------------------------------------------------------------------

calcParser::Fp_numContext::Fp_numContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calcParser::Fp_numContext::FP_NUM() {
  return getToken(calcParser::FP_NUM, 0);
}

tree::TerminalNode* calcParser::Fp_numContext::PLUS() {
  return getToken(calcParser::PLUS, 0);
}

tree::TerminalNode* calcParser::Fp_numContext::MINUS() {
  return getToken(calcParser::MINUS, 0);
}


size_t calcParser::Fp_numContext::getRuleIndex() const {
  return calcParser::RuleFp_num;
}

void calcParser::Fp_numContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFp_num(this);
}

void calcParser::Fp_numContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFp_num(this);
}


antlrcpp::Any calcParser::Fp_numContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitFp_num(this);
  else
    return visitor->visitChildren(this);
}

calcParser::Fp_numContext* calcParser::fp_num() {
  Fp_numContext *_localctx = _tracker.createInstance<Fp_numContext>(_ctx, getState());
  enterRule(_localctx, 6, calcParser::RuleFp_num);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(42);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calcParser::FP_NUM: {
        enterOuterAlt(_localctx, 1);
        setState(39);
        match(calcParser::FP_NUM);
        break;
      }

      case calcParser::PLUS:
      case calcParser::MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(40);
        dynamic_cast<Fp_numContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == calcParser::PLUS

        || _la == calcParser::MINUS)) {
          dynamic_cast<Fp_numContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(41);
        match(calcParser::FP_NUM);
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

//----------------- IntegerContext ------------------------------------------------------------------

calcParser::IntegerContext::IntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calcParser::IntegerContext::UINT() {
  return getToken(calcParser::UINT, 0);
}

tree::TerminalNode* calcParser::IntegerContext::PLUS() {
  return getToken(calcParser::PLUS, 0);
}

tree::TerminalNode* calcParser::IntegerContext::MINUS() {
  return getToken(calcParser::MINUS, 0);
}


size_t calcParser::IntegerContext::getRuleIndex() const {
  return calcParser::RuleInteger;
}

void calcParser::IntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger(this);
}

void calcParser::IntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger(this);
}


antlrcpp::Any calcParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}

calcParser::IntegerContext* calcParser::integer() {
  IntegerContext *_localctx = _tracker.createInstance<IntegerContext>(_ctx, getState());
  enterRule(_localctx, 8, calcParser::RuleInteger);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(47);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calcParser::UINT: {
        enterOuterAlt(_localctx, 1);
        setState(44);
        match(calcParser::UINT);
        break;
      }

      case calcParser::PLUS:
      case calcParser::MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(45);
        dynamic_cast<IntegerContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == calcParser::PLUS

        || _la == calcParser::MINUS)) {
          dynamic_cast<IntegerContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(46);
        match(calcParser::UINT);
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

bool calcParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool calcParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 1);
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> calcParser::_decisionToDFA;
atn::PredictionContextCache calcParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN calcParser::_atn;
std::vector<uint16_t> calcParser::_serializedATN;

std::vector<std::string> calcParser::_ruleNames = {
  "input", "expr", "paren_expr", "fp_num", "integer"
};

std::vector<std::string> calcParser::_literalNames = {
  "", "'('", "')'", "'*'", "'/'", "'+'", "'-'", "'^'", "'.'"
};

std::vector<std::string> calcParser::_symbolicNames = {
  "", "OPEN_PAREN", "CLOSE_PAREN", "ASTERISK", "SLASH", "PLUS", "MINUS", 
  "HAT", "DOT", "FP_NUM", "UINT", "WS"
};

dfa::Vocabulary calcParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> calcParser::_tokenNames;

calcParser::Initializer::Initializer() {
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
    0x3, 0xd, 0x34, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x14, 0xa, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x21, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x24, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x2d, 0xa, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0x32, 0xa, 0x6, 0x3, 0x6, 0x2, 0x3, 0x4, 0x7, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0x2, 0x4, 0x3, 0x2, 0x5, 0x6, 0x3, 0x2, 0x7, 
    0x8, 0x2, 0x36, 0x2, 0xc, 0x3, 0x2, 0x2, 0x2, 0x4, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x25, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2c, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x5, 0x4, 0x3, 0x2, 0xd, 0xe, 0x7, 
    0x2, 0x2, 0x3, 0xe, 0x3, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 0x8, 0x3, 0x1, 
    0x2, 0x10, 0x14, 0x5, 0xa, 0x6, 0x2, 0x11, 0x14, 0x5, 0x8, 0x5, 0x2, 
    0x12, 0x14, 0x5, 0x6, 0x4, 0x2, 0x13, 0xf, 0x3, 0x2, 0x2, 0x2, 0x13, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x13, 0x12, 0x3, 0x2, 0x2, 0x2, 0x14, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0xc, 0x6, 0x2, 0x2, 0x16, 0x17, 0x7, 
    0x9, 0x2, 0x2, 0x17, 0x21, 0x5, 0x4, 0x3, 0x6, 0x18, 0x19, 0xc, 0x5, 
    0x2, 0x2, 0x19, 0x1a, 0x9, 0x2, 0x2, 0x2, 0x1a, 0x21, 0x5, 0x4, 0x3, 
    0x6, 0x1b, 0x1c, 0xc, 0x3, 0x2, 0x2, 0x1c, 0x1d, 0x9, 0x3, 0x2, 0x2, 
    0x1d, 0x21, 0x5, 0x4, 0x3, 0x4, 0x1e, 0x1f, 0xc, 0x4, 0x2, 0x2, 0x1f, 
    0x21, 0x5, 0x6, 0x4, 0x2, 0x20, 0x15, 0x3, 0x2, 0x2, 0x2, 0x20, 0x18, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1e, 0x3, 
    0x2, 0x2, 0x2, 0x21, 0x24, 0x3, 0x2, 0x2, 0x2, 0x22, 0x20, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x22, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x7, 0x3, 0x2, 0x2, 
    0x26, 0x27, 0x5, 0x4, 0x3, 0x2, 0x27, 0x28, 0x7, 0x4, 0x2, 0x2, 0x28, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2d, 0x7, 0xb, 0x2, 0x2, 0x2a, 0x2b, 
    0x9, 0x3, 0x2, 0x2, 0x2b, 0x2d, 0x7, 0xb, 0x2, 0x2, 0x2c, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x32, 0x7, 0xc, 0x2, 0x2, 0x2f, 0x30, 0x9, 0x3, 0x2, 
    0x2, 0x30, 0x32, 0x7, 0xc, 0x2, 0x2, 0x31, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x32, 0xb, 0x3, 0x2, 0x2, 0x2, 0x7, 
    0x13, 0x20, 0x22, 0x2c, 0x31, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

calcParser::Initializer calcParser::_init;

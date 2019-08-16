
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
    setState(4);
    expr();
    setState(5);
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

//----------------- Calc_addContext ------------------------------------------------------------------

tree::TerminalNode* calcParser::Calc_addContext::PLUS() {
  return getToken(calcParser::PLUS, 0);
}

tree::TerminalNode* calcParser::Calc_addContext::EOF() {
  return getToken(calcParser::EOF, 0);
}

std::vector<tree::TerminalNode *> calcParser::Calc_addContext::DISITS() {
  return getTokens(calcParser::DISITS);
}

tree::TerminalNode* calcParser::Calc_addContext::DISITS(size_t i) {
  return getToken(calcParser::DISITS, i);
}

calcParser::Calc_addContext::Calc_addContext(ExprContext *ctx) { copyFrom(ctx); }

void calcParser::Calc_addContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCalc_add(this);
}
void calcParser::Calc_addContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCalc_add(this);
}

antlrcpp::Any calcParser::Calc_addContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitCalc_add(this);
  else
    return visitor->visitChildren(this);
}
calcParser::ExprContext* calcParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 2, calcParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<ExprContext *>(_tracker.createInstance<calcParser::Calc_addContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(7);
    dynamic_cast<Calc_addContext *>(_localctx)->lhs = match(calcParser::DISITS);
    setState(8);
    match(calcParser::PLUS);
    setState(9);
    dynamic_cast<Calc_addContext *>(_localctx)->rhs = match(calcParser::DISITS);
    setState(10);
    match(calcParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> calcParser::_decisionToDFA;
atn::PredictionContextCache calcParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN calcParser::_atn;
std::vector<uint16_t> calcParser::_serializedATN;

std::vector<std::string> calcParser::_ruleNames = {
  "input", "expr"
};

std::vector<std::string> calcParser::_literalNames = {
  "", "", "'+'"
};

std::vector<std::string> calcParser::_symbolicNames = {
  "", "DISITS", "PLUS"
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
    0x3, 0x4, 0xf, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x2, 0x2, 0x4, 0x2, 0x4, 0x2, 0x2, 0x2, 0xc, 0x2, 0x6, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x9, 0x3, 0x2, 0x2, 0x2, 0x6, 0x7, 0x5, 0x4, 0x3, 0x2, 
    0x7, 0x8, 0x7, 0x2, 0x2, 0x3, 0x8, 0x3, 0x3, 0x2, 0x2, 0x2, 0x9, 0xa, 
    0x7, 0x3, 0x2, 0x2, 0xa, 0xb, 0x7, 0x4, 0x2, 0x2, 0xb, 0xc, 0x7, 0x3, 
    0x2, 0x2, 0xc, 0xd, 0x7, 0x2, 0x2, 0x3, 0xd, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x2, 
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


// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment2/Grammer\Mnemonic.g4 by ANTLR 4.7.2


#include "MnemonicListener.h"
#include "MnemonicVisitor.h"

#include "MnemonicParser.h"


using namespace antlrcpp;
using namespace antlr4;

MnemonicParser::MnemonicParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MnemonicParser::~MnemonicParser() {
  delete _interpreter;
}

std::string MnemonicParser::getGrammarFileName() const {
  return "Mnemonic.g4";
}

const std::vector<std::string>& MnemonicParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MnemonicParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InputContext ------------------------------------------------------------------

MnemonicParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MnemonicParser::InputContext::EOF() {
  return getToken(MnemonicParser::EOF, 0);
}

std::vector<tree::TerminalNode *> MnemonicParser::InputContext::NEWLINE() {
  return getTokens(MnemonicParser::NEWLINE);
}

tree::TerminalNode* MnemonicParser::InputContext::NEWLINE(size_t i) {
  return getToken(MnemonicParser::NEWLINE, i);
}

std::vector<MnemonicParser::MnemonicContext *> MnemonicParser::InputContext::mnemonic() {
  return getRuleContexts<MnemonicParser::MnemonicContext>();
}

MnemonicParser::MnemonicContext* MnemonicParser::InputContext::mnemonic(size_t i) {
  return getRuleContext<MnemonicParser::MnemonicContext>(i);
}


size_t MnemonicParser::InputContext::getRuleIndex() const {
  return MnemonicParser::RuleInput;
}

void MnemonicParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void MnemonicParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}


antlrcpp::Any MnemonicParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::InputContext* MnemonicParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 0, MnemonicParser::RuleInput);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(56);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(51);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MnemonicParser::SEPARATOR

        || _la == MnemonicParser::IDENTIFIER) {
          setState(50);
          mnemonic();
        }
        setState(53);
        match(MnemonicParser::NEWLINE); 
      }
      setState(58);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(60);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MnemonicParser::SEPARATOR

    || _la == MnemonicParser::IDENTIFIER) {
      setState(59);
      mnemonic();
    }
    setState(62);
    match(MnemonicParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MnemonicContext ------------------------------------------------------------------

MnemonicParser::MnemonicContext::MnemonicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MnemonicParser::InstructionContext* MnemonicParser::MnemonicContext::instruction() {
  return getRuleContext<MnemonicParser::InstructionContext>(0);
}

std::vector<MnemonicParser::SeparatorContext *> MnemonicParser::MnemonicContext::separator() {
  return getRuleContexts<MnemonicParser::SeparatorContext>();
}

MnemonicParser::SeparatorContext* MnemonicParser::MnemonicContext::separator(size_t i) {
  return getRuleContext<MnemonicParser::SeparatorContext>(i);
}

std::vector<MnemonicParser::OperandContext *> MnemonicParser::MnemonicContext::operand() {
  return getRuleContexts<MnemonicParser::OperandContext>();
}

MnemonicParser::OperandContext* MnemonicParser::MnemonicContext::operand(size_t i) {
  return getRuleContext<MnemonicParser::OperandContext>(i);
}

tree::TerminalNode* MnemonicParser::MnemonicContext::NEWLINE() {
  return getToken(MnemonicParser::NEWLINE, 0);
}


size_t MnemonicParser::MnemonicContext::getRuleIndex() const {
  return MnemonicParser::RuleMnemonic;
}

void MnemonicParser::MnemonicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMnemonic(this);
}

void MnemonicParser::MnemonicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMnemonic(this);
}


antlrcpp::Any MnemonicParser::MnemonicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitMnemonic(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::MnemonicContext* MnemonicParser::mnemonic() {
  MnemonicContext *_localctx = _tracker.createInstance<MnemonicContext>(_ctx, getState());
  enterRule(_localctx, 2, MnemonicParser::RuleMnemonic);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(67);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MnemonicParser::SEPARATOR) {
      setState(64);
      separator();
      setState(69);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }

    setState(70);
    instruction();
    setState(76);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(71);
        separator();
        setState(72);
        operand(); 
      }
      setState(78);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(82);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MnemonicParser::SEPARATOR) {
      setState(79);
      separator();
      setState(84);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(86);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(85);
      match(MnemonicParser::NEWLINE);
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

//----------------- SeparatorContext ------------------------------------------------------------------

MnemonicParser::SeparatorContext::SeparatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MnemonicParser::SeparatorContext::SEPARATOR() {
  return getToken(MnemonicParser::SEPARATOR, 0);
}


size_t MnemonicParser::SeparatorContext::getRuleIndex() const {
  return MnemonicParser::RuleSeparator;
}

void MnemonicParser::SeparatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeparator(this);
}

void MnemonicParser::SeparatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeparator(this);
}


antlrcpp::Any MnemonicParser::SeparatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitSeparator(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::SeparatorContext* MnemonicParser::separator() {
  SeparatorContext *_localctx = _tracker.createInstance<SeparatorContext>(_ctx, getState());
  enterRule(_localctx, 4, MnemonicParser::RuleSeparator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(MnemonicParser::SEPARATOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

MnemonicParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MnemonicParser::InstructionContext::getRuleIndex() const {
  return MnemonicParser::RuleInstruction;
}

void MnemonicParser::InstructionContext::copyFrom(InstructionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Inst_with_suffixContext ------------------------------------------------------------------

tree::TerminalNode* MnemonicParser::Inst_with_suffixContext::IDENTIFIER() {
  return getToken(MnemonicParser::IDENTIFIER, 0);
}

tree::TerminalNode* MnemonicParser::Inst_with_suffixContext::DOT_SUFFIX() {
  return getToken(MnemonicParser::DOT_SUFFIX, 0);
}

MnemonicParser::Inst_with_suffixContext::Inst_with_suffixContext(InstructionContext *ctx) { copyFrom(ctx); }

void MnemonicParser::Inst_with_suffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInst_with_suffix(this);
}
void MnemonicParser::Inst_with_suffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInst_with_suffix(this);
}

antlrcpp::Any MnemonicParser::Inst_with_suffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitInst_with_suffix(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Inst_normalContext ------------------------------------------------------------------

tree::TerminalNode* MnemonicParser::Inst_normalContext::IDENTIFIER() {
  return getToken(MnemonicParser::IDENTIFIER, 0);
}

MnemonicParser::Inst_normalContext::Inst_normalContext(InstructionContext *ctx) { copyFrom(ctx); }

void MnemonicParser::Inst_normalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInst_normal(this);
}
void MnemonicParser::Inst_normalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInst_normal(this);
}

antlrcpp::Any MnemonicParser::Inst_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitInst_normal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Inst_arithContext ------------------------------------------------------------------

tree::TerminalNode* MnemonicParser::Inst_arithContext::IDENTIFIER() {
  return getToken(MnemonicParser::IDENTIFIER, 0);
}

MnemonicParser::Arith_operatorContext* MnemonicParser::Inst_arithContext::arith_operator() {
  return getRuleContext<MnemonicParser::Arith_operatorContext>(0);
}

tree::TerminalNode* MnemonicParser::Inst_arithContext::DOT_SUFFIX() {
  return getToken(MnemonicParser::DOT_SUFFIX, 0);
}

MnemonicParser::Inst_arithContext::Inst_arithContext(InstructionContext *ctx) { copyFrom(ctx); }

void MnemonicParser::Inst_arithContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInst_arith(this);
}
void MnemonicParser::Inst_arithContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInst_arith(this);
}

antlrcpp::Any MnemonicParser::Inst_arithContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitInst_arith(this);
  else
    return visitor->visitChildren(this);
}
MnemonicParser::InstructionContext* MnemonicParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 6, MnemonicParser::RuleInstruction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(98);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<MnemonicParser::Inst_normalContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(90);
      match(MnemonicParser::IDENTIFIER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<MnemonicParser::Inst_with_suffixContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(91);
      match(MnemonicParser::IDENTIFIER);
      setState(92);
      match(MnemonicParser::DOT_SUFFIX);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<MnemonicParser::Inst_arithContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(93);
      match(MnemonicParser::IDENTIFIER);
      setState(94);
      arith_operator();
      setState(96);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MnemonicParser::DOT_SUFFIX) {
        setState(95);
        match(MnemonicParser::DOT_SUFFIX);
      }
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

//----------------- Arith_operatorContext ------------------------------------------------------------------

MnemonicParser::Arith_operatorContext::Arith_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MnemonicParser::Arith_operatorContext::ARITH_PLUS() {
  return getToken(MnemonicParser::ARITH_PLUS, 0);
}

tree::TerminalNode* MnemonicParser::Arith_operatorContext::ARITH_MINUS() {
  return getToken(MnemonicParser::ARITH_MINUS, 0);
}

tree::TerminalNode* MnemonicParser::Arith_operatorContext::MUL_OP_REF() {
  return getToken(MnemonicParser::MUL_OP_REF, 0);
}

tree::TerminalNode* MnemonicParser::Arith_operatorContext::ARITH_DIV() {
  return getToken(MnemonicParser::ARITH_DIV, 0);
}

tree::TerminalNode* MnemonicParser::Arith_operatorContext::ARITH_EQ() {
  return getToken(MnemonicParser::ARITH_EQ, 0);
}

tree::TerminalNode* MnemonicParser::Arith_operatorContext::ARITH_LT() {
  return getToken(MnemonicParser::ARITH_LT, 0);
}

tree::TerminalNode* MnemonicParser::Arith_operatorContext::ARITH_LT_EQ() {
  return getToken(MnemonicParser::ARITH_LT_EQ, 0);
}

tree::TerminalNode* MnemonicParser::Arith_operatorContext::ARITH_GT() {
  return getToken(MnemonicParser::ARITH_GT, 0);
}

tree::TerminalNode* MnemonicParser::Arith_operatorContext::ARITH_GT_EQ() {
  return getToken(MnemonicParser::ARITH_GT_EQ, 0);
}

tree::TerminalNode* MnemonicParser::Arith_operatorContext::ARITH_RSHIFT() {
  return getToken(MnemonicParser::ARITH_RSHIFT, 0);
}

tree::TerminalNode* MnemonicParser::Arith_operatorContext::ARITH_LSHIFT() {
  return getToken(MnemonicParser::ARITH_LSHIFT, 0);
}

tree::TerminalNode* MnemonicParser::Arith_operatorContext::ARITH_AND() {
  return getToken(MnemonicParser::ARITH_AND, 0);
}

tree::TerminalNode* MnemonicParser::Arith_operatorContext::ARITH_OR() {
  return getToken(MnemonicParser::ARITH_OR, 0);
}

tree::TerminalNode* MnemonicParser::Arith_operatorContext::ARITH_XOR() {
  return getToken(MnemonicParser::ARITH_XOR, 0);
}


size_t MnemonicParser::Arith_operatorContext::getRuleIndex() const {
  return MnemonicParser::RuleArith_operator;
}

void MnemonicParser::Arith_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArith_operator(this);
}

void MnemonicParser::Arith_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArith_operator(this);
}


antlrcpp::Any MnemonicParser::Arith_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitArith_operator(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::Arith_operatorContext* MnemonicParser::arith_operator() {
  Arith_operatorContext *_localctx = _tracker.createInstance<Arith_operatorContext>(_ctx, getState());
  enterRule(_localctx, 8, MnemonicParser::RuleArith_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MnemonicParser::MUL_OP_REF)
      | (1ULL << MnemonicParser::ARITH_PLUS)
      | (1ULL << MnemonicParser::ARITH_MINUS)
      | (1ULL << MnemonicParser::ARITH_DIV)
      | (1ULL << MnemonicParser::ARITH_EQ)
      | (1ULL << MnemonicParser::ARITH_LT)
      | (1ULL << MnemonicParser::ARITH_LT_EQ)
      | (1ULL << MnemonicParser::ARITH_GT)
      | (1ULL << MnemonicParser::ARITH_GT_EQ)
      | (1ULL << MnemonicParser::ARITH_RSHIFT)
      | (1ULL << MnemonicParser::ARITH_LSHIFT)
      | (1ULL << MnemonicParser::ARITH_OR)
      | (1ULL << MnemonicParser::ARITH_AND)
      | (1ULL << MnemonicParser::ARITH_XOR))) != 0))) {
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

//----------------- SuffixContext ------------------------------------------------------------------

MnemonicParser::SuffixContext::SuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MnemonicParser::SuffixContext::getRuleIndex() const {
  return MnemonicParser::RuleSuffix;
}

void MnemonicParser::SuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuffix(this);
}

void MnemonicParser::SuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuffix(this);
}


antlrcpp::Any MnemonicParser::SuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitSuffix(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::SuffixContext* MnemonicParser::suffix() {
  SuffixContext *_localctx = _tracker.createInstance<SuffixContext>(_ctx, getState());
  enterRule(_localctx, 10, MnemonicParser::RuleSuffix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperandContext ------------------------------------------------------------------

MnemonicParser::OperandContext::OperandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MnemonicParser::DeviceContext* MnemonicParser::OperandContext::device() {
  return getRuleContext<MnemonicParser::DeviceContext>(0);
}

MnemonicParser::ImmediateContext* MnemonicParser::OperandContext::immediate() {
  return getRuleContext<MnemonicParser::ImmediateContext>(0);
}

tree::TerminalNode* MnemonicParser::OperandContext::OPERAND_UNDEFINED() {
  return getToken(MnemonicParser::OPERAND_UNDEFINED, 0);
}


size_t MnemonicParser::OperandContext::getRuleIndex() const {
  return MnemonicParser::RuleOperand;
}

void MnemonicParser::OperandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperand(this);
}

void MnemonicParser::OperandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperand(this);
}


antlrcpp::Any MnemonicParser::OperandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitOperand(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::OperandContext* MnemonicParser::operand() {
  OperandContext *_localctx = _tracker.createInstance<OperandContext>(_ctx, getState());
  enterRule(_localctx, 12, MnemonicParser::RuleOperand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(104);
      device();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(105);
      immediate();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(106);
      match(MnemonicParser::OPERAND_UNDEFINED);
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

//----------------- DeviceContext ------------------------------------------------------------------

MnemonicParser::DeviceContext::DeviceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MnemonicParser::Device_old_indirectContext* MnemonicParser::DeviceContext::device_old_indirect() {
  return getRuleContext<MnemonicParser::Device_old_indirectContext>(0);
}

MnemonicParser::Device_zContext* MnemonicParser::DeviceContext::device_z() {
  return getRuleContext<MnemonicParser::Device_zContext>(0);
}

MnemonicParser::Device_normalContext* MnemonicParser::DeviceContext::device_normal() {
  return getRuleContext<MnemonicParser::Device_normalContext>(0);
}

MnemonicParser::Rly_or_int_immediateContext* MnemonicParser::DeviceContext::rly_or_int_immediate() {
  return getRuleContext<MnemonicParser::Rly_or_int_immediateContext>(0);
}


size_t MnemonicParser::DeviceContext::getRuleIndex() const {
  return MnemonicParser::RuleDevice;
}

void MnemonicParser::DeviceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDevice(this);
}

void MnemonicParser::DeviceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDevice(this);
}


antlrcpp::Any MnemonicParser::DeviceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitDevice(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::DeviceContext* MnemonicParser::device() {
  DeviceContext *_localctx = _tracker.createInstance<DeviceContext>(_ctx, getState());
  enterRule(_localctx, 14, MnemonicParser::RuleDevice);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(113);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MnemonicParser::OLD_INDIRECT: {
        enterOuterAlt(_localctx, 1);
        setState(109);
        device_old_indirect();
        break;
      }

      case MnemonicParser::INDEX_DEVICE: {
        enterOuterAlt(_localctx, 2);
        setState(110);
        device_z();
        break;
      }

      case MnemonicParser::SCOPE_LOCAL:
      case MnemonicParser::MUL_OP_REF:
      case MnemonicParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 3);
        setState(111);
        device_normal();
        break;
      }

      case MnemonicParser::IMM_DEC_NUMBER_RAW: {
        enterOuterAlt(_localctx, 4);
        setState(112);
        rly_or_int_immediate();
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

//----------------- Device_zContext ------------------------------------------------------------------

MnemonicParser::Device_zContext::Device_zContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MnemonicParser::Device_zContext::INDEX_DEVICE() {
  return getToken(MnemonicParser::INDEX_DEVICE, 0);
}


size_t MnemonicParser::Device_zContext::getRuleIndex() const {
  return MnemonicParser::RuleDevice_z;
}

void MnemonicParser::Device_zContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDevice_z(this);
}

void MnemonicParser::Device_zContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDevice_z(this);
}


antlrcpp::Any MnemonicParser::Device_zContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitDevice_z(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::Device_zContext* MnemonicParser::device_z() {
  Device_zContext *_localctx = _tracker.createInstance<Device_zContext>(_ctx, getState());
  enterRule(_localctx, 16, MnemonicParser::RuleDevice_z);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(MnemonicParser::INDEX_DEVICE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Device_old_indirectContext ------------------------------------------------------------------

MnemonicParser::Device_old_indirectContext::Device_old_indirectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MnemonicParser::Device_old_indirectContext::OLD_INDIRECT() {
  return getToken(MnemonicParser::OLD_INDIRECT, 0);
}


size_t MnemonicParser::Device_old_indirectContext::getRuleIndex() const {
  return MnemonicParser::RuleDevice_old_indirect;
}

void MnemonicParser::Device_old_indirectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDevice_old_indirect(this);
}

void MnemonicParser::Device_old_indirectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDevice_old_indirect(this);
}


antlrcpp::Any MnemonicParser::Device_old_indirectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitDevice_old_indirect(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::Device_old_indirectContext* MnemonicParser::device_old_indirect() {
  Device_old_indirectContext *_localctx = _tracker.createInstance<Device_old_indirectContext>(_ctx, getState());
  enterRule(_localctx, 18, MnemonicParser::RuleDevice_old_indirect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(MnemonicParser::OLD_INDIRECT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Device_normalContext ------------------------------------------------------------------

MnemonicParser::Device_normalContext::Device_normalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MnemonicParser::Device_normalContext::getRuleIndex() const {
  return MnemonicParser::RuleDevice_normal;
}

void MnemonicParser::Device_normalContext::copyFrom(Device_normalContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Dev_nml_singleContext ------------------------------------------------------------------

MnemonicParser::Device_contentContext* MnemonicParser::Dev_nml_singleContext::device_content() {
  return getRuleContext<MnemonicParser::Device_contentContext>(0);
}

MnemonicParser::Dev_nml_singleContext::Dev_nml_singleContext(Device_normalContext *ctx) { copyFrom(ctx); }

void MnemonicParser::Dev_nml_singleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDev_nml_single(this);
}
void MnemonicParser::Dev_nml_singleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDev_nml_single(this);
}

antlrcpp::Any MnemonicParser::Dev_nml_singleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitDev_nml_single(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Dev_with_wbitContext ------------------------------------------------------------------

MnemonicParser::Device_wbitContext* MnemonicParser::Dev_with_wbitContext::device_wbit() {
  return getRuleContext<MnemonicParser::Device_wbitContext>(0);
}

MnemonicParser::Dev_with_wbitContext::Dev_with_wbitContext(Device_normalContext *ctx) { copyFrom(ctx); }

void MnemonicParser::Dev_with_wbitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDev_with_wbit(this);
}
void MnemonicParser::Dev_with_wbitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDev_with_wbit(this);
}

antlrcpp::Any MnemonicParser::Dev_with_wbitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitDev_with_wbit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Dev_with_idxContext ------------------------------------------------------------------

MnemonicParser::Device_contentContext* MnemonicParser::Dev_with_idxContext::device_content() {
  return getRuleContext<MnemonicParser::Device_contentContext>(0);
}

tree::TerminalNode* MnemonicParser::Dev_with_idxContext::ROPERATOR_INDEX() {
  return getToken(MnemonicParser::ROPERATOR_INDEX, 0);
}

MnemonicParser::Index_valueContext* MnemonicParser::Dev_with_idxContext::index_value() {
  return getRuleContext<MnemonicParser::Index_valueContext>(0);
}

MnemonicParser::Dev_with_idxContext::Dev_with_idxContext(Device_normalContext *ctx) { copyFrom(ctx); }

void MnemonicParser::Dev_with_idxContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDev_with_idx(this);
}
void MnemonicParser::Dev_with_idxContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDev_with_idx(this);
}

antlrcpp::Any MnemonicParser::Dev_with_idxContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitDev_with_idx(this);
  else
    return visitor->visitChildren(this);
}
MnemonicParser::Device_normalContext* MnemonicParser::device_normal() {
  Device_normalContext *_localctx = _tracker.createInstance<Device_normalContext>(_ctx, getState());
  enterRule(_localctx, 20, MnemonicParser::RuleDevice_normal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(125);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Device_normalContext *>(_tracker.createInstance<MnemonicParser::Dev_nml_singleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(119);
      device_content();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Device_normalContext *>(_tracker.createInstance<MnemonicParser::Dev_with_idxContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(120);
      device_content();
      setState(121);
      match(MnemonicParser::ROPERATOR_INDEX);
      setState(122);
      index_value();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Device_normalContext *>(_tracker.createInstance<MnemonicParser::Dev_with_wbitContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(124);
      device_wbit();
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

//----------------- Device_wbitContext ------------------------------------------------------------------

MnemonicParser::Device_wbitContext::Device_wbitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MnemonicParser::Device_rawContext* MnemonicParser::Device_wbitContext::device_raw() {
  return getRuleContext<MnemonicParser::Device_rawContext>(0);
}

MnemonicParser::BitposContext* MnemonicParser::Device_wbitContext::bitpos() {
  return getRuleContext<MnemonicParser::BitposContext>(0);
}


size_t MnemonicParser::Device_wbitContext::getRuleIndex() const {
  return MnemonicParser::RuleDevice_wbit;
}

void MnemonicParser::Device_wbitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDevice_wbit(this);
}

void MnemonicParser::Device_wbitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDevice_wbit(this);
}


antlrcpp::Any MnemonicParser::Device_wbitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitDevice_wbit(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::Device_wbitContext* MnemonicParser::device_wbit() {
  Device_wbitContext *_localctx = _tracker.createInstance<Device_wbitContext>(_ctx, getState());
  enterRule(_localctx, 22, MnemonicParser::RuleDevice_wbit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    device_raw();
    setState(128);
    bitpos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Device_contentContext ------------------------------------------------------------------

MnemonicParser::Device_contentContext::Device_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MnemonicParser::Device_rawContext* MnemonicParser::Device_contentContext::device_raw() {
  return getRuleContext<MnemonicParser::Device_rawContext>(0);
}

MnemonicParser::Reference_operatorContext* MnemonicParser::Device_contentContext::reference_operator() {
  return getRuleContext<MnemonicParser::Reference_operatorContext>(0);
}


size_t MnemonicParser::Device_contentContext::getRuleIndex() const {
  return MnemonicParser::RuleDevice_content;
}

void MnemonicParser::Device_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDevice_content(this);
}

void MnemonicParser::Device_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDevice_content(this);
}


antlrcpp::Any MnemonicParser::Device_contentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitDevice_content(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::Device_contentContext* MnemonicParser::device_content() {
  Device_contentContext *_localctx = _tracker.createInstance<Device_contentContext>(_ctx, getState());
  enterRule(_localctx, 24, MnemonicParser::RuleDevice_content);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(134);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MnemonicParser::SCOPE_LOCAL:
      case MnemonicParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(130);
        device_raw();
        break;
      }

      case MnemonicParser::MUL_OP_REF: {
        enterOuterAlt(_localctx, 2);
        setState(131);
        reference_operator();
        setState(132);
        device_raw();
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

//----------------- Device_rawContext ------------------------------------------------------------------

MnemonicParser::Device_rawContext::Device_rawContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MnemonicParser::Device_rawContext::IDENTIFIER() {
  return getToken(MnemonicParser::IDENTIFIER, 0);
}

MnemonicParser::ScopeContext* MnemonicParser::Device_rawContext::scope() {
  return getRuleContext<MnemonicParser::ScopeContext>(0);
}


size_t MnemonicParser::Device_rawContext::getRuleIndex() const {
  return MnemonicParser::RuleDevice_raw;
}

void MnemonicParser::Device_rawContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDevice_raw(this);
}

void MnemonicParser::Device_rawContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDevice_raw(this);
}


antlrcpp::Any MnemonicParser::Device_rawContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitDevice_raw(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::Device_rawContext* MnemonicParser::device_raw() {
  Device_rawContext *_localctx = _tracker.createInstance<Device_rawContext>(_ctx, getState());
  enterRule(_localctx, 26, MnemonicParser::RuleDevice_raw);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MnemonicParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(136);
        match(MnemonicParser::IDENTIFIER);
        break;
      }

      case MnemonicParser::SCOPE_LOCAL: {
        enterOuterAlt(_localctx, 2);
        setState(137);
        scope();
        setState(138);
        match(MnemonicParser::IDENTIFIER);
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

//----------------- Index_valueContext ------------------------------------------------------------------

MnemonicParser::Index_valueContext::Index_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MnemonicParser::Index_valueContext::getRuleIndex() const {
  return MnemonicParser::RuleIndex_value;
}

void MnemonicParser::Index_valueContext::copyFrom(Index_valueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Index_value_device_zContext ------------------------------------------------------------------

MnemonicParser::Device_zContext* MnemonicParser::Index_value_device_zContext::device_z() {
  return getRuleContext<MnemonicParser::Device_zContext>(0);
}

MnemonicParser::Index_value_device_zContext::Index_value_device_zContext(Index_valueContext *ctx) { copyFrom(ctx); }

void MnemonicParser::Index_value_device_zContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_value_device_z(this);
}
void MnemonicParser::Index_value_device_zContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_value_device_z(this);
}

antlrcpp::Any MnemonicParser::Index_value_device_zContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitIndex_value_device_z(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Index_value_immediateContext ------------------------------------------------------------------

MnemonicParser::Index_immContext* MnemonicParser::Index_value_immediateContext::index_imm() {
  return getRuleContext<MnemonicParser::Index_immContext>(0);
}

MnemonicParser::Index_value_immediateContext::Index_value_immediateContext(Index_valueContext *ctx) { copyFrom(ctx); }

void MnemonicParser::Index_value_immediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_value_immediate(this);
}
void MnemonicParser::Index_value_immediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_value_immediate(this);
}

antlrcpp::Any MnemonicParser::Index_value_immediateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitIndex_value_immediate(this);
  else
    return visitor->visitChildren(this);
}
MnemonicParser::Index_valueContext* MnemonicParser::index_value() {
  Index_valueContext *_localctx = _tracker.createInstance<Index_valueContext>(_ctx, getState());
  enterRule(_localctx, 28, MnemonicParser::RuleIndex_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(144);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MnemonicParser::IMM_DEC_NUMBER_SHARP:
      case MnemonicParser::IMM_DEC_NUMBER_SIGN:
      case MnemonicParser::IMM_DEC_NUMBER_RAW: {
        _localctx = dynamic_cast<Index_valueContext *>(_tracker.createInstance<MnemonicParser::Index_value_immediateContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(142);
        index_imm();
        break;
      }

      case MnemonicParser::INDEX_DEVICE: {
        _localctx = dynamic_cast<Index_valueContext *>(_tracker.createInstance<MnemonicParser::Index_value_device_zContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(143);
        device_z();
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

//----------------- BitposContext ------------------------------------------------------------------

MnemonicParser::BitposContext::BitposContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MnemonicParser::BitposContext::DOT_SEGMENT() {
  return getToken(MnemonicParser::DOT_SEGMENT, 0);
}


size_t MnemonicParser::BitposContext::getRuleIndex() const {
  return MnemonicParser::RuleBitpos;
}

void MnemonicParser::BitposContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitpos(this);
}

void MnemonicParser::BitposContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitpos(this);
}


antlrcpp::Any MnemonicParser::BitposContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitBitpos(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::BitposContext* MnemonicParser::bitpos() {
  BitposContext *_localctx = _tracker.createInstance<BitposContext>(_ctx, getState());
  enterRule(_localctx, 30, MnemonicParser::RuleBitpos);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(MnemonicParser::DOT_SEGMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeContext ------------------------------------------------------------------

MnemonicParser::ScopeContext::ScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MnemonicParser::ScopeContext::SCOPE_LOCAL() {
  return getToken(MnemonicParser::SCOPE_LOCAL, 0);
}


size_t MnemonicParser::ScopeContext::getRuleIndex() const {
  return MnemonicParser::RuleScope;
}

void MnemonicParser::ScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScope(this);
}

void MnemonicParser::ScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScope(this);
}


antlrcpp::Any MnemonicParser::ScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitScope(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::ScopeContext* MnemonicParser::scope() {
  ScopeContext *_localctx = _tracker.createInstance<ScopeContext>(_ctx, getState());
  enterRule(_localctx, 32, MnemonicParser::RuleScope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(MnemonicParser::SCOPE_LOCAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Reference_operatorContext ------------------------------------------------------------------

MnemonicParser::Reference_operatorContext::Reference_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MnemonicParser::Reference_operatorContext::MUL_OP_REF() {
  return getToken(MnemonicParser::MUL_OP_REF, 0);
}


size_t MnemonicParser::Reference_operatorContext::getRuleIndex() const {
  return MnemonicParser::RuleReference_operator;
}

void MnemonicParser::Reference_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReference_operator(this);
}

void MnemonicParser::Reference_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReference_operator(this);
}


antlrcpp::Any MnemonicParser::Reference_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitReference_operator(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::Reference_operatorContext* MnemonicParser::reference_operator() {
  Reference_operatorContext *_localctx = _tracker.createInstance<Reference_operatorContext>(_ctx, getState());
  enterRule(_localctx, 34, MnemonicParser::RuleReference_operator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(MnemonicParser::MUL_OP_REF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImmediateContext ------------------------------------------------------------------

MnemonicParser::ImmediateContext::ImmediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MnemonicParser::Int_immediateContext* MnemonicParser::ImmediateContext::int_immediate() {
  return getRuleContext<MnemonicParser::Int_immediateContext>(0);
}

MnemonicParser::Rly_or_int_immediateContext* MnemonicParser::ImmediateContext::rly_or_int_immediate() {
  return getRuleContext<MnemonicParser::Rly_or_int_immediateContext>(0);
}

MnemonicParser::Fp_immediateContext* MnemonicParser::ImmediateContext::fp_immediate() {
  return getRuleContext<MnemonicParser::Fp_immediateContext>(0);
}

MnemonicParser::Str_immediateContext* MnemonicParser::ImmediateContext::str_immediate() {
  return getRuleContext<MnemonicParser::Str_immediateContext>(0);
}


size_t MnemonicParser::ImmediateContext::getRuleIndex() const {
  return MnemonicParser::RuleImmediate;
}

void MnemonicParser::ImmediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate(this);
}

void MnemonicParser::ImmediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate(this);
}


antlrcpp::Any MnemonicParser::ImmediateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitImmediate(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::ImmediateContext* MnemonicParser::immediate() {
  ImmediateContext *_localctx = _tracker.createInstance<ImmediateContext>(_ctx, getState());
  enterRule(_localctx, 36, MnemonicParser::RuleImmediate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(156);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(152);
      int_immediate();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(153);
      rly_or_int_immediate();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(154);
      fp_immediate();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(155);
      str_immediate();
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

//----------------- Int_immediateContext ------------------------------------------------------------------

MnemonicParser::Int_immediateContext::Int_immediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MnemonicParser::Int_immediateContext::getRuleIndex() const {
  return MnemonicParser::RuleInt_immediate;
}

void MnemonicParser::Int_immediateContext::copyFrom(Int_immediateContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Int_immediate_hexContext ------------------------------------------------------------------

tree::TerminalNode* MnemonicParser::Int_immediate_hexContext::IMM_HEX_NUMBER() {
  return getToken(MnemonicParser::IMM_HEX_NUMBER, 0);
}

MnemonicParser::Int_immediate_hexContext::Int_immediate_hexContext(Int_immediateContext *ctx) { copyFrom(ctx); }

void MnemonicParser::Int_immediate_hexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt_immediate_hex(this);
}
void MnemonicParser::Int_immediate_hexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt_immediate_hex(this);
}

antlrcpp::Any MnemonicParser::Int_immediate_hexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitInt_immediate_hex(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Int_immediate_decimalContext ------------------------------------------------------------------

MnemonicParser::Decimal_immediateContext* MnemonicParser::Int_immediate_decimalContext::decimal_immediate() {
  return getRuleContext<MnemonicParser::Decimal_immediateContext>(0);
}

MnemonicParser::Int_immediate_decimalContext::Int_immediate_decimalContext(Int_immediateContext *ctx) { copyFrom(ctx); }

void MnemonicParser::Int_immediate_decimalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt_immediate_decimal(this);
}
void MnemonicParser::Int_immediate_decimalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt_immediate_decimal(this);
}

antlrcpp::Any MnemonicParser::Int_immediate_decimalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitInt_immediate_decimal(this);
  else
    return visitor->visitChildren(this);
}
MnemonicParser::Int_immediateContext* MnemonicParser::int_immediate() {
  Int_immediateContext *_localctx = _tracker.createInstance<Int_immediateContext>(_ctx, getState());
  enterRule(_localctx, 38, MnemonicParser::RuleInt_immediate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(160);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MnemonicParser::IMM_DEC_NUMBER_K:
      case MnemonicParser::IMM_DEC_NUMBER_SHARP:
      case MnemonicParser::IMM_DEC_NUMBER_SIGN:
      case MnemonicParser::IMM_DEC_NUMBER_RAW: {
        _localctx = dynamic_cast<Int_immediateContext *>(_tracker.createInstance<MnemonicParser::Int_immediate_decimalContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(158);
        decimal_immediate();
        break;
      }

      case MnemonicParser::IMM_HEX_NUMBER: {
        _localctx = dynamic_cast<Int_immediateContext *>(_tracker.createInstance<MnemonicParser::Int_immediate_hexContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(159);
        match(MnemonicParser::IMM_HEX_NUMBER);
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

//----------------- Fp_immediateContext ------------------------------------------------------------------

MnemonicParser::Fp_immediateContext::Fp_immediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MnemonicParser::Fp_immediateContext::FP_DECIMAL() {
  return getToken(MnemonicParser::FP_DECIMAL, 0);
}

tree::TerminalNode* MnemonicParser::Fp_immediateContext::FP_EXPONENTIAL() {
  return getToken(MnemonicParser::FP_EXPONENTIAL, 0);
}

tree::TerminalNode* MnemonicParser::Fp_immediateContext::DOT_SEGMENT() {
  return getToken(MnemonicParser::DOT_SEGMENT, 0);
}


size_t MnemonicParser::Fp_immediateContext::getRuleIndex() const {
  return MnemonicParser::RuleFp_immediate;
}

void MnemonicParser::Fp_immediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFp_immediate(this);
}

void MnemonicParser::Fp_immediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFp_immediate(this);
}


antlrcpp::Any MnemonicParser::Fp_immediateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitFp_immediate(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::Fp_immediateContext* MnemonicParser::fp_immediate() {
  Fp_immediateContext *_localctx = _tracker.createInstance<Fp_immediateContext>(_ctx, getState());
  enterRule(_localctx, 40, MnemonicParser::RuleFp_immediate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MnemonicParser::DOT_SEGMENT)
      | (1ULL << MnemonicParser::FP_EXPONENTIAL)
      | (1ULL << MnemonicParser::FP_DECIMAL))) != 0))) {
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

//----------------- Str_immediateContext ------------------------------------------------------------------

MnemonicParser::Str_immediateContext::Str_immediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MnemonicParser::Str_immediateContext::STRING_IMMEDIATE() {
  return getToken(MnemonicParser::STRING_IMMEDIATE, 0);
}


size_t MnemonicParser::Str_immediateContext::getRuleIndex() const {
  return MnemonicParser::RuleStr_immediate;
}

void MnemonicParser::Str_immediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStr_immediate(this);
}

void MnemonicParser::Str_immediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStr_immediate(this);
}


antlrcpp::Any MnemonicParser::Str_immediateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitStr_immediate(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::Str_immediateContext* MnemonicParser::str_immediate() {
  Str_immediateContext *_localctx = _tracker.createInstance<Str_immediateContext>(_ctx, getState());
  enterRule(_localctx, 42, MnemonicParser::RuleStr_immediate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    match(MnemonicParser::STRING_IMMEDIATE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decimal_immediateContext ------------------------------------------------------------------

MnemonicParser::Decimal_immediateContext::Decimal_immediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MnemonicParser::Decimal_immediateContext::IMM_DEC_NUMBER_SHARP() {
  return getToken(MnemonicParser::IMM_DEC_NUMBER_SHARP, 0);
}

tree::TerminalNode* MnemonicParser::Decimal_immediateContext::IMM_DEC_NUMBER_K() {
  return getToken(MnemonicParser::IMM_DEC_NUMBER_K, 0);
}

tree::TerminalNode* MnemonicParser::Decimal_immediateContext::IMM_DEC_NUMBER_SIGN() {
  return getToken(MnemonicParser::IMM_DEC_NUMBER_SIGN, 0);
}

tree::TerminalNode* MnemonicParser::Decimal_immediateContext::IMM_DEC_NUMBER_RAW() {
  return getToken(MnemonicParser::IMM_DEC_NUMBER_RAW, 0);
}


size_t MnemonicParser::Decimal_immediateContext::getRuleIndex() const {
  return MnemonicParser::RuleDecimal_immediate;
}

void MnemonicParser::Decimal_immediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimal_immediate(this);
}

void MnemonicParser::Decimal_immediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimal_immediate(this);
}


antlrcpp::Any MnemonicParser::Decimal_immediateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitDecimal_immediate(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::Decimal_immediateContext* MnemonicParser::decimal_immediate() {
  Decimal_immediateContext *_localctx = _tracker.createInstance<Decimal_immediateContext>(_ctx, getState());
  enterRule(_localctx, 44, MnemonicParser::RuleDecimal_immediate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MnemonicParser::IMM_DEC_NUMBER_K)
      | (1ULL << MnemonicParser::IMM_DEC_NUMBER_SHARP)
      | (1ULL << MnemonicParser::IMM_DEC_NUMBER_SIGN)
      | (1ULL << MnemonicParser::IMM_DEC_NUMBER_RAW))) != 0))) {
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

//----------------- Rly_or_int_immediateContext ------------------------------------------------------------------

MnemonicParser::Rly_or_int_immediateContext::Rly_or_int_immediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MnemonicParser::Rly_or_int_immediateContext::IMM_DEC_NUMBER_RAW() {
  return getToken(MnemonicParser::IMM_DEC_NUMBER_RAW, 0);
}

tree::TerminalNode* MnemonicParser::Rly_or_int_immediateContext::ROPERATOR_INDEX() {
  return getToken(MnemonicParser::ROPERATOR_INDEX, 0);
}

MnemonicParser::Index_immContext* MnemonicParser::Rly_or_int_immediateContext::index_imm() {
  return getRuleContext<MnemonicParser::Index_immContext>(0);
}


size_t MnemonicParser::Rly_or_int_immediateContext::getRuleIndex() const {
  return MnemonicParser::RuleRly_or_int_immediate;
}

void MnemonicParser::Rly_or_int_immediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRly_or_int_immediate(this);
}

void MnemonicParser::Rly_or_int_immediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRly_or_int_immediate(this);
}


antlrcpp::Any MnemonicParser::Rly_or_int_immediateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitRly_or_int_immediate(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::Rly_or_int_immediateContext* MnemonicParser::rly_or_int_immediate() {
  Rly_or_int_immediateContext *_localctx = _tracker.createInstance<Rly_or_int_immediateContext>(_ctx, getState());
  enterRule(_localctx, 46, MnemonicParser::RuleRly_or_int_immediate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(168);
      match(MnemonicParser::IMM_DEC_NUMBER_RAW);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(169);
      match(MnemonicParser::IMM_DEC_NUMBER_RAW);
      setState(170);
      match(MnemonicParser::ROPERATOR_INDEX);
      setState(171);
      index_imm();
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

//----------------- Index_immContext ------------------------------------------------------------------

MnemonicParser::Index_immContext::Index_immContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MnemonicParser::Index_immContext::IMM_DEC_NUMBER_RAW() {
  return getToken(MnemonicParser::IMM_DEC_NUMBER_RAW, 0);
}

tree::TerminalNode* MnemonicParser::Index_immContext::IMM_DEC_NUMBER_SIGN() {
  return getToken(MnemonicParser::IMM_DEC_NUMBER_SIGN, 0);
}

tree::TerminalNode* MnemonicParser::Index_immContext::IMM_DEC_NUMBER_SHARP() {
  return getToken(MnemonicParser::IMM_DEC_NUMBER_SHARP, 0);
}


size_t MnemonicParser::Index_immContext::getRuleIndex() const {
  return MnemonicParser::RuleIndex_imm;
}

void MnemonicParser::Index_immContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_imm(this);
}

void MnemonicParser::Index_immContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MnemonicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_imm(this);
}


antlrcpp::Any MnemonicParser::Index_immContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MnemonicVisitor*>(visitor))
    return parserVisitor->visitIndex_imm(this);
  else
    return visitor->visitChildren(this);
}

MnemonicParser::Index_immContext* MnemonicParser::index_imm() {
  Index_immContext *_localctx = _tracker.createInstance<Index_immContext>(_ctx, getState());
  enterRule(_localctx, 48, MnemonicParser::RuleIndex_imm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MnemonicParser::IMM_DEC_NUMBER_SHARP)
      | (1ULL << MnemonicParser::IMM_DEC_NUMBER_SIGN)
      | (1ULL << MnemonicParser::IMM_DEC_NUMBER_RAW))) != 0))) {
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

// Static vars and initialization.
std::vector<dfa::DFA> MnemonicParser::_decisionToDFA;
atn::PredictionContextCache MnemonicParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MnemonicParser::_atn;
std::vector<uint16_t> MnemonicParser::_serializedATN;

std::vector<std::string> MnemonicParser::_ruleNames = {
  "input", "mnemonic", "separator", "instruction", "arith_operator", "suffix", 
  "operand", "device", "device_z", "device_old_indirect", "device_normal", 
  "device_wbit", "device_content", "device_raw", "index_value", "bitpos", 
  "scope", "reference_operator", "immediate", "int_immediate", "fp_immediate", 
  "str_immediate", "decimal_immediate", "rly_or_int_immediate", "index_imm"
};

std::vector<std::string> MnemonicParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "'<'", "'<='", "'>'", "'>='", 
  "'>>'", "'<<'", "", "", "", "", "", "", "", "'???'"
};

std::vector<std::string> MnemonicParser::_symbolicNames = {
  "", "DOT_SEGMENT", "DOT_SUFFIX", "ROPERATOR_INDEX", "SCOPE_LOCAL", "MUL_OP_REF", 
  "ARITH_PLUS", "ARITH_MINUS", "ARITH_DIV", "ARITH_EQ", "ARITH_LT", "ARITH_LT_EQ", 
  "ARITH_GT", "ARITH_GT_EQ", "ARITH_RSHIFT", "ARITH_LSHIFT", "ARITH_OR", 
  "ARITH_AND", "ARITH_XOR", "PREFIX_OLD_INDIRECT", "DEV_TM", "NEWLINE", 
  "SEPARATOR", "OPERAND_UNDEFINED", "STRING_IMMEDIATE", "IMM_DEC_NUMBER_K", 
  "IMM_DEC_NUMBER_SHARP", "IMM_HEX_NUMBER", "IMM_DEC_NUMBER_SIGN", "IMM_DEC_NUMBER_RAW", 
  "FP_EXPONENTIAL", "FP_DECIMAL", "INDEX_DEVICE", "OLD_INDIRECT", "IDENTIFIER"
};

dfa::Vocabulary MnemonicParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MnemonicParser::_tokenNames;

MnemonicParser::Initializer::Initializer() {
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
    0x3, 0x24, 0xb3, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x3, 0x2, 0x5, 0x2, 0x36, 
    0xa, 0x2, 0x3, 0x2, 0x7, 0x2, 0x39, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x3c, 
    0xb, 0x2, 0x3, 0x2, 0x5, 0x2, 0x3f, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x7, 0x3, 0x44, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x47, 0xb, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x4d, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x50, 0xb, 0x3, 0x3, 0x3, 0x7, 0x3, 0x53, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x56, 0xb, 0x3, 0x3, 0x3, 0x5, 0x3, 0x59, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x63, 0xa, 0x5, 0x5, 0x5, 0x65, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x6e, 0xa, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x74, 0xa, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x80, 0xa, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x89, 
    0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x8f, 0xa, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x93, 0xa, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x9f, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x5, 0x15, 0xa3, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 
    0x19, 0xaf, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x2, 0x2, 0x1b, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
    0x2, 0x6, 0x3, 0x2, 0x7, 0x14, 0x4, 0x2, 0x3, 0x3, 0x20, 0x21, 0x4, 
    0x2, 0x1b, 0x1c, 0x1e, 0x1f, 0x4, 0x2, 0x1c, 0x1c, 0x1e, 0x1f, 0x2, 
    0xb2, 0x2, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x64, 0x3, 0x2, 0x2, 0x2, 0xa, 0x66, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x68, 0x3, 0x2, 0x2, 0x2, 0xe, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x73, 0x3, 0x2, 0x2, 0x2, 0x12, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x77, 0x3, 0x2, 0x2, 0x2, 0x16, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x81, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x8e, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x92, 0x3, 0x2, 0x2, 0x2, 0x20, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x96, 0x3, 0x2, 0x2, 0x2, 0x24, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x28, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xa6, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x30, 0xae, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0xb0, 0x3, 0x2, 0x2, 0x2, 0x34, 0x36, 0x5, 0x4, 0x3, 0x2, 0x35, 
    0x34, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 
    0x3, 0x2, 0x2, 0x2, 0x37, 0x39, 0x7, 0x17, 0x2, 0x2, 0x38, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3e, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3f, 0x5, 0x4, 0x3, 0x2, 
    0x3e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x2, 0x2, 0x3, 0x41, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x5, 0x6, 0x4, 0x2, 0x43, 0x42, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x47, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 0x48, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4e, 0x5, 0x8, 0x5, 0x2, 
    0x49, 0x4a, 0x5, 0x6, 0x4, 0x2, 0x4a, 0x4b, 0x5, 0xe, 0x8, 0x2, 0x4b, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x54, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x53, 0x5, 0x6, 0x4, 0x2, 0x52, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x53, 0x56, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 0x58, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x57, 0x59, 0x7, 0x17, 0x2, 0x2, 0x58, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x18, 0x2, 0x2, 0x5b, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x65, 0x7, 0x24, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x24, 0x2, 
    0x2, 0x5e, 0x65, 0x7, 0x4, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x24, 0x2, 0x2, 
    0x60, 0x62, 0x5, 0xa, 0x6, 0x2, 0x61, 0x63, 0x7, 0x4, 0x2, 0x2, 0x62, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x64, 0x5d, 0x3, 
    0x2, 0x2, 0x2, 0x64, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x65, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x67, 0x9, 0x2, 0x2, 0x2, 0x67, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x6a, 0x6e, 0x5, 0x10, 0x9, 0x2, 0x6b, 0x6e, 0x5, 0x26, 0x14, 0x2, 0x6c, 
    0x6e, 0x7, 0x19, 0x2, 0x2, 0x6d, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x6f, 0x74, 0x5, 0x14, 0xb, 0x2, 0x70, 0x74, 0x5, 0x12, 
    0xa, 0x2, 0x71, 0x74, 0x5, 0x16, 0xc, 0x2, 0x72, 0x74, 0x5, 0x30, 0x19, 
    0x2, 0x73, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x73, 0x70, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x7, 0x22, 0x2, 0x2, 0x76, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 0x23, 0x2, 0x2, 0x78, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x80, 0x5, 0x1a, 0xe, 0x2, 0x7a, 0x7b, 0x5, 0x1a, 
    0xe, 0x2, 0x7b, 0x7c, 0x7, 0x5, 0x2, 0x2, 0x7c, 0x7d, 0x5, 0x1e, 0x10, 
    0x2, 0x7d, 0x80, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x80, 0x5, 0x18, 0xd, 0x2, 
    0x7f, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x17, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 
    0x5, 0x1c, 0xf, 0x2, 0x82, 0x83, 0x5, 0x20, 0x11, 0x2, 0x83, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x89, 0x5, 0x1c, 0xf, 0x2, 0x85, 0x86, 0x5, 0x24, 
    0x13, 0x2, 0x86, 0x87, 0x5, 0x1c, 0xf, 0x2, 0x87, 0x89, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x84, 0x3, 0x2, 0x2, 0x2, 0x88, 0x85, 0x3, 0x2, 0x2, 0x2, 
    0x89, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8f, 0x7, 0x24, 0x2, 0x2, 0x8b, 
    0x8c, 0x5, 0x22, 0x12, 0x2, 0x8c, 0x8d, 0x7, 0x24, 0x2, 0x2, 0x8d, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0x8f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x90, 0x93, 0x5, 0x32, 
    0x1a, 0x2, 0x91, 0x93, 0x5, 0x12, 0xa, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0x95, 0x7, 0x3, 0x2, 0x2, 0x95, 0x21, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x97, 0x7, 0x6, 0x2, 0x2, 0x97, 0x23, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 
    0x7, 0x7, 0x2, 0x2, 0x99, 0x25, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9f, 0x5, 
    0x28, 0x15, 0x2, 0x9b, 0x9f, 0x5, 0x30, 0x19, 0x2, 0x9c, 0x9f, 0x5, 
    0x2a, 0x16, 0x2, 0x9d, 0x9f, 0x5, 0x2c, 0x17, 0x2, 0x9e, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0x9e, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0xa0, 0xa3, 0x5, 0x2e, 0x18, 0x2, 0xa1, 0xa3, 0x7, 0x1d, 0x2, 0x2, 
    0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x9, 0x3, 0x2, 0x2, 0xa5, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x1a, 0x2, 0x2, 0xa7, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0xa8, 0xa9, 0x9, 0x4, 0x2, 0x2, 0xa9, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0xaa, 0xaf, 0x7, 0x1f, 0x2, 0x2, 0xab, 0xac, 0x7, 0x1f, 0x2, 
    0x2, 0xac, 0xad, 0x7, 0x5, 0x2, 0x2, 0xad, 0xaf, 0x5, 0x32, 0x1a, 0x2, 
    0xae, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xae, 0xab, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x9, 0x5, 0x2, 0x2, 0xb1, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x35, 0x3a, 0x3e, 0x45, 0x4e, 0x54, 0x58, 
    0x62, 0x64, 0x6d, 0x73, 0x7f, 0x88, 0x8e, 0x92, 0x9e, 0xa2, 0xae, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MnemonicParser::Initializer MnemonicParser::_init;

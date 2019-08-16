
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment1/Grammer\calc.g4 by ANTLR 4.7.2


#include "calcLexer.h"


using namespace antlr4;


calcLexer::calcLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

calcLexer::~calcLexer() {
  delete _interpreter;
}

std::string calcLexer::getGrammarFileName() const {
  return "calc.g4";
}

const std::vector<std::string>& calcLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& calcLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& calcLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& calcLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& calcLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> calcLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& calcLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> calcLexer::_decisionToDFA;
atn::PredictionContextCache calcLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN calcLexer::_atn;
std::vector<uint16_t> calcLexer::_serializedATN;

std::vector<std::string> calcLexer::_ruleNames = {
  u8"DISITS", u8"PLUS"
};

std::vector<std::string> calcLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> calcLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> calcLexer::_literalNames = {
  "", "", u8"'+'"
};

std::vector<std::string> calcLexer::_symbolicNames = {
  "", u8"DISITS", u8"PLUS"
};

dfa::Vocabulary calcLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> calcLexer::_tokenNames;

calcLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
    0x2, 0x4, 0xe, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 
    0x2, 0x6, 0x2, 0x9, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0xa, 0x3, 0x3, 0x3, 
    0x3, 0x2, 0x2, 0x4, 0x3, 0x3, 0x5, 0x4, 0x3, 0x2, 0x3, 0x3, 0x2, 0x32, 
    0x3b, 0x2, 0xe, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x3, 0x8, 0x3, 0x2, 0x2, 0x2, 0x5, 0xc, 0x3, 0x2, 0x2, 0x2, 0x7, 
    0x9, 0x9, 0x2, 0x2, 0x2, 0x8, 0x7, 0x3, 0x2, 0x2, 0x2, 0x9, 0xa, 0x3, 
    0x2, 0x2, 0x2, 0xa, 0x8, 0x3, 0x2, 0x2, 0x2, 0xa, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0xb, 0x4, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x7, 0x2d, 0x2, 0x2, 0xd, 
    0x6, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2, 0xa, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

calcLexer::Initializer calcLexer::_init;

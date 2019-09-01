
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment2/Grammer\Mnemonic.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  MnemonicLexer : public antlr4::Lexer {
public:
  enum {
    DOT_SEGMENT = 1, DOT_SUFFIX = 2, ROPERATOR_INDEX = 3, SCOPE_LOCAL = 4, 
    MUL_OP_REF = 5, ARITH_PLUS = 6, ARITH_MINUS = 7, ARITH_DIV = 8, ARITH_EQ = 9, 
    ARITH_LT = 10, ARITH_GT = 11, ARITH_RSHIFT = 12, ARITH_LSHIFT = 13, 
    ARITH_OR = 14, ARITH_AND = 15, ARITH_XOR = 16, PREFIX_OLD_INDIRECT = 17, 
    DEV_TM = 18, NEWLINE = 19, SEPARATOR = 20, OPERAND_UNDEFINED = 21, STRING_IMMEDIATE = 22, 
    IMM_DEC_NUMBER_K = 23, IMM_DEC_NUMBER_SHARP = 24, IMM_HEX_NUMBER = 25, 
    IMM_DEC_NUMBER_SIGN = 26, IMM_DEC_NUMBER_RAW = 27, FP_EXPONENTIAL = 28, 
    FP_DECIMAL = 29, INDEX_DEVICE = 30, OLD_INDIRECT = 31, IDENTIFIER = 32
  };

  MnemonicLexer(antlr4::CharStream *input);
  ~MnemonicLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};


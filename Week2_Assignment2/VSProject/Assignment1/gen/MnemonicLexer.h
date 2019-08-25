
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment2/Grammer\Mnemonic.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  MnemonicLexer : public antlr4::Lexer {
public:
  enum {
    DOT_SEGMENT = 1, DOT_SUFFIX = 2, ROPERATOR_INDEX = 3, SCOPE_LOCAL = 4, 
    MUL_OP_REF = 5, ARITH_PLUS = 6, ARITH_MINUS = 7, ARITH_DIV = 8, ARITH_EQ = 9, 
    ARITH_LT = 10, ARITH_LT_EQ = 11, ARITH_GT = 12, ARITH_GT_EQ = 13, ARITH_RSHIFT = 14, 
    ARITH_LSHIFT = 15, ARITH_OR = 16, ARITH_AND = 17, ARITH_XOR = 18, PREFIX_OLD_INDIRECT = 19, 
    DEV_TM = 20, NEWLINE = 21, SEPARATOR = 22, OPERAND_UNDEFINED = 23, STRING_IMMEDIATE = 24, 
    IMM_DEC_NUMBER_K = 25, IMM_DEC_NUMBER_SHARP = 26, IMM_HEX_NUMBER = 27, 
    IMM_DEC_NUMBER_SIGN = 28, IMM_DEC_NUMBER_RAW = 29, FP_EXPONENTIAL = 30, 
    FP_DECIMAL = 31, INDEX_DEVICE = 32, OLD_INDIRECT = 33, IDENTIFIER = 34
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


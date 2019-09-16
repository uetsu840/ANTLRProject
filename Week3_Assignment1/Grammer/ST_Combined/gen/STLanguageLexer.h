
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer/ST_Combined\STLanguage.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  STLanguageLexer : public antlr4::Lexer {
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

  STLanguageLexer(antlr4::CharStream *input);
  ~STLanguageLexer();

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


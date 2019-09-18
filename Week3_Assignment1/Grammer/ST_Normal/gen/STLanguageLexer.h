
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer/ST_Normal\STLanguageLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  STLanguageLexer : public antlr4::Lexer {
public:
  enum {
    LINE_COMMENT = 1, C_STYLE_COMMENT = 2, WS = 3, TOKEN_ASSIGN_RL = 4, 
    TOKEN_ASSIGN_LR = 5, TOKEN_CMP_EQ = 6, TOKEN_CMP_GT_EQ = 7, TOKEN_CMP_LT_EQ = 8, 
    TOKEN_CMP_NEQ = 9, TOKEN_CMP_GT = 10, TOKEN_CMP_LT = 11, TOKEN_RETURN = 12, 
    TOKEN_FOR = 13, TOKEN_FOR_END = 14, TOKEN_WHILE = 15, TOKEN_DO = 16, 
    TOKEN_TO = 17, TOKEN_WHILE_END = 18, TOKEN_IF = 19, TOKEN_IF_THEN = 20, 
    TOKEN_IF_ELIF = 21, TOKEN_ELSE = 22, TOKEN_IF_END = 23, TOKEN_SELECT = 24, 
    TOKEN_SELECT_END = 25, TOKEN_REPEAT = 26, TOKEN_UNTIL = 27, TOKEN_REPEAT_END = 28, 
    TOKEN_REPEAT_EXIT = 29, TOKEN_CASE = 30, TOKEN_OF = 31, TOKEN_CASE_END = 32, 
    TOKEN_NOT = 33, TOKEN_OPEN_BRACE = 34, TOKEN_CLOSE_BRACE = 35, TOKEN_HEX_NUMBER = 36, 
    TOKEN_DEC_NUMBER = 37, TOKEN_OCT_NUMBER = 38, TOKEN_BIN_NUMBER = 39, 
    TOKEN_FP_NUMBER = 40, TOKEN_CASE_RANGE = 41, TOKEN_PLUS = 42, TOKEN_MINUS = 43, 
    TOKEN_MUL = 44, TOKEN_DIV = 45, TOKEN_ARG_LBL_SEP = 46, TOKEN_CASE_LBL_SEP = 47, 
    TOKEN_AND = 48, TOKEN_XOR = 49, TOKEN_OR = 50, STATEMENT_SEPARATOR = 51, 
    IDENTIFIER = 52, NL = 53, NOT_NL = 54, END_COMMENT = 55, COMMENT = 56
  };

  enum {
    LINE_COMMENT_MODE = 1, C_BLOCK_COMMENT_MODE = 2
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


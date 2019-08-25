
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment2/Grammer\Mnemonic.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  MnemonicParser : public antlr4::Parser {
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

  enum {
    RuleInput = 0, RuleMnemonic = 1, RuleSeparator = 2, RuleInstruction = 3, 
    RuleArith_operator = 4, RuleSuffix = 5, RuleOperand = 6, RuleDevice = 7, 
    RuleDevice_z = 8, RuleDevice_old_indirect = 9, RuleDevice_normal = 10, 
    RuleDevice_wbit = 11, RuleDevice_content = 12, RuleDevice_raw = 13, 
    RuleIndex_value = 14, RuleBitpos = 15, RuleScope = 16, RuleReference_operator = 17, 
    RuleImmediate = 18, RuleInt_immediate = 19, RuleFp_immediate = 20, RuleStr_immediate = 21, 
    RuleDecimal_immediate = 22, RuleRly_or_int_immediate = 23, RuleIndex_imm = 24
  };

  MnemonicParser(antlr4::TokenStream *input);
  ~MnemonicParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class InputContext;
  class MnemonicContext;
  class SeparatorContext;
  class InstructionContext;
  class Arith_operatorContext;
  class SuffixContext;
  class OperandContext;
  class DeviceContext;
  class Device_zContext;
  class Device_old_indirectContext;
  class Device_normalContext;
  class Device_wbitContext;
  class Device_contentContext;
  class Device_rawContext;
  class Index_valueContext;
  class BitposContext;
  class ScopeContext;
  class Reference_operatorContext;
  class ImmediateContext;
  class Int_immediateContext;
  class Fp_immediateContext;
  class Str_immediateContext;
  class Decimal_immediateContext;
  class Rly_or_int_immediateContext;
  class Index_immContext; 

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<MnemonicContext *> mnemonic();
    MnemonicContext* mnemonic(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputContext* input();

  class  MnemonicContext : public antlr4::ParserRuleContext {
  public:
    MnemonicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InstructionContext *instruction();
    std::vector<SeparatorContext *> separator();
    SeparatorContext* separator(size_t i);
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MnemonicContext* mnemonic();

  class  SeparatorContext : public antlr4::ParserRuleContext {
  public:
    SeparatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEPARATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SeparatorContext* separator();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InstructionContext() = default;
    void copyFrom(InstructionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Inst_with_suffixContext : public InstructionContext {
  public:
    Inst_with_suffixContext(InstructionContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *DOT_SUFFIX();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Inst_normalContext : public InstructionContext {
  public:
    Inst_normalContext(InstructionContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Inst_arithContext : public InstructionContext {
  public:
    Inst_arithContext(InstructionContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    Arith_operatorContext *arith_operator();
    antlr4::tree::TerminalNode *DOT_SUFFIX();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InstructionContext* instruction();

  class  Arith_operatorContext : public antlr4::ParserRuleContext {
  public:
    Arith_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARITH_PLUS();
    antlr4::tree::TerminalNode *ARITH_MINUS();
    antlr4::tree::TerminalNode *MUL_OP_REF();
    antlr4::tree::TerminalNode *ARITH_DIV();
    antlr4::tree::TerminalNode *ARITH_EQ();
    antlr4::tree::TerminalNode *ARITH_LT();
    antlr4::tree::TerminalNode *ARITH_LT_EQ();
    antlr4::tree::TerminalNode *ARITH_GT();
    antlr4::tree::TerminalNode *ARITH_GT_EQ();
    antlr4::tree::TerminalNode *ARITH_RSHIFT();
    antlr4::tree::TerminalNode *ARITH_LSHIFT();
    antlr4::tree::TerminalNode *ARITH_AND();
    antlr4::tree::TerminalNode *ARITH_OR();
    antlr4::tree::TerminalNode *ARITH_XOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arith_operatorContext* arith_operator();

  class  SuffixContext : public antlr4::ParserRuleContext {
  public:
    SuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SuffixContext* suffix();

  class  OperandContext : public antlr4::ParserRuleContext {
  public:
    OperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeviceContext *device();
    ImmediateContext *immediate();
    antlr4::tree::TerminalNode *OPERAND_UNDEFINED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperandContext* operand();

  class  DeviceContext : public antlr4::ParserRuleContext {
  public:
    DeviceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Device_old_indirectContext *device_old_indirect();
    Device_zContext *device_z();
    Device_normalContext *device_normal();
    Rly_or_int_immediateContext *rly_or_int_immediate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeviceContext* device();

  class  Device_zContext : public antlr4::ParserRuleContext {
  public:
    Device_zContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INDEX_DEVICE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Device_zContext* device_z();

  class  Device_old_indirectContext : public antlr4::ParserRuleContext {
  public:
    Device_old_indirectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OLD_INDIRECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Device_old_indirectContext* device_old_indirect();

  class  Device_normalContext : public antlr4::ParserRuleContext {
  public:
    Device_normalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Device_normalContext() = default;
    void copyFrom(Device_normalContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Dev_nml_singleContext : public Device_normalContext {
  public:
    Dev_nml_singleContext(Device_normalContext *ctx);

    Device_contentContext *device_content();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Dev_with_wbitContext : public Device_normalContext {
  public:
    Dev_with_wbitContext(Device_normalContext *ctx);

    Device_wbitContext *device_wbit();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Dev_with_idxContext : public Device_normalContext {
  public:
    Dev_with_idxContext(Device_normalContext *ctx);

    Device_contentContext *device_content();
    antlr4::tree::TerminalNode *ROPERATOR_INDEX();
    Index_valueContext *index_value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Device_normalContext* device_normal();

  class  Device_wbitContext : public antlr4::ParserRuleContext {
  public:
    Device_wbitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Device_rawContext *device_raw();
    BitposContext *bitpos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Device_wbitContext* device_wbit();

  class  Device_contentContext : public antlr4::ParserRuleContext {
  public:
    Device_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Device_rawContext *device_raw();
    Reference_operatorContext *reference_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Device_contentContext* device_content();

  class  Device_rawContext : public antlr4::ParserRuleContext {
  public:
    Device_rawContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    ScopeContext *scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Device_rawContext* device_raw();

  class  Index_valueContext : public antlr4::ParserRuleContext {
  public:
    Index_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Index_valueContext() = default;
    void copyFrom(Index_valueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Index_value_device_zContext : public Index_valueContext {
  public:
    Index_value_device_zContext(Index_valueContext *ctx);

    Device_zContext *device_z();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Index_value_immediateContext : public Index_valueContext {
  public:
    Index_value_immediateContext(Index_valueContext *ctx);

    Index_immContext *index_imm();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Index_valueContext* index_value();

  class  BitposContext : public antlr4::ParserRuleContext {
  public:
    BitposContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT_SEGMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitposContext* bitpos();

  class  ScopeContext : public antlr4::ParserRuleContext {
  public:
    ScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCOPE_LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScopeContext* scope();

  class  Reference_operatorContext : public antlr4::ParserRuleContext {
  public:
    Reference_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL_OP_REF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reference_operatorContext* reference_operator();

  class  ImmediateContext : public antlr4::ParserRuleContext {
  public:
    ImmediateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_immediateContext *int_immediate();
    Rly_or_int_immediateContext *rly_or_int_immediate();
    Fp_immediateContext *fp_immediate();
    Str_immediateContext *str_immediate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImmediateContext* immediate();

  class  Int_immediateContext : public antlr4::ParserRuleContext {
  public:
    Int_immediateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Int_immediateContext() = default;
    void copyFrom(Int_immediateContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Int_immediate_hexContext : public Int_immediateContext {
  public:
    Int_immediate_hexContext(Int_immediateContext *ctx);

    antlr4::tree::TerminalNode *IMM_HEX_NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Int_immediate_decimalContext : public Int_immediateContext {
  public:
    Int_immediate_decimalContext(Int_immediateContext *ctx);

    Decimal_immediateContext *decimal_immediate();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Int_immediateContext* int_immediate();

  class  Fp_immediateContext : public antlr4::ParserRuleContext {
  public:
    Fp_immediateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FP_DECIMAL();
    antlr4::tree::TerminalNode *FP_EXPONENTIAL();
    antlr4::tree::TerminalNode *DOT_SEGMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fp_immediateContext* fp_immediate();

  class  Str_immediateContext : public antlr4::ParserRuleContext {
  public:
    Str_immediateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_IMMEDIATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Str_immediateContext* str_immediate();

  class  Decimal_immediateContext : public antlr4::ParserRuleContext {
  public:
    Decimal_immediateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMM_DEC_NUMBER_SHARP();
    antlr4::tree::TerminalNode *IMM_DEC_NUMBER_K();
    antlr4::tree::TerminalNode *IMM_DEC_NUMBER_SIGN();
    antlr4::tree::TerminalNode *IMM_DEC_NUMBER_RAW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decimal_immediateContext* decimal_immediate();

  class  Rly_or_int_immediateContext : public antlr4::ParserRuleContext {
  public:
    Rly_or_int_immediateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMM_DEC_NUMBER_RAW();
    antlr4::tree::TerminalNode *ROPERATOR_INDEX();
    Index_immContext *index_imm();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rly_or_int_immediateContext* rly_or_int_immediate();

  class  Index_immContext : public antlr4::ParserRuleContext {
  public:
    Index_immContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMM_DEC_NUMBER_RAW();
    antlr4::tree::TerminalNode *IMM_DEC_NUMBER_SIGN();
    antlr4::tree::TerminalNode *IMM_DEC_NUMBER_SHARP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_immContext* index_imm();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};


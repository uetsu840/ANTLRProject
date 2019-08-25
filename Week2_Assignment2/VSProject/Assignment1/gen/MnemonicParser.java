// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment2/Grammer\Mnemonic.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class MnemonicParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		DOT_SEGMENT=1, DOT_SUFFIX=2, ROPERATOR_INDEX=3, SCOPE_LOCAL=4, MUL_OP_REF=5, 
		ARITH_PLUS=6, ARITH_MINUS=7, ARITH_DIV=8, ARITH_EQ=9, ARITH_LT=10, ARITH_GT=11, 
		ARITH_RSHIFT=12, ARITH_LSHIFT=13, ARITH_OR=14, ARITH_AND=15, ARITH_XOR=16, 
		PREFIX_OLD_INDIRECT=17, DEV_TM=18, NEWLINE=19, SEPARATOR=20, OPERAND_UNDEFINED=21, 
		STRING_IMMEDIATE=22, IMM_DEC_NUMBER_K=23, IMM_DEC_NUMBER_SHARP=24, IMM_HEX_NUMBER=25, 
		IMM_DEC_NUMBER_SIGN=26, IMM_DEC_NUMBER_RAW=27, FP_EXPONENTIAL=28, FP_DECIMAL=29, 
		INDEX_DEVICE=30, OLD_INDIRECT=31, IDENTIFIER=32;
	public static final int
		RULE_input = 0, RULE_mnemonic = 1, RULE_separator = 2, RULE_instruction = 3, 
		RULE_arith_operator = 4, RULE_suffix = 5, RULE_operand = 6, RULE_device = 7, 
		RULE_device_z = 8, RULE_device_old_indirect = 9, RULE_device_normal = 10, 
		RULE_device_wbit = 11, RULE_device_content = 12, RULE_device_raw = 13, 
		RULE_index_value = 14, RULE_bitpos = 15, RULE_scope = 16, RULE_reference_operator = 17, 
		RULE_immediate = 18, RULE_int_immediate = 19, RULE_fp_immediate = 20, 
		RULE_str_immediate = 21, RULE_decimal_immediate = 22, RULE_rly_or_int_immediate = 23, 
		RULE_index_value_old = 24;
	private static String[] makeRuleNames() {
		return new String[] {
			"input", "mnemonic", "separator", "instruction", "arith_operator", "suffix", 
			"operand", "device", "device_z", "device_old_indirect", "device_normal", 
			"device_wbit", "device_content", "device_raw", "index_value", "bitpos", 
			"scope", "reference_operator", "immediate", "int_immediate", "fp_immediate", 
			"str_immediate", "decimal_immediate", "rly_or_int_immediate", "index_value_old"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, "'<'", "'>'", 
			"'>>'", "'<<'", null, null, null, null, null, null, null, "'???'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "DOT_SEGMENT", "DOT_SUFFIX", "ROPERATOR_INDEX", "SCOPE_LOCAL", 
			"MUL_OP_REF", "ARITH_PLUS", "ARITH_MINUS", "ARITH_DIV", "ARITH_EQ", "ARITH_LT", 
			"ARITH_GT", "ARITH_RSHIFT", "ARITH_LSHIFT", "ARITH_OR", "ARITH_AND", 
			"ARITH_XOR", "PREFIX_OLD_INDIRECT", "DEV_TM", "NEWLINE", "SEPARATOR", 
			"OPERAND_UNDEFINED", "STRING_IMMEDIATE", "IMM_DEC_NUMBER_K", "IMM_DEC_NUMBER_SHARP", 
			"IMM_HEX_NUMBER", "IMM_DEC_NUMBER_SIGN", "IMM_DEC_NUMBER_RAW", "FP_EXPONENTIAL", 
			"FP_DECIMAL", "INDEX_DEVICE", "OLD_INDIRECT", "IDENTIFIER"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Mnemonic.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public MnemonicParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class InputContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(MnemonicParser.EOF, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(MnemonicParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(MnemonicParser.NEWLINE, i);
		}
		public List<MnemonicContext> mnemonic() {
			return getRuleContexts(MnemonicContext.class);
		}
		public MnemonicContext mnemonic(int i) {
			return getRuleContext(MnemonicContext.class,i);
		}
		public InputContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_input; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterInput(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitInput(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitInput(this);
			else return visitor.visitChildren(this);
		}
	}

	public final InputContext input() throws RecognitionException {
		InputContext _localctx = new InputContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_input);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(56);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(51);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==SEPARATOR || _la==IDENTIFIER) {
						{
						setState(50);
						mnemonic();
						}
					}

					setState(53);
					match(NEWLINE);
					}
					} 
				}
				setState(58);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			}
			setState(60);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEPARATOR || _la==IDENTIFIER) {
				{
				setState(59);
				mnemonic();
				}
			}

			setState(62);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MnemonicContext extends ParserRuleContext {
		public InstructionContext instruction() {
			return getRuleContext(InstructionContext.class,0);
		}
		public List<SeparatorContext> separator() {
			return getRuleContexts(SeparatorContext.class);
		}
		public SeparatorContext separator(int i) {
			return getRuleContext(SeparatorContext.class,i);
		}
		public List<OperandContext> operand() {
			return getRuleContexts(OperandContext.class);
		}
		public OperandContext operand(int i) {
			return getRuleContext(OperandContext.class,i);
		}
		public TerminalNode NEWLINE() { return getToken(MnemonicParser.NEWLINE, 0); }
		public MnemonicContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mnemonic; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterMnemonic(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitMnemonic(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitMnemonic(this);
			else return visitor.visitChildren(this);
		}
	}

	public final MnemonicContext mnemonic() throws RecognitionException {
		MnemonicContext _localctx = new MnemonicContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_mnemonic);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(67);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==SEPARATOR) {
				{
				{
				setState(64);
				separator();
				}
				}
				setState(69);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			{
			setState(70);
			instruction();
			setState(76);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(71);
					separator();
					setState(72);
					operand();
					}
					} 
				}
				setState(78);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			}
			setState(82);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==SEPARATOR) {
				{
				{
				setState(79);
				separator();
				}
				}
				setState(84);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(86);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				{
				setState(85);
				match(NEWLINE);
				}
				break;
			}
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SeparatorContext extends ParserRuleContext {
		public TerminalNode SEPARATOR() { return getToken(MnemonicParser.SEPARATOR, 0); }
		public SeparatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_separator; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterSeparator(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitSeparator(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitSeparator(this);
			else return visitor.visitChildren(this);
		}
	}

	public final SeparatorContext separator() throws RecognitionException {
		SeparatorContext _localctx = new SeparatorContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_separator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(88);
			match(SEPARATOR);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InstructionContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(MnemonicParser.IDENTIFIER, 0); }
		public SuffixContext suffix() {
			return getRuleContext(SuffixContext.class,0);
		}
		public Arith_operatorContext arith_operator() {
			return getRuleContext(Arith_operatorContext.class,0);
		}
		public InstructionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instruction; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterInstruction(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitInstruction(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitInstruction(this);
			else return visitor.visitChildren(this);
		}
	}

	public final InstructionContext instruction() throws RecognitionException {
		InstructionContext _localctx = new InstructionContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_instruction);
		int _la;
		try {
			setState(98);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(90);
				match(IDENTIFIER);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(91);
				match(IDENTIFIER);
				setState(92);
				suffix();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(93);
				match(IDENTIFIER);
				setState(94);
				arith_operator();
				setState(96);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DOT_SUFFIX) {
					{
					setState(95);
					suffix();
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Arith_operatorContext extends ParserRuleContext {
		public TerminalNode ARITH_PLUS() { return getToken(MnemonicParser.ARITH_PLUS, 0); }
		public TerminalNode ARITH_MINUS() { return getToken(MnemonicParser.ARITH_MINUS, 0); }
		public TerminalNode MUL_OP_REF() { return getToken(MnemonicParser.MUL_OP_REF, 0); }
		public TerminalNode ARITH_DIV() { return getToken(MnemonicParser.ARITH_DIV, 0); }
		public TerminalNode ARITH_EQ() { return getToken(MnemonicParser.ARITH_EQ, 0); }
		public TerminalNode ARITH_LT() { return getToken(MnemonicParser.ARITH_LT, 0); }
		public TerminalNode ARITH_GT() { return getToken(MnemonicParser.ARITH_GT, 0); }
		public TerminalNode ARITH_RSHIFT() { return getToken(MnemonicParser.ARITH_RSHIFT, 0); }
		public TerminalNode ARITH_LSHIFT() { return getToken(MnemonicParser.ARITH_LSHIFT, 0); }
		public TerminalNode ARITH_AND() { return getToken(MnemonicParser.ARITH_AND, 0); }
		public TerminalNode ARITH_OR() { return getToken(MnemonicParser.ARITH_OR, 0); }
		public TerminalNode ARITH_XOR() { return getToken(MnemonicParser.ARITH_XOR, 0); }
		public Arith_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arith_operator; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterArith_operator(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitArith_operator(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitArith_operator(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Arith_operatorContext arith_operator() throws RecognitionException {
		Arith_operatorContext _localctx = new Arith_operatorContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_arith_operator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(100);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MUL_OP_REF) | (1L << ARITH_PLUS) | (1L << ARITH_MINUS) | (1L << ARITH_DIV) | (1L << ARITH_EQ) | (1L << ARITH_LT) | (1L << ARITH_GT) | (1L << ARITH_RSHIFT) | (1L << ARITH_LSHIFT) | (1L << ARITH_OR) | (1L << ARITH_AND) | (1L << ARITH_XOR))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SuffixContext extends ParserRuleContext {
		public TerminalNode DOT_SUFFIX() { return getToken(MnemonicParser.DOT_SUFFIX, 0); }
		public SuffixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_suffix; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterSuffix(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitSuffix(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitSuffix(this);
			else return visitor.visitChildren(this);
		}
	}

	public final SuffixContext suffix() throws RecognitionException {
		SuffixContext _localctx = new SuffixContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_suffix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(102);
			match(DOT_SUFFIX);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OperandContext extends ParserRuleContext {
		public OperandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operand; }
	 
		public OperandContext() { }
		public void copyFrom(OperandContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Operand_undefContext extends OperandContext {
		public TerminalNode OPERAND_UNDEFINED() { return getToken(MnemonicParser.OPERAND_UNDEFINED, 0); }
		public Operand_undefContext(OperandContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterOperand_undef(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitOperand_undef(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitOperand_undef(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class Operand_immediateContext extends OperandContext {
		public ImmediateContext immediate() {
			return getRuleContext(ImmediateContext.class,0);
		}
		public Operand_immediateContext(OperandContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterOperand_immediate(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitOperand_immediate(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitOperand_immediate(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class Operand_deviceContext extends OperandContext {
		public DeviceContext device() {
			return getRuleContext(DeviceContext.class,0);
		}
		public Operand_deviceContext(OperandContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterOperand_device(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitOperand_device(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitOperand_device(this);
			else return visitor.visitChildren(this);
		}
	}

	public final OperandContext operand() throws RecognitionException {
		OperandContext _localctx = new OperandContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_operand);
		try {
			setState(107);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				_localctx = new Operand_deviceContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(104);
				device();
				}
				break;
			case 2:
				_localctx = new Operand_immediateContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(105);
				immediate();
				}
				break;
			case 3:
				_localctx = new Operand_undefContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(106);
				match(OPERAND_UNDEFINED);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeviceContext extends ParserRuleContext {
		public DeviceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_device; }
	 
		public DeviceContext() { }
		public void copyFrom(DeviceContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Dev_zContext extends DeviceContext {
		public Device_zContext device_z() {
			return getRuleContext(Device_zContext.class,0);
		}
		public Dev_zContext(DeviceContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterDev_z(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitDev_z(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitDev_z(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class Dev_normalContext extends DeviceContext {
		public Device_normalContext device_normal() {
			return getRuleContext(Device_normalContext.class,0);
		}
		public Dev_normalContext(DeviceContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterDev_normal(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitDev_normal(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitDev_normal(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class Dev_immediateContext extends DeviceContext {
		public Rly_or_int_immediateContext rly_or_int_immediate() {
			return getRuleContext(Rly_or_int_immediateContext.class,0);
		}
		public Dev_immediateContext(DeviceContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterDev_immediate(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitDev_immediate(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitDev_immediate(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class Dev_old_indirectContext extends DeviceContext {
		public Device_old_indirectContext device_old_indirect() {
			return getRuleContext(Device_old_indirectContext.class,0);
		}
		public Dev_old_indirectContext(DeviceContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterDev_old_indirect(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitDev_old_indirect(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitDev_old_indirect(this);
			else return visitor.visitChildren(this);
		}
	}

	public final DeviceContext device() throws RecognitionException {
		DeviceContext _localctx = new DeviceContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_device);
		try {
			setState(113);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OLD_INDIRECT:
				_localctx = new Dev_old_indirectContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(109);
				device_old_indirect();
				}
				break;
			case INDEX_DEVICE:
				_localctx = new Dev_zContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(110);
				device_z();
				}
				break;
			case SCOPE_LOCAL:
			case MUL_OP_REF:
			case IDENTIFIER:
				_localctx = new Dev_normalContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(111);
				device_normal();
				}
				break;
			case IMM_DEC_NUMBER_RAW:
				_localctx = new Dev_immediateContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(112);
				rly_or_int_immediate();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Device_zContext extends ParserRuleContext {
		public TerminalNode INDEX_DEVICE() { return getToken(MnemonicParser.INDEX_DEVICE, 0); }
		public Device_zContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_device_z; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterDevice_z(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitDevice_z(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitDevice_z(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Device_zContext device_z() throws RecognitionException {
		Device_zContext _localctx = new Device_zContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_device_z);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(115);
			match(INDEX_DEVICE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Device_old_indirectContext extends ParserRuleContext {
		public TerminalNode OLD_INDIRECT() { return getToken(MnemonicParser.OLD_INDIRECT, 0); }
		public Device_old_indirectContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_device_old_indirect; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterDevice_old_indirect(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitDevice_old_indirect(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitDevice_old_indirect(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Device_old_indirectContext device_old_indirect() throws RecognitionException {
		Device_old_indirectContext _localctx = new Device_old_indirectContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_device_old_indirect);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(117);
			match(OLD_INDIRECT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Device_normalContext extends ParserRuleContext {
		public Device_contentContext device_content() {
			return getRuleContext(Device_contentContext.class,0);
		}
		public TerminalNode ROPERATOR_INDEX() { return getToken(MnemonicParser.ROPERATOR_INDEX, 0); }
		public Index_valueContext index_value() {
			return getRuleContext(Index_valueContext.class,0);
		}
		public Device_wbitContext device_wbit() {
			return getRuleContext(Device_wbitContext.class,0);
		}
		public Device_normalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_device_normal; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterDevice_normal(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitDevice_normal(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitDevice_normal(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Device_normalContext device_normal() throws RecognitionException {
		Device_normalContext _localctx = new Device_normalContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_device_normal);
		try {
			setState(125);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(119);
				device_content();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(120);
				device_content();
				setState(121);
				match(ROPERATOR_INDEX);
				setState(122);
				index_value();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(124);
				device_wbit();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Device_wbitContext extends ParserRuleContext {
		public Device_rawContext device_raw() {
			return getRuleContext(Device_rawContext.class,0);
		}
		public BitposContext bitpos() {
			return getRuleContext(BitposContext.class,0);
		}
		public Device_wbitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_device_wbit; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterDevice_wbit(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitDevice_wbit(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitDevice_wbit(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Device_wbitContext device_wbit() throws RecognitionException {
		Device_wbitContext _localctx = new Device_wbitContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_device_wbit);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(127);
			device_raw();
			setState(128);
			bitpos();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Device_contentContext extends ParserRuleContext {
		public Device_rawContext device_raw() {
			return getRuleContext(Device_rawContext.class,0);
		}
		public Reference_operatorContext reference_operator() {
			return getRuleContext(Reference_operatorContext.class,0);
		}
		public Device_contentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_device_content; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterDevice_content(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitDevice_content(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitDevice_content(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Device_contentContext device_content() throws RecognitionException {
		Device_contentContext _localctx = new Device_contentContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_device_content);
		try {
			setState(134);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SCOPE_LOCAL:
			case IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(130);
				device_raw();
				}
				break;
			case MUL_OP_REF:
				enterOuterAlt(_localctx, 2);
				{
				setState(131);
				reference_operator();
				setState(132);
				device_raw();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Device_rawContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(MnemonicParser.IDENTIFIER, 0); }
		public ScopeContext scope() {
			return getRuleContext(ScopeContext.class,0);
		}
		public Device_rawContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_device_raw; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterDevice_raw(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitDevice_raw(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitDevice_raw(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Device_rawContext device_raw() throws RecognitionException {
		Device_rawContext _localctx = new Device_rawContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_device_raw);
		try {
			setState(140);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(136);
				match(IDENTIFIER);
				}
				break;
			case SCOPE_LOCAL:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(137);
				scope();
				setState(138);
				match(IDENTIFIER);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Index_valueContext extends ParserRuleContext {
		public Index_value_oldContext index_value_old() {
			return getRuleContext(Index_value_oldContext.class,0);
		}
		public Device_zContext device_z() {
			return getRuleContext(Device_zContext.class,0);
		}
		public Index_valueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_index_value; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterIndex_value(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitIndex_value(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitIndex_value(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Index_valueContext index_value() throws RecognitionException {
		Index_valueContext _localctx = new Index_valueContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_index_value);
		try {
			setState(144);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IMM_DEC_NUMBER_SHARP:
			case IMM_DEC_NUMBER_SIGN:
			case IMM_DEC_NUMBER_RAW:
				enterOuterAlt(_localctx, 1);
				{
				setState(142);
				index_value_old();
				}
				break;
			case INDEX_DEVICE:
				enterOuterAlt(_localctx, 2);
				{
				setState(143);
				device_z();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BitposContext extends ParserRuleContext {
		public TerminalNode DOT_SEGMENT() { return getToken(MnemonicParser.DOT_SEGMENT, 0); }
		public BitposContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bitpos; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterBitpos(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitBitpos(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitBitpos(this);
			else return visitor.visitChildren(this);
		}
	}

	public final BitposContext bitpos() throws RecognitionException {
		BitposContext _localctx = new BitposContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_bitpos);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(146);
			match(DOT_SEGMENT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ScopeContext extends ParserRuleContext {
		public TerminalNode SCOPE_LOCAL() { return getToken(MnemonicParser.SCOPE_LOCAL, 0); }
		public ScopeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_scope; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterScope(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitScope(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitScope(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ScopeContext scope() throws RecognitionException {
		ScopeContext _localctx = new ScopeContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_scope);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(148);
			match(SCOPE_LOCAL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Reference_operatorContext extends ParserRuleContext {
		public TerminalNode MUL_OP_REF() { return getToken(MnemonicParser.MUL_OP_REF, 0); }
		public Reference_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_reference_operator; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterReference_operator(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitReference_operator(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitReference_operator(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Reference_operatorContext reference_operator() throws RecognitionException {
		Reference_operatorContext _localctx = new Reference_operatorContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_reference_operator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(150);
			match(MUL_OP_REF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ImmediateContext extends ParserRuleContext {
		public Int_immediateContext int_immediate() {
			return getRuleContext(Int_immediateContext.class,0);
		}
		public Rly_or_int_immediateContext rly_or_int_immediate() {
			return getRuleContext(Rly_or_int_immediateContext.class,0);
		}
		public Fp_immediateContext fp_immediate() {
			return getRuleContext(Fp_immediateContext.class,0);
		}
		public Str_immediateContext str_immediate() {
			return getRuleContext(Str_immediateContext.class,0);
		}
		public ImmediateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_immediate; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterImmediate(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitImmediate(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitImmediate(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ImmediateContext immediate() throws RecognitionException {
		ImmediateContext _localctx = new ImmediateContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_immediate);
		try {
			setState(156);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(152);
				int_immediate();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(153);
				rly_or_int_immediate();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(154);
				fp_immediate();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(155);
				str_immediate();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Int_immediateContext extends ParserRuleContext {
		public Decimal_immediateContext decimal_immediate() {
			return getRuleContext(Decimal_immediateContext.class,0);
		}
		public TerminalNode IMM_HEX_NUMBER() { return getToken(MnemonicParser.IMM_HEX_NUMBER, 0); }
		public Int_immediateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_int_immediate; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterInt_immediate(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitInt_immediate(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitInt_immediate(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Int_immediateContext int_immediate() throws RecognitionException {
		Int_immediateContext _localctx = new Int_immediateContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_int_immediate);
		try {
			setState(160);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IMM_DEC_NUMBER_K:
			case IMM_DEC_NUMBER_SHARP:
			case IMM_DEC_NUMBER_SIGN:
			case IMM_DEC_NUMBER_RAW:
				enterOuterAlt(_localctx, 1);
				{
				setState(158);
				decimal_immediate();
				}
				break;
			case IMM_HEX_NUMBER:
				enterOuterAlt(_localctx, 2);
				{
				setState(159);
				match(IMM_HEX_NUMBER);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Fp_immediateContext extends ParserRuleContext {
		public TerminalNode FP_DECIMAL() { return getToken(MnemonicParser.FP_DECIMAL, 0); }
		public TerminalNode FP_EXPONENTIAL() { return getToken(MnemonicParser.FP_EXPONENTIAL, 0); }
		public TerminalNode DOT_SEGMENT() { return getToken(MnemonicParser.DOT_SEGMENT, 0); }
		public Fp_immediateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fp_immediate; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterFp_immediate(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitFp_immediate(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitFp_immediate(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Fp_immediateContext fp_immediate() throws RecognitionException {
		Fp_immediateContext _localctx = new Fp_immediateContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_fp_immediate);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(162);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << DOT_SEGMENT) | (1L << FP_EXPONENTIAL) | (1L << FP_DECIMAL))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Str_immediateContext extends ParserRuleContext {
		public TerminalNode STRING_IMMEDIATE() { return getToken(MnemonicParser.STRING_IMMEDIATE, 0); }
		public Str_immediateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_str_immediate; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterStr_immediate(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitStr_immediate(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitStr_immediate(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Str_immediateContext str_immediate() throws RecognitionException {
		Str_immediateContext _localctx = new Str_immediateContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_str_immediate);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(164);
			match(STRING_IMMEDIATE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Decimal_immediateContext extends ParserRuleContext {
		public TerminalNode IMM_DEC_NUMBER_SHARP() { return getToken(MnemonicParser.IMM_DEC_NUMBER_SHARP, 0); }
		public TerminalNode IMM_DEC_NUMBER_K() { return getToken(MnemonicParser.IMM_DEC_NUMBER_K, 0); }
		public TerminalNode IMM_DEC_NUMBER_SIGN() { return getToken(MnemonicParser.IMM_DEC_NUMBER_SIGN, 0); }
		public TerminalNode IMM_DEC_NUMBER_RAW() { return getToken(MnemonicParser.IMM_DEC_NUMBER_RAW, 0); }
		public Decimal_immediateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_decimal_immediate; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterDecimal_immediate(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitDecimal_immediate(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitDecimal_immediate(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Decimal_immediateContext decimal_immediate() throws RecognitionException {
		Decimal_immediateContext _localctx = new Decimal_immediateContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_decimal_immediate);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(166);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << IMM_DEC_NUMBER_K) | (1L << IMM_DEC_NUMBER_SHARP) | (1L << IMM_DEC_NUMBER_SIGN) | (1L << IMM_DEC_NUMBER_RAW))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Rly_or_int_immediateContext extends ParserRuleContext {
		public TerminalNode IMM_DEC_NUMBER_RAW() { return getToken(MnemonicParser.IMM_DEC_NUMBER_RAW, 0); }
		public TerminalNode ROPERATOR_INDEX() { return getToken(MnemonicParser.ROPERATOR_INDEX, 0); }
		public Index_value_oldContext index_value_old() {
			return getRuleContext(Index_value_oldContext.class,0);
		}
		public Rly_or_int_immediateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rly_or_int_immediate; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterRly_or_int_immediate(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitRly_or_int_immediate(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitRly_or_int_immediate(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Rly_or_int_immediateContext rly_or_int_immediate() throws RecognitionException {
		Rly_or_int_immediateContext _localctx = new Rly_or_int_immediateContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_rly_or_int_immediate);
		try {
			setState(172);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(168);
				match(IMM_DEC_NUMBER_RAW);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(169);
				match(IMM_DEC_NUMBER_RAW);
				setState(170);
				match(ROPERATOR_INDEX);
				setState(171);
				index_value_old();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Index_value_oldContext extends ParserRuleContext {
		public TerminalNode IMM_DEC_NUMBER_RAW() { return getToken(MnemonicParser.IMM_DEC_NUMBER_RAW, 0); }
		public TerminalNode IMM_DEC_NUMBER_SIGN() { return getToken(MnemonicParser.IMM_DEC_NUMBER_SIGN, 0); }
		public TerminalNode IMM_DEC_NUMBER_SHARP() { return getToken(MnemonicParser.IMM_DEC_NUMBER_SHARP, 0); }
		public Index_value_oldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_index_value_old; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).enterIndex_value_old(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MnemonicListener ) ((MnemonicListener)listener).exitIndex_value_old(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MnemonicVisitor ) return ((MnemonicVisitor<? extends T>)visitor).visitIndex_value_old(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Index_value_oldContext index_value_old() throws RecognitionException {
		Index_value_oldContext _localctx = new Index_value_oldContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_index_value_old);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(174);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << IMM_DEC_NUMBER_SHARP) | (1L << IMM_DEC_NUMBER_SIGN) | (1L << IMM_DEC_NUMBER_RAW))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\"\u00b3\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\3\2\5\2\66\n\2\3\2\7\29\n\2\f\2\16\2<\13\2\3\2\5\2?\n\2\3\2"+
		"\3\2\3\3\7\3D\n\3\f\3\16\3G\13\3\3\3\3\3\3\3\3\3\7\3M\n\3\f\3\16\3P\13"+
		"\3\3\3\7\3S\n\3\f\3\16\3V\13\3\3\3\5\3Y\n\3\3\4\3\4\3\5\3\5\3\5\3\5\3"+
		"\5\3\5\5\5c\n\5\5\5e\n\5\3\6\3\6\3\7\3\7\3\b\3\b\3\b\5\bn\n\b\3\t\3\t"+
		"\3\t\3\t\5\tt\n\t\3\n\3\n\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\5\f\u0080"+
		"\n\f\3\r\3\r\3\r\3\16\3\16\3\16\3\16\5\16\u0089\n\16\3\17\3\17\3\17\3"+
		"\17\5\17\u008f\n\17\3\20\3\20\5\20\u0093\n\20\3\21\3\21\3\22\3\22\3\23"+
		"\3\23\3\24\3\24\3\24\3\24\5\24\u009f\n\24\3\25\3\25\5\25\u00a3\n\25\3"+
		"\26\3\26\3\27\3\27\3\30\3\30\3\31\3\31\3\31\3\31\5\31\u00af\n\31\3\32"+
		"\3\32\3\32\2\2\33\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62"+
		"\2\6\3\2\7\22\4\2\3\3\36\37\4\2\31\32\34\35\4\2\32\32\34\35\2\u00b2\2"+
		":\3\2\2\2\4E\3\2\2\2\6Z\3\2\2\2\bd\3\2\2\2\nf\3\2\2\2\fh\3\2\2\2\16m\3"+
		"\2\2\2\20s\3\2\2\2\22u\3\2\2\2\24w\3\2\2\2\26\177\3\2\2\2\30\u0081\3\2"+
		"\2\2\32\u0088\3\2\2\2\34\u008e\3\2\2\2\36\u0092\3\2\2\2 \u0094\3\2\2\2"+
		"\"\u0096\3\2\2\2$\u0098\3\2\2\2&\u009e\3\2\2\2(\u00a2\3\2\2\2*\u00a4\3"+
		"\2\2\2,\u00a6\3\2\2\2.\u00a8\3\2\2\2\60\u00ae\3\2\2\2\62\u00b0\3\2\2\2"+
		"\64\66\5\4\3\2\65\64\3\2\2\2\65\66\3\2\2\2\66\67\3\2\2\2\679\7\25\2\2"+
		"8\65\3\2\2\29<\3\2\2\2:8\3\2\2\2:;\3\2\2\2;>\3\2\2\2<:\3\2\2\2=?\5\4\3"+
		"\2>=\3\2\2\2>?\3\2\2\2?@\3\2\2\2@A\7\2\2\3A\3\3\2\2\2BD\5\6\4\2CB\3\2"+
		"\2\2DG\3\2\2\2EC\3\2\2\2EF\3\2\2\2FH\3\2\2\2GE\3\2\2\2HN\5\b\5\2IJ\5\6"+
		"\4\2JK\5\16\b\2KM\3\2\2\2LI\3\2\2\2MP\3\2\2\2NL\3\2\2\2NO\3\2\2\2OT\3"+
		"\2\2\2PN\3\2\2\2QS\5\6\4\2RQ\3\2\2\2SV\3\2\2\2TR\3\2\2\2TU\3\2\2\2UX\3"+
		"\2\2\2VT\3\2\2\2WY\7\25\2\2XW\3\2\2\2XY\3\2\2\2Y\5\3\2\2\2Z[\7\26\2\2"+
		"[\7\3\2\2\2\\e\7\"\2\2]^\7\"\2\2^e\5\f\7\2_`\7\"\2\2`b\5\n\6\2ac\5\f\7"+
		"\2ba\3\2\2\2bc\3\2\2\2ce\3\2\2\2d\\\3\2\2\2d]\3\2\2\2d_\3\2\2\2e\t\3\2"+
		"\2\2fg\t\2\2\2g\13\3\2\2\2hi\7\4\2\2i\r\3\2\2\2jn\5\20\t\2kn\5&\24\2l"+
		"n\7\27\2\2mj\3\2\2\2mk\3\2\2\2ml\3\2\2\2n\17\3\2\2\2ot\5\24\13\2pt\5\22"+
		"\n\2qt\5\26\f\2rt\5\60\31\2so\3\2\2\2sp\3\2\2\2sq\3\2\2\2sr\3\2\2\2t\21"+
		"\3\2\2\2uv\7 \2\2v\23\3\2\2\2wx\7!\2\2x\25\3\2\2\2y\u0080\5\32\16\2z{"+
		"\5\32\16\2{|\7\5\2\2|}\5\36\20\2}\u0080\3\2\2\2~\u0080\5\30\r\2\177y\3"+
		"\2\2\2\177z\3\2\2\2\177~\3\2\2\2\u0080\27\3\2\2\2\u0081\u0082\5\34\17"+
		"\2\u0082\u0083\5 \21\2\u0083\31\3\2\2\2\u0084\u0089\5\34\17\2\u0085\u0086"+
		"\5$\23\2\u0086\u0087\5\34\17\2\u0087\u0089\3\2\2\2\u0088\u0084\3\2\2\2"+
		"\u0088\u0085\3\2\2\2\u0089\33\3\2\2\2\u008a\u008f\7\"\2\2\u008b\u008c"+
		"\5\"\22\2\u008c\u008d\7\"\2\2\u008d\u008f\3\2\2\2\u008e\u008a\3\2\2\2"+
		"\u008e\u008b\3\2\2\2\u008f\35\3\2\2\2\u0090\u0093\5\62\32\2\u0091\u0093"+
		"\5\22\n\2\u0092\u0090\3\2\2\2\u0092\u0091\3\2\2\2\u0093\37\3\2\2\2\u0094"+
		"\u0095\7\3\2\2\u0095!\3\2\2\2\u0096\u0097\7\6\2\2\u0097#\3\2\2\2\u0098"+
		"\u0099\7\7\2\2\u0099%\3\2\2\2\u009a\u009f\5(\25\2\u009b\u009f\5\60\31"+
		"\2\u009c\u009f\5*\26\2\u009d\u009f\5,\27\2\u009e\u009a\3\2\2\2\u009e\u009b"+
		"\3\2\2\2\u009e\u009c\3\2\2\2\u009e\u009d\3\2\2\2\u009f\'\3\2\2\2\u00a0"+
		"\u00a3\5.\30\2\u00a1\u00a3\7\33\2\2\u00a2\u00a0\3\2\2\2\u00a2\u00a1\3"+
		"\2\2\2\u00a3)\3\2\2\2\u00a4\u00a5\t\3\2\2\u00a5+\3\2\2\2\u00a6\u00a7\7"+
		"\30\2\2\u00a7-\3\2\2\2\u00a8\u00a9\t\4\2\2\u00a9/\3\2\2\2\u00aa\u00af"+
		"\7\35\2\2\u00ab\u00ac\7\35\2\2\u00ac\u00ad\7\5\2\2\u00ad\u00af\5\62\32"+
		"\2\u00ae\u00aa\3\2\2\2\u00ae\u00ab\3\2\2\2\u00af\61\3\2\2\2\u00b0\u00b1"+
		"\t\5\2\2\u00b1\63\3\2\2\2\24\65:>ENTXbdms\177\u0088\u008e\u0092\u009e"+
		"\u00a2\u00ae";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
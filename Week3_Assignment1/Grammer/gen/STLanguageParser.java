// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer\STLanguage.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class STLanguageParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		WS=1, TOKEN_ASSIGN_RL=2, TOKEN_ASSIGN_LR=3, TOKEN_CMP_EQ=4, TOKEN_CMP_GT_EQ=5, 
		TOKEN_CMP_LT_EQ=6, TOKEN_CMP_GT=7, TOKEN_CMP_LT=8, TOKEN_FOR=9, TOKEN_FOR_END=10, 
		TOKEN_WHILE=11, TOKEN_DO=12, TOKEN_TO=13, TOKEN_WHILE_END=14, TOKEN_IF=15, 
		TOKEN_IF_THEN=16, TOKEN_IF_ELIF=17, TOKEN_IF_ELSE=18, TOKEN_IF_END=19, 
		TOKEN_SELECT=20, TOKEN_SELECT_END=21, TOKEN_OPEN_BRACE=22, TOKEN_CLOSE_BRACE=23, 
		TOKEN_HEX_NUMBER=24, TOKEN_DEC_NUMBER=25, TOKEN_OCT_NUMBER=26, TOKEN_BIN_NUMBER=27, 
		TOKEN_PLUS=28, TOKEN_MINUS=29, TOKEN_MUL=30, TOKEN_DIV=31, TOKEN_ARG_SEP=32, 
		STATEMENT_SEPARATOR=33, IDENTIFIER=34;
	public static final int
		RULE_input = 0, RULE_statement = 1, RULE_if_statement = 2, RULE_while_statement = 3, 
		RULE_for_statement = 4, RULE_expression = 5, RULE_compare_operator = 6, 
		RULE_assign_operator = 7, RULE_arith_operator_muldiv = 8, RULE_arith_operator_addsub = 9, 
		RULE_immediate = 10;
	private static String[] makeRuleNames() {
		return new String[] {
			"input", "statement", "if_statement", "while_statement", "for_statement", 
			"expression", "compare_operator", "assign_operator", "arith_operator_muldiv", 
			"arith_operator_addsub", "immediate"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, "'FOR'", "'END_FOR'", 
			"'WHILE'", "'DO'", "'TO'", "'END_WHILE'", "'IF'", "'THEN'", "'ELSIF'", 
			"'ELSE'", "'END_IF'", "'SELECT'", "'END_SELECT'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "WS", "TOKEN_ASSIGN_RL", "TOKEN_ASSIGN_LR", "TOKEN_CMP_EQ", "TOKEN_CMP_GT_EQ", 
			"TOKEN_CMP_LT_EQ", "TOKEN_CMP_GT", "TOKEN_CMP_LT", "TOKEN_FOR", "TOKEN_FOR_END", 
			"TOKEN_WHILE", "TOKEN_DO", "TOKEN_TO", "TOKEN_WHILE_END", "TOKEN_IF", 
			"TOKEN_IF_THEN", "TOKEN_IF_ELIF", "TOKEN_IF_ELSE", "TOKEN_IF_END", "TOKEN_SELECT", 
			"TOKEN_SELECT_END", "TOKEN_OPEN_BRACE", "TOKEN_CLOSE_BRACE", "TOKEN_HEX_NUMBER", 
			"TOKEN_DEC_NUMBER", "TOKEN_OCT_NUMBER", "TOKEN_BIN_NUMBER", "TOKEN_PLUS", 
			"TOKEN_MINUS", "TOKEN_MUL", "TOKEN_DIV", "TOKEN_ARG_SEP", "STATEMENT_SEPARATOR", 
			"IDENTIFIER"
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
	public String getGrammarFileName() { return "STLanguage.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public STLanguageParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class InputContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(STLanguageParser.EOF, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public InputContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_input; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).enterInput(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).exitInput(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof STLanguageVisitor ) return ((STLanguageVisitor<? extends T>)visitor).visitInput(this);
			else return visitor.visitChildren(this);
		}
	}

	public final InputContext input() throws RecognitionException {
		InputContext _localctx = new InputContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_input);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(25);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TOKEN_FOR) | (1L << TOKEN_WHILE) | (1L << TOKEN_IF) | (1L << TOKEN_OPEN_BRACE) | (1L << TOKEN_HEX_NUMBER) | (1L << TOKEN_DEC_NUMBER) | (1L << TOKEN_OCT_NUMBER) | (1L << TOKEN_BIN_NUMBER) | (1L << IDENTIFIER))) != 0)) {
				{
				{
				setState(22);
				statement();
				}
				}
				setState(27);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(28);
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

	public static class StatementContext extends ParserRuleContext {
		public If_statementContext if_statement() {
			return getRuleContext(If_statementContext.class,0);
		}
		public While_statementContext while_statement() {
			return getRuleContext(While_statementContext.class,0);
		}
		public For_statementContext for_statement() {
			return getRuleContext(For_statementContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode STATEMENT_SEPARATOR() { return getToken(STLanguageParser.STATEMENT_SEPARATOR, 0); }
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).enterStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).exitStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof STLanguageVisitor ) return ((STLanguageVisitor<? extends T>)visitor).visitStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_statement);
		try {
			setState(36);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TOKEN_IF:
				enterOuterAlt(_localctx, 1);
				{
				setState(30);
				if_statement();
				}
				break;
			case TOKEN_WHILE:
				enterOuterAlt(_localctx, 2);
				{
				setState(31);
				while_statement();
				}
				break;
			case TOKEN_FOR:
				enterOuterAlt(_localctx, 3);
				{
				setState(32);
				for_statement();
				}
				break;
			case TOKEN_OPEN_BRACE:
			case TOKEN_HEX_NUMBER:
			case TOKEN_DEC_NUMBER:
			case TOKEN_OCT_NUMBER:
			case TOKEN_BIN_NUMBER:
			case IDENTIFIER:
				enterOuterAlt(_localctx, 4);
				{
				setState(33);
				expression(0);
				setState(34);
				match(STATEMENT_SEPARATOR);
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

	public static class If_statementContext extends ParserRuleContext {
		public TerminalNode TOKEN_IF() { return getToken(STLanguageParser.TOKEN_IF, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode TOKEN_IF_THEN() { return getToken(STLanguageParser.TOKEN_IF_THEN, 0); }
		public TerminalNode TOKEN_IF_END() { return getToken(STLanguageParser.TOKEN_IF_END, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public List<TerminalNode> TOKEN_IF_ELIF() { return getTokens(STLanguageParser.TOKEN_IF_ELIF); }
		public TerminalNode TOKEN_IF_ELIF(int i) {
			return getToken(STLanguageParser.TOKEN_IF_ELIF, i);
		}
		public TerminalNode TOKEN_IF_ELSE() { return getToken(STLanguageParser.TOKEN_IF_ELSE, 0); }
		public If_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_if_statement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).enterIf_statement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).exitIf_statement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof STLanguageVisitor ) return ((STLanguageVisitor<? extends T>)visitor).visitIf_statement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final If_statementContext if_statement() throws RecognitionException {
		If_statementContext _localctx = new If_statementContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_if_statement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(38);
			match(TOKEN_IF);
			setState(39);
			expression(0);
			setState(40);
			match(TOKEN_IF_THEN);
			setState(42); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(41);
				statement();
				}
				}
				setState(44); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TOKEN_FOR) | (1L << TOKEN_WHILE) | (1L << TOKEN_IF) | (1L << TOKEN_OPEN_BRACE) | (1L << TOKEN_HEX_NUMBER) | (1L << TOKEN_DEC_NUMBER) | (1L << TOKEN_OCT_NUMBER) | (1L << TOKEN_BIN_NUMBER) | (1L << IDENTIFIER))) != 0) );
			setState(50);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TOKEN_IF_ELIF) {
				{
				{
				setState(46);
				match(TOKEN_IF_ELIF);
				setState(47);
				statement();
				}
				}
				setState(52);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(55);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TOKEN_IF_ELSE) {
				{
				setState(53);
				match(TOKEN_IF_ELSE);
				setState(54);
				statement();
				}
			}

			setState(57);
			match(TOKEN_IF_END);
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

	public static class While_statementContext extends ParserRuleContext {
		public TerminalNode TOKEN_WHILE() { return getToken(STLanguageParser.TOKEN_WHILE, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode TOKEN_DO() { return getToken(STLanguageParser.TOKEN_DO, 0); }
		public TerminalNode TOKEN_WHILE_END() { return getToken(STLanguageParser.TOKEN_WHILE_END, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public While_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_while_statement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).enterWhile_statement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).exitWhile_statement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof STLanguageVisitor ) return ((STLanguageVisitor<? extends T>)visitor).visitWhile_statement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final While_statementContext while_statement() throws RecognitionException {
		While_statementContext _localctx = new While_statementContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_while_statement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(59);
			match(TOKEN_WHILE);
			setState(60);
			expression(0);
			setState(61);
			match(TOKEN_DO);
			setState(63); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(62);
				statement();
				}
				}
				setState(65); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TOKEN_FOR) | (1L << TOKEN_WHILE) | (1L << TOKEN_IF) | (1L << TOKEN_OPEN_BRACE) | (1L << TOKEN_HEX_NUMBER) | (1L << TOKEN_DEC_NUMBER) | (1L << TOKEN_OCT_NUMBER) | (1L << TOKEN_BIN_NUMBER) | (1L << IDENTIFIER))) != 0) );
			setState(67);
			match(TOKEN_WHILE_END);
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

	public static class For_statementContext extends ParserRuleContext {
		public TerminalNode TOKEN_FOR() { return getToken(STLanguageParser.TOKEN_FOR, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode TOKEN_TO() { return getToken(STLanguageParser.TOKEN_TO, 0); }
		public TerminalNode TOKEN_DO() { return getToken(STLanguageParser.TOKEN_DO, 0); }
		public TerminalNode TOKEN_FOR_END() { return getToken(STLanguageParser.TOKEN_FOR_END, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public For_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_for_statement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).enterFor_statement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).exitFor_statement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof STLanguageVisitor ) return ((STLanguageVisitor<? extends T>)visitor).visitFor_statement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final For_statementContext for_statement() throws RecognitionException {
		For_statementContext _localctx = new For_statementContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_for_statement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(69);
			match(TOKEN_FOR);
			setState(70);
			expression(0);
			setState(71);
			match(TOKEN_TO);
			setState(72);
			expression(0);
			setState(73);
			match(TOKEN_DO);
			setState(75); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(74);
				statement();
				}
				}
				setState(77); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TOKEN_FOR) | (1L << TOKEN_WHILE) | (1L << TOKEN_IF) | (1L << TOKEN_OPEN_BRACE) | (1L << TOKEN_HEX_NUMBER) | (1L << TOKEN_DEC_NUMBER) | (1L << TOKEN_OCT_NUMBER) | (1L << TOKEN_BIN_NUMBER) | (1L << IDENTIFIER))) != 0) );
			setState(79);
			match(TOKEN_FOR_END);
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

	public static class ExpressionContext extends ParserRuleContext {
		public TerminalNode TOKEN_OPEN_BRACE() { return getToken(STLanguageParser.TOKEN_OPEN_BRACE, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode TOKEN_CLOSE_BRACE() { return getToken(STLanguageParser.TOKEN_CLOSE_BRACE, 0); }
		public TerminalNode IDENTIFIER() { return getToken(STLanguageParser.IDENTIFIER, 0); }
		public List<TerminalNode> TOKEN_ARG_SEP() { return getTokens(STLanguageParser.TOKEN_ARG_SEP); }
		public TerminalNode TOKEN_ARG_SEP(int i) {
			return getToken(STLanguageParser.TOKEN_ARG_SEP, i);
		}
		public ImmediateContext immediate() {
			return getRuleContext(ImmediateContext.class,0);
		}
		public Assign_operatorContext assign_operator() {
			return getRuleContext(Assign_operatorContext.class,0);
		}
		public Compare_operatorContext compare_operator() {
			return getRuleContext(Compare_operatorContext.class,0);
		}
		public Arith_operator_muldivContext arith_operator_muldiv() {
			return getRuleContext(Arith_operator_muldivContext.class,0);
		}
		public Arith_operator_addsubContext arith_operator_addsub() {
			return getRuleContext(Arith_operator_addsubContext.class,0);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).enterExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).exitExpression(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof STLanguageVisitor ) return ((STLanguageVisitor<? extends T>)visitor).visitExpression(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 10;
		enterRecursionRule(_localctx, 10, RULE_expression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(100);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				{
				setState(82);
				match(TOKEN_OPEN_BRACE);
				setState(83);
				expression(0);
				setState(84);
				match(TOKEN_CLOSE_BRACE);
				}
				break;
			case 2:
				{
				setState(86);
				match(IDENTIFIER);
				setState(87);
				match(TOKEN_OPEN_BRACE);
				setState(96);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TOKEN_OPEN_BRACE) | (1L << TOKEN_HEX_NUMBER) | (1L << TOKEN_DEC_NUMBER) | (1L << TOKEN_OCT_NUMBER) | (1L << TOKEN_BIN_NUMBER) | (1L << IDENTIFIER))) != 0)) {
					{
					setState(88);
					expression(0);
					setState(93);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==TOKEN_ARG_SEP) {
						{
						{
						setState(89);
						match(TOKEN_ARG_SEP);
						setState(90);
						expression(0);
						}
						}
						setState(95);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(98);
				match(TOKEN_CLOSE_BRACE);
				}
				break;
			case 3:
				{
				setState(99);
				immediate();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(120);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(118);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
					case 1:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(102);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(103);
						assign_operator();
						setState(104);
						expression(8);
						}
						break;
					case 2:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(106);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(107);
						compare_operator();
						setState(108);
						expression(7);
						}
						break;
					case 3:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(110);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(111);
						arith_operator_muldiv();
						setState(112);
						expression(6);
						}
						break;
					case 4:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(114);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(115);
						arith_operator_addsub();
						setState(116);
						expression(5);
						}
						break;
					}
					} 
				}
				setState(122);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Compare_operatorContext extends ParserRuleContext {
		public TerminalNode TOKEN_CMP_EQ() { return getToken(STLanguageParser.TOKEN_CMP_EQ, 0); }
		public TerminalNode TOKEN_CMP_GT_EQ() { return getToken(STLanguageParser.TOKEN_CMP_GT_EQ, 0); }
		public TerminalNode TOKEN_CMP_LT_EQ() { return getToken(STLanguageParser.TOKEN_CMP_LT_EQ, 0); }
		public TerminalNode TOKEN_CMP_GT() { return getToken(STLanguageParser.TOKEN_CMP_GT, 0); }
		public TerminalNode TOKEN_CMP_LT() { return getToken(STLanguageParser.TOKEN_CMP_LT, 0); }
		public Compare_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compare_operator; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).enterCompare_operator(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).exitCompare_operator(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof STLanguageVisitor ) return ((STLanguageVisitor<? extends T>)visitor).visitCompare_operator(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Compare_operatorContext compare_operator() throws RecognitionException {
		Compare_operatorContext _localctx = new Compare_operatorContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_compare_operator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(123);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TOKEN_CMP_EQ) | (1L << TOKEN_CMP_GT_EQ) | (1L << TOKEN_CMP_LT_EQ) | (1L << TOKEN_CMP_GT) | (1L << TOKEN_CMP_LT))) != 0)) ) {
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

	public static class Assign_operatorContext extends ParserRuleContext {
		public TerminalNode TOKEN_ASSIGN_RL() { return getToken(STLanguageParser.TOKEN_ASSIGN_RL, 0); }
		public TerminalNode TOKEN_ASSIGN_LR() { return getToken(STLanguageParser.TOKEN_ASSIGN_LR, 0); }
		public Assign_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assign_operator; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).enterAssign_operator(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).exitAssign_operator(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof STLanguageVisitor ) return ((STLanguageVisitor<? extends T>)visitor).visitAssign_operator(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Assign_operatorContext assign_operator() throws RecognitionException {
		Assign_operatorContext _localctx = new Assign_operatorContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_assign_operator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(125);
			_la = _input.LA(1);
			if ( !(_la==TOKEN_ASSIGN_RL || _la==TOKEN_ASSIGN_LR) ) {
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

	public static class Arith_operator_muldivContext extends ParserRuleContext {
		public TerminalNode TOKEN_MUL() { return getToken(STLanguageParser.TOKEN_MUL, 0); }
		public TerminalNode TOKEN_DIV() { return getToken(STLanguageParser.TOKEN_DIV, 0); }
		public Arith_operator_muldivContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arith_operator_muldiv; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).enterArith_operator_muldiv(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).exitArith_operator_muldiv(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof STLanguageVisitor ) return ((STLanguageVisitor<? extends T>)visitor).visitArith_operator_muldiv(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Arith_operator_muldivContext arith_operator_muldiv() throws RecognitionException {
		Arith_operator_muldivContext _localctx = new Arith_operator_muldivContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_arith_operator_muldiv);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(127);
			_la = _input.LA(1);
			if ( !(_la==TOKEN_MUL || _la==TOKEN_DIV) ) {
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

	public static class Arith_operator_addsubContext extends ParserRuleContext {
		public TerminalNode TOKEN_PLUS() { return getToken(STLanguageParser.TOKEN_PLUS, 0); }
		public TerminalNode TOKEN_MINUS() { return getToken(STLanguageParser.TOKEN_MINUS, 0); }
		public Arith_operator_addsubContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arith_operator_addsub; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).enterArith_operator_addsub(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).exitArith_operator_addsub(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof STLanguageVisitor ) return ((STLanguageVisitor<? extends T>)visitor).visitArith_operator_addsub(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Arith_operator_addsubContext arith_operator_addsub() throws RecognitionException {
		Arith_operator_addsubContext _localctx = new Arith_operator_addsubContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_arith_operator_addsub);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(129);
			_la = _input.LA(1);
			if ( !(_la==TOKEN_PLUS || _la==TOKEN_MINUS) ) {
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

	public static class ImmediateContext extends ParserRuleContext {
		public TerminalNode TOKEN_DEC_NUMBER() { return getToken(STLanguageParser.TOKEN_DEC_NUMBER, 0); }
		public TerminalNode TOKEN_HEX_NUMBER() { return getToken(STLanguageParser.TOKEN_HEX_NUMBER, 0); }
		public TerminalNode TOKEN_OCT_NUMBER() { return getToken(STLanguageParser.TOKEN_OCT_NUMBER, 0); }
		public TerminalNode TOKEN_BIN_NUMBER() { return getToken(STLanguageParser.TOKEN_BIN_NUMBER, 0); }
		public TerminalNode IDENTIFIER() { return getToken(STLanguageParser.IDENTIFIER, 0); }
		public ImmediateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_immediate; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).enterImmediate(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof STLanguageListener ) ((STLanguageListener)listener).exitImmediate(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof STLanguageVisitor ) return ((STLanguageVisitor<? extends T>)visitor).visitImmediate(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ImmediateContext immediate() throws RecognitionException {
		ImmediateContext _localctx = new ImmediateContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_immediate);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(131);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TOKEN_HEX_NUMBER) | (1L << TOKEN_DEC_NUMBER) | (1L << TOKEN_OCT_NUMBER) | (1L << TOKEN_BIN_NUMBER) | (1L << IDENTIFIER))) != 0)) ) {
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

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 5:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 7);
		case 1:
			return precpred(_ctx, 6);
		case 2:
			return precpred(_ctx, 5);
		case 3:
			return precpred(_ctx, 4);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3$\u0088\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\3\2\7\2\32\n\2\f\2\16\2\35\13\2\3\2\3\2\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\5\3\'\n\3\3\4\3\4\3\4\3\4\6\4-\n\4\r\4\16\4.\3\4\3\4\7\4\63\n\4"+
		"\f\4\16\4\66\13\4\3\4\3\4\5\4:\n\4\3\4\3\4\3\5\3\5\3\5\3\5\6\5B\n\5\r"+
		"\5\16\5C\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\6\6N\n\6\r\6\16\6O\3\6\3\6\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\7\7^\n\7\f\7\16\7a\13\7\5\7c\n"+
		"\7\3\7\3\7\5\7g\n\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\7\7\7y\n\7\f\7\16\7|\13\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3"+
		"\13\3\f\3\f\3\f\2\3\f\r\2\4\6\b\n\f\16\20\22\24\26\2\7\3\2\6\n\3\2\4\5"+
		"\3\2 !\3\2\36\37\4\2\32\35$$\2\u008d\2\33\3\2\2\2\4&\3\2\2\2\6(\3\2\2"+
		"\2\b=\3\2\2\2\nG\3\2\2\2\ff\3\2\2\2\16}\3\2\2\2\20\177\3\2\2\2\22\u0081"+
		"\3\2\2\2\24\u0083\3\2\2\2\26\u0085\3\2\2\2\30\32\5\4\3\2\31\30\3\2\2\2"+
		"\32\35\3\2\2\2\33\31\3\2\2\2\33\34\3\2\2\2\34\36\3\2\2\2\35\33\3\2\2\2"+
		"\36\37\7\2\2\3\37\3\3\2\2\2 \'\5\6\4\2!\'\5\b\5\2\"\'\5\n\6\2#$\5\f\7"+
		"\2$%\7#\2\2%\'\3\2\2\2& \3\2\2\2&!\3\2\2\2&\"\3\2\2\2&#\3\2\2\2\'\5\3"+
		"\2\2\2()\7\21\2\2)*\5\f\7\2*,\7\22\2\2+-\5\4\3\2,+\3\2\2\2-.\3\2\2\2."+
		",\3\2\2\2./\3\2\2\2/\64\3\2\2\2\60\61\7\23\2\2\61\63\5\4\3\2\62\60\3\2"+
		"\2\2\63\66\3\2\2\2\64\62\3\2\2\2\64\65\3\2\2\2\659\3\2\2\2\66\64\3\2\2"+
		"\2\678\7\24\2\28:\5\4\3\29\67\3\2\2\29:\3\2\2\2:;\3\2\2\2;<\7\25\2\2<"+
		"\7\3\2\2\2=>\7\r\2\2>?\5\f\7\2?A\7\16\2\2@B\5\4\3\2A@\3\2\2\2BC\3\2\2"+
		"\2CA\3\2\2\2CD\3\2\2\2DE\3\2\2\2EF\7\20\2\2F\t\3\2\2\2GH\7\13\2\2HI\5"+
		"\f\7\2IJ\7\17\2\2JK\5\f\7\2KM\7\16\2\2LN\5\4\3\2ML\3\2\2\2NO\3\2\2\2O"+
		"M\3\2\2\2OP\3\2\2\2PQ\3\2\2\2QR\7\f\2\2R\13\3\2\2\2ST\b\7\1\2TU\7\30\2"+
		"\2UV\5\f\7\2VW\7\31\2\2Wg\3\2\2\2XY\7$\2\2Yb\7\30\2\2Z_\5\f\7\2[\\\7\""+
		"\2\2\\^\5\f\7\2][\3\2\2\2^a\3\2\2\2_]\3\2\2\2_`\3\2\2\2`c\3\2\2\2a_\3"+
		"\2\2\2bZ\3\2\2\2bc\3\2\2\2cd\3\2\2\2dg\7\31\2\2eg\5\26\f\2fS\3\2\2\2f"+
		"X\3\2\2\2fe\3\2\2\2gz\3\2\2\2hi\f\t\2\2ij\5\20\t\2jk\5\f\7\nky\3\2\2\2"+
		"lm\f\b\2\2mn\5\16\b\2no\5\f\7\toy\3\2\2\2pq\f\7\2\2qr\5\22\n\2rs\5\f\7"+
		"\bsy\3\2\2\2tu\f\6\2\2uv\5\24\13\2vw\5\f\7\7wy\3\2\2\2xh\3\2\2\2xl\3\2"+
		"\2\2xp\3\2\2\2xt\3\2\2\2y|\3\2\2\2zx\3\2\2\2z{\3\2\2\2{\r\3\2\2\2|z\3"+
		"\2\2\2}~\t\2\2\2~\17\3\2\2\2\177\u0080\t\3\2\2\u0080\21\3\2\2\2\u0081"+
		"\u0082\t\4\2\2\u0082\23\3\2\2\2\u0083\u0084\t\5\2\2\u0084\25\3\2\2\2\u0085"+
		"\u0086\t\6\2\2\u0086\27\3\2\2\2\16\33&.\649CO_bfxz";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
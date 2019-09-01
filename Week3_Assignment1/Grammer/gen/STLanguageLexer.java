// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer\STLanguage.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class STLanguageLexer extends Lexer {
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
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"WS", "TOKEN_ASSIGN_RL", "TOKEN_ASSIGN_LR", "TOKEN_CMP_EQ", "TOKEN_CMP_GT_EQ", 
			"TOKEN_CMP_LT_EQ", "TOKEN_CMP_GT", "TOKEN_CMP_LT", "TOKEN_FOR", "TOKEN_FOR_END", 
			"TOKEN_WHILE", "TOKEN_DO", "TOKEN_TO", "TOKEN_WHILE_END", "TOKEN_IF", 
			"TOKEN_IF_THEN", "TOKEN_IF_ELIF", "TOKEN_IF_ELSE", "TOKEN_IF_END", "TOKEN_SELECT", 
			"TOKEN_SELECT_END", "TOKEN_OPEN_BRACE", "TOKEN_CLOSE_BRACE", "TOKEN_HEX_NUMBER", 
			"TOKEN_DEC_NUMBER", "TOKEN_OCT_NUMBER", "TOKEN_BIN_NUMBER", "TOKEN_PLUS", 
			"TOKEN_MINUS", "TOKEN_MUL", "TOKEN_DIV", "TOKEN_ARG_SEP", "STATEMENT_SEPARATOR", 
			"IDENTIFIER", "HEX_NUMBER", "DEC_NUMBER", "OCT_NUMBER", "BIN_NUMBER", 
			"HEX_PREFIX", "DEC_PREFIX", "OCT_PREFIX", "BIN_PREFIX", "DEC_DIGIT", 
			"HEX_DIGIT", "OCT_DIGIT", "BIN_DIGIT", "GT", "LT", "EQUAL", "OPEN_BLACE", 
			"CLOSE_BLACE", "USCORE", "PLUS", "MINUS", "COMMA", "ESC_QUOTE", "DOLLAR", 
			"SINGLE_QUOTE", "COLLON", "ATMARK", "SHARP", "SLASH", "BAR", "AND", "HAT", 
			"SEMICOLLON", "ASTERISK", "QUOTE", "DOT", "ALPHABETS", "A", "B", "C", 
			"D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", 
			"R", "S", "T", "U", "V", "W", "X", "Y", "Z"
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


	public STLanguageLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "STLanguage.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2$\u01e4\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\tS\4T\tT"+
		"\4U\tU\4V\tV\4W\tW\4X\tX\4Y\tY\4Z\tZ\4[\t[\4\\\t\\\4]\t]\4^\t^\4_\t_\4"+
		"`\t`\4a\ta\3\2\6\2\u00c5\n\2\r\2\16\2\u00c6\3\2\3\2\3\3\3\3\3\3\3\4\3"+
		"\4\3\4\3\5\3\5\3\6\3\6\3\6\3\7\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\n\3\n"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3"+
		"\r\3\r\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\20\3\20\3\20\3\21\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22"+
		"\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\25\3\25"+
		"\3\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26"+
		"\3\26\3\26\3\27\3\27\3\30\3\30\3\31\3\31\3\31\3\32\3\32\3\32\3\32\3\32"+
		"\5\32\u0137\n\32\3\32\5\32\u013a\n\32\3\33\3\33\3\33\3\34\3\34\3\34\3"+
		"\35\3\35\3\36\3\36\3\37\3\37\3 \3 \3!\3!\3\"\3\"\3#\3#\3#\3#\6#\u0152"+
		"\n#\r#\16#\u0153\3$\6$\u0157\n$\r$\16$\u0158\3%\6%\u015c\n%\r%\16%\u015d"+
		"\3&\6&\u0161\n&\r&\16&\u0162\3\'\6\'\u0166\n\'\r\'\16\'\u0167\3(\3(\3"+
		"(\3(\3)\3)\3)\3)\3*\3*\3*\3+\3+\3+\3,\3,\3-\3-\3.\3.\3/\3/\3\60\3\60\3"+
		"\61\3\61\3\62\3\62\3\63\3\63\3\64\3\64\3\65\3\65\3\66\3\66\3\67\3\67\3"+
		"8\38\39\39\39\3:\3:\3;\3;\3<\3<\3=\3=\3>\3>\3?\3?\3@\3@\3A\3A\3B\3B\3"+
		"C\3C\3D\3D\3E\3E\3F\3F\3G\3G\3H\3H\3I\3I\3J\3J\3K\3K\3L\3L\3M\3M\3N\3"+
		"N\3O\3O\3P\3P\3Q\3Q\3R\3R\3S\3S\3T\3T\3U\3U\3V\3V\3W\3W\3X\3X\3Y\3Y\3"+
		"Z\3Z\3[\3[\3\\\3\\\3]\3]\3^\3^\3_\3_\3`\3`\3a\3a\2\2b\3\3\5\4\7\5\t\6"+
		"\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24"+
		"\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C#E$G\2I\2"+
		"K\2M\2O\2Q\2S\2U\2W\2Y\2[\2]\2_\2a\2c\2e\2g\2i\2k\2m\2o\2q\2s\2u\2w\2"+
		"y\2{\2}\2\177\2\u0081\2\u0083\2\u0085\2\u0087\2\u0089\2\u008b\2\u008d"+
		"\2\u008f\2\u0091\2\u0093\2\u0095\2\u0097\2\u0099\2\u009b\2\u009d\2\u009f"+
		"\2\u00a1\2\u00a3\2\u00a5\2\u00a7\2\u00a9\2\u00ab\2\u00ad\2\u00af\2\u00b1"+
		"\2\u00b3\2\u00b5\2\u00b7\2\u00b9\2\u00bb\2\u00bd\2\u00bf\2\u00c1\2\3\2"+
		"!\4\2\13\f\"\"\3\2\62;\5\2\62;CHch\3\2\629\4\2C\\c|\4\2CCcc\4\2DDdd\4"+
		"\2EEee\4\2FFff\4\2GGgg\4\2HHhh\4\2IIii\4\2JJjj\4\2KKkk\4\2LLll\4\2MMm"+
		"m\4\2NNnn\4\2OOoo\4\2PPpp\4\2QQqq\4\2RRrr\4\2SSss\4\2TTtt\4\2UUuu\4\2"+
		"VVvv\4\2WWww\4\2XXxx\4\2YYyy\4\2ZZzz\4\2[[{{\4\2\\\\||\2\u01b0\2\3\3\2"+
		"\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17"+
		"\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2"+
		"\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3"+
		"\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3"+
		"\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2"+
		"=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\3\u00c4\3\2\2\2"+
		"\5\u00ca\3\2\2\2\7\u00cd\3\2\2\2\t\u00d0\3\2\2\2\13\u00d2\3\2\2\2\r\u00d5"+
		"\3\2\2\2\17\u00d8\3\2\2\2\21\u00da\3\2\2\2\23\u00dc\3\2\2\2\25\u00e0\3"+
		"\2\2\2\27\u00e8\3\2\2\2\31\u00ee\3\2\2\2\33\u00f1\3\2\2\2\35\u00f4\3\2"+
		"\2\2\37\u00fe\3\2\2\2!\u0101\3\2\2\2#\u0106\3\2\2\2%\u010c\3\2\2\2\'\u0111"+
		"\3\2\2\2)\u0118\3\2\2\2+\u011f\3\2\2\2-\u012a\3\2\2\2/\u012c\3\2\2\2\61"+
		"\u012e\3\2\2\2\63\u0139\3\2\2\2\65\u013b\3\2\2\2\67\u013e\3\2\2\29\u0141"+
		"\3\2\2\2;\u0143\3\2\2\2=\u0145\3\2\2\2?\u0147\3\2\2\2A\u0149\3\2\2\2C"+
		"\u014b\3\2\2\2E\u014d\3\2\2\2G\u0156\3\2\2\2I\u015b\3\2\2\2K\u0160\3\2"+
		"\2\2M\u0165\3\2\2\2O\u0169\3\2\2\2Q\u016d\3\2\2\2S\u0171\3\2\2\2U\u0174"+
		"\3\2\2\2W\u0177\3\2\2\2Y\u0179\3\2\2\2[\u017b\3\2\2\2]\u017d\3\2\2\2_"+
		"\u017f\3\2\2\2a\u0181\3\2\2\2c\u0183\3\2\2\2e\u0185\3\2\2\2g\u0187\3\2"+
		"\2\2i\u0189\3\2\2\2k\u018b\3\2\2\2m\u018d\3\2\2\2o\u018f\3\2\2\2q\u0191"+
		"\3\2\2\2s\u0194\3\2\2\2u\u0196\3\2\2\2w\u0198\3\2\2\2y\u019a\3\2\2\2{"+
		"\u019c\3\2\2\2}\u019e\3\2\2\2\177\u01a0\3\2\2\2\u0081\u01a2\3\2\2\2\u0083"+
		"\u01a4\3\2\2\2\u0085\u01a6\3\2\2\2\u0087\u01a8\3\2\2\2\u0089\u01aa\3\2"+
		"\2\2\u008b\u01ac\3\2\2\2\u008d\u01ae\3\2\2\2\u008f\u01b0\3\2\2\2\u0091"+
		"\u01b2\3\2\2\2\u0093\u01b4\3\2\2\2\u0095\u01b6\3\2\2\2\u0097\u01b8\3\2"+
		"\2\2\u0099\u01ba\3\2\2\2\u009b\u01bc\3\2\2\2\u009d\u01be\3\2\2\2\u009f"+
		"\u01c0\3\2\2\2\u00a1\u01c2\3\2\2\2\u00a3\u01c4\3\2\2\2\u00a5\u01c6\3\2"+
		"\2\2\u00a7\u01c8\3\2\2\2\u00a9\u01ca\3\2\2\2\u00ab\u01cc\3\2\2\2\u00ad"+
		"\u01ce\3\2\2\2\u00af\u01d0\3\2\2\2\u00b1\u01d2\3\2\2\2\u00b3\u01d4\3\2"+
		"\2\2\u00b5\u01d6\3\2\2\2\u00b7\u01d8\3\2\2\2\u00b9\u01da\3\2\2\2\u00bb"+
		"\u01dc\3\2\2\2\u00bd\u01de\3\2\2\2\u00bf\u01e0\3\2\2\2\u00c1\u01e2\3\2"+
		"\2\2\u00c3\u00c5\t\2\2\2\u00c4\u00c3\3\2\2\2\u00c5\u00c6\3\2\2\2\u00c6"+
		"\u00c4\3\2\2\2\u00c6\u00c7\3\2\2\2\u00c7\u00c8\3\2\2\2\u00c8\u00c9\b\2"+
		"\2\2\u00c9\4\3\2\2\2\u00ca\u00cb\5w<\2\u00cb\u00cc\5c\62\2\u00cc\6\3\2"+
		"\2\2\u00cd\u00ce\5c\62\2\u00ce\u00cf\5_\60\2\u00cf\b\3\2\2\2\u00d0\u00d1"+
		"\5c\62\2\u00d1\n\3\2\2\2\u00d2\u00d3\5_\60\2\u00d3\u00d4\5c\62\2\u00d4"+
		"\f\3\2\2\2\u00d5\u00d6\5a\61\2\u00d6\u00d7\5c\62\2\u00d7\16\3\2\2\2\u00d8"+
		"\u00d9\5_\60\2\u00d9\20\3\2\2\2\u00da\u00db\5a\61\2\u00db\22\3\2\2\2\u00dc"+
		"\u00dd\7H\2\2\u00dd\u00de\7Q\2\2\u00de\u00df\7T\2\2\u00df\24\3\2\2\2\u00e0"+
		"\u00e1\7G\2\2\u00e1\u00e2\7P\2\2\u00e2\u00e3\7F\2\2\u00e3\u00e4\7a\2\2"+
		"\u00e4\u00e5\7H\2\2\u00e5\u00e6\7Q\2\2\u00e6\u00e7\7T\2\2\u00e7\26\3\2"+
		"\2\2\u00e8\u00e9\7Y\2\2\u00e9\u00ea\7J\2\2\u00ea\u00eb\7K\2\2\u00eb\u00ec"+
		"\7N\2\2\u00ec\u00ed\7G\2\2\u00ed\30\3\2\2\2\u00ee\u00ef\7F\2\2\u00ef\u00f0"+
		"\7Q\2\2\u00f0\32\3\2\2\2\u00f1\u00f2\7V\2\2\u00f2\u00f3\7Q\2\2\u00f3\34"+
		"\3\2\2\2\u00f4\u00f5\7G\2\2\u00f5\u00f6\7P\2\2\u00f6\u00f7\7F\2\2\u00f7"+
		"\u00f8\7a\2\2\u00f8\u00f9\7Y\2\2\u00f9\u00fa\7J\2\2\u00fa\u00fb\7K\2\2"+
		"\u00fb\u00fc\7N\2\2\u00fc\u00fd\7G\2\2\u00fd\36\3\2\2\2\u00fe\u00ff\7"+
		"K\2\2\u00ff\u0100\7H\2\2\u0100 \3\2\2\2\u0101\u0102\7V\2\2\u0102\u0103"+
		"\7J\2\2\u0103\u0104\7G\2\2\u0104\u0105\7P\2\2\u0105\"\3\2\2\2\u0106\u0107"+
		"\7G\2\2\u0107\u0108\7N\2\2\u0108\u0109\7U\2\2\u0109\u010a\7K\2\2\u010a"+
		"\u010b\7H\2\2\u010b$\3\2\2\2\u010c\u010d\7G\2\2\u010d\u010e\7N\2\2\u010e"+
		"\u010f\7U\2\2\u010f\u0110\7G\2\2\u0110&\3\2\2\2\u0111\u0112\7G\2\2\u0112"+
		"\u0113\7P\2\2\u0113\u0114\7F\2\2\u0114\u0115\7a\2\2\u0115\u0116\7K\2\2"+
		"\u0116\u0117\7H\2\2\u0117(\3\2\2\2\u0118\u0119\7U\2\2\u0119\u011a\7G\2"+
		"\2\u011a\u011b\7N\2\2\u011b\u011c\7G\2\2\u011c\u011d\7E\2\2\u011d\u011e"+
		"\7V\2\2\u011e*\3\2\2\2\u011f\u0120\7G\2\2\u0120\u0121\7P\2\2\u0121\u0122"+
		"\7F\2\2\u0122\u0123\7a\2\2\u0123\u0124\7U\2\2\u0124\u0125\7G\2\2\u0125"+
		"\u0126\7N\2\2\u0126\u0127\7G\2\2\u0127\u0128\7E\2\2\u0128\u0129\7V\2\2"+
		"\u0129,\3\2\2\2\u012a\u012b\5e\63\2\u012b.\3\2\2\2\u012c\u012d\5g\64\2"+
		"\u012d\60\3\2\2\2\u012e\u012f\5O(\2\u012f\u0130\5G$\2\u0130\62\3\2\2\2"+
		"\u0131\u0132\5Q)\2\u0132\u0133\5I%\2\u0133\u013a\3\2\2\2\u0134\u0137\5"+
		"k\66\2\u0135\u0137\5m\67\2\u0136\u0134\3\2\2\2\u0136\u0135\3\2\2\2\u0136"+
		"\u0137\3\2\2\2\u0137\u0138\3\2\2\2\u0138\u013a\5I%\2\u0139\u0131\3\2\2"+
		"\2\u0139\u0136\3\2\2\2\u013a\64\3\2\2\2\u013b\u013c\5S*\2\u013c\u013d"+
		"\5K&\2\u013d\66\3\2\2\2\u013e\u013f\5U+\2\u013f\u0140\5M\'\2\u01408\3"+
		"\2\2\2\u0141\u0142\5k\66\2\u0142:\3\2\2\2\u0143\u0144\5m\67\2\u0144<\3"+
		"\2\2\2\u0145\u0146\5\u0087D\2\u0146>\3\2\2\2\u0147\u0148\5}?\2\u0148@"+
		"\3\2\2\2\u0149\u014a\5o8\2\u014aB\3\2\2\2\u014b\u014c\5\u0085C\2\u014c"+
		"D\3\2\2\2\u014d\u0151\5\u008dG\2\u014e\u0152\5W,\2\u014f\u0152\5\u008d"+
		"G\2\u0150\u0152\7a\2\2\u0151\u014e\3\2\2\2\u0151\u014f\3\2\2\2\u0151\u0150"+
		"\3\2\2\2\u0152\u0153\3\2\2\2\u0153\u0151\3\2\2\2\u0153\u0154\3\2\2\2\u0154"+
		"F\3\2\2\2\u0155\u0157\5Y-\2\u0156\u0155\3\2\2\2\u0157\u0158\3\2\2\2\u0158"+
		"\u0156\3\2\2\2\u0158\u0159\3\2\2\2\u0159H\3\2\2\2\u015a\u015c\5W,\2\u015b"+
		"\u015a\3\2\2\2\u015c\u015d\3\2\2\2\u015d\u015b\3\2\2\2\u015d\u015e\3\2"+
		"\2\2\u015eJ\3\2\2\2\u015f\u0161\5[.\2\u0160\u015f\3\2\2\2\u0161\u0162"+
		"\3\2\2\2\u0162\u0160\3\2\2\2\u0162\u0163\3\2\2\2\u0163L\3\2\2\2\u0164"+
		"\u0166\5]/\2\u0165\u0164\3\2\2\2\u0166\u0167\3\2\2\2\u0167\u0165\3\2\2"+
		"\2\u0167\u0168\3\2\2\2\u0168N\3\2\2\2\u0169\u016a\7\63\2\2\u016a\u016b"+
		"\78\2\2\u016b\u016c\7%\2\2\u016cP\3\2\2\2\u016d\u016e\7\63\2\2\u016e\u016f"+
		"\7\62\2\2\u016f\u0170\7%\2\2\u0170R\3\2\2\2\u0171\u0172\7:\2\2\u0172\u0173"+
		"\7%\2\2\u0173T\3\2\2\2\u0174\u0175\7\64\2\2\u0175\u0176\7%\2\2\u0176V"+
		"\3\2\2\2\u0177\u0178\t\3\2\2\u0178X\3\2\2\2\u0179\u017a\t\4\2\2\u017a"+
		"Z\3\2\2\2\u017b\u017c\t\5\2\2\u017c\\\3\2\2\2\u017d\u017e\4\62\63\2\u017e"+
		"^\3\2\2\2\u017f\u0180\7@\2\2\u0180`\3\2\2\2\u0181\u0182\7>\2\2\u0182b"+
		"\3\2\2\2\u0183\u0184\7?\2\2\u0184d\3\2\2\2\u0185\u0186\7*\2\2\u0186f\3"+
		"\2\2\2\u0187\u0188\7+\2\2\u0188h\3\2\2\2\u0189\u018a\7a\2\2\u018aj\3\2"+
		"\2\2\u018b\u018c\7-\2\2\u018cl\3\2\2\2\u018d\u018e\7/\2\2\u018en\3\2\2"+
		"\2\u018f\u0190\7.\2\2\u0190p\3\2\2\2\u0191\u0192\5\u0089E\2\u0192\u0193"+
		"\5\u0089E\2\u0193r\3\2\2\2\u0194\u0195\7&\2\2\u0195t\3\2\2\2\u0196\u0197"+
		"\7)\2\2\u0197v\3\2\2\2\u0198\u0199\7<\2\2\u0199x\3\2\2\2\u019a\u019b\7"+
		"B\2\2\u019bz\3\2\2\2\u019c\u019d\7%\2\2\u019d|\3\2\2\2\u019e\u019f\7\61"+
		"\2\2\u019f~\3\2\2\2\u01a0\u01a1\7~\2\2\u01a1\u0080\3\2\2\2\u01a2\u01a3"+
		"\7(\2\2\u01a3\u0082\3\2\2\2\u01a4\u01a5\7`\2\2\u01a5\u0084\3\2\2\2\u01a6"+
		"\u01a7\7=\2\2\u01a7\u0086\3\2\2\2\u01a8\u01a9\7,\2\2\u01a9\u0088\3\2\2"+
		"\2\u01aa\u01ab\7$\2\2\u01ab\u008a\3\2\2\2\u01ac\u01ad\7\60\2\2\u01ad\u008c"+
		"\3\2\2\2\u01ae\u01af\t\6\2\2\u01af\u008e\3\2\2\2\u01b0\u01b1\t\7\2\2\u01b1"+
		"\u0090\3\2\2\2\u01b2\u01b3\t\b\2\2\u01b3\u0092\3\2\2\2\u01b4\u01b5\t\t"+
		"\2\2\u01b5\u0094\3\2\2\2\u01b6\u01b7\t\n\2\2\u01b7\u0096\3\2\2\2\u01b8"+
		"\u01b9\t\13\2\2\u01b9\u0098\3\2\2\2\u01ba\u01bb\t\f\2\2\u01bb\u009a\3"+
		"\2\2\2\u01bc\u01bd\t\r\2\2\u01bd\u009c\3\2\2\2\u01be\u01bf\t\16\2\2\u01bf"+
		"\u009e\3\2\2\2\u01c0\u01c1\t\17\2\2\u01c1\u00a0\3\2\2\2\u01c2\u01c3\t"+
		"\20\2\2\u01c3\u00a2\3\2\2\2\u01c4\u01c5\t\21\2\2\u01c5\u00a4\3\2\2\2\u01c6"+
		"\u01c7\t\22\2\2\u01c7\u00a6\3\2\2\2\u01c8\u01c9\t\23\2\2\u01c9\u00a8\3"+
		"\2\2\2\u01ca\u01cb\t\24\2\2\u01cb\u00aa\3\2\2\2\u01cc\u01cd\t\25\2\2\u01cd"+
		"\u00ac\3\2\2\2\u01ce\u01cf\t\26\2\2\u01cf\u00ae\3\2\2\2\u01d0\u01d1\t"+
		"\27\2\2\u01d1\u00b0\3\2\2\2\u01d2\u01d3\t\30\2\2\u01d3\u00b2\3\2\2\2\u01d4"+
		"\u01d5\t\31\2\2\u01d5\u00b4\3\2\2\2\u01d6\u01d7\t\32\2\2\u01d7\u00b6\3"+
		"\2\2\2\u01d8\u01d9\t\33\2\2\u01d9\u00b8\3\2\2\2\u01da\u01db\t\34\2\2\u01db"+
		"\u00ba\3\2\2\2\u01dc\u01dd\t\35\2\2\u01dd\u00bc\3\2\2\2\u01de\u01df\t"+
		"\36\2\2\u01df\u00be\3\2\2\2\u01e0\u01e1\t\37\2\2\u01e1\u00c0\3\2\2\2\u01e2"+
		"\u01e3\t \2\2\u01e3\u00c2\3\2\2\2\f\2\u00c6\u0136\u0139\u0151\u0153\u0158"+
		"\u015d\u0162\u0167\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
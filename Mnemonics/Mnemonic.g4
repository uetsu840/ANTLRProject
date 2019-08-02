grammar Mnemonic;

input
    : (mnemonic? NEWLINE)* mnemonic? EOF
    ;

mnemonic
    : separator* (instruction (separator operand)* separator* NEWLINE?)
    ;

separator
    : SEPARATOR
    ;

/* 命令語 */
instruction
    : IDENTIFIER
    | IDENTIFIER suffix
    | IDENTIFIER arith_operator suffix?
    ;

arith_operator         //算術演算オペレータ
    : ARITH_PLUS
    | ARITH_MINUS
    | MUL_OP_REF
    | ARITH_DIV
    | ARITH_EQ
    | ARITH_LT
    | ARITH_GT
    | ARITH_RSHIFT
    | ARITH_LSHIFT
    | ARITH_AND
    | ARITH_OR
    | ARITH_XOR
    ;

suffix
    : DOT_SUFFIX
    ;

/* オペランド */
operand: device
    | immediate
    | OPERAND_UNDEFINED                             //???
    ;

/* デバイス、ラベル */
device
    : device_old_indirect                           // #TM10
    | device_normal                                 // *@DM0, DM10.0
    ;

device_old_indirect     //旧間接参照
    : OLD_INDIRECT
    ;

device_normal           // デバイス
    : device_content
    | device_content ROPERATOR_INDEX index_value    // *@DM10:Z1, *@DM10:K10
    | device_wbit                                   // @DM10.0
    ;

device_wbit             // デバイス(ワード中ビット)
    : device_content bitpos                         // DM10.0
    ;

device_content          // デバイス(通常)
    : device_raw
    | reference_operator device_raw                 // @DM0, *@DM10, DM10
    ;

device_raw              // デバイス(生)
    : IDENTIFIER
    | (scope IDENTIFIER)                           // DM0, @DM0
    ;

index_value             // インデックス修飾
    : IMM_DEC_NUMBER
    | IMM_HEX_NUMBER
    | device_content                               // インデックス修飾
    ;

bitpos                  // ワード中ビットのビット位置
    : DOT_SEGMENT
    ;

scope                   // スコープ演算子(間接参照)
    : SCOPE_LOCAL
    ;

reference_operator      // 間接参照演算子
    : MUL_OP_REF
    ;

/* 即値 */
immediate               // 即値
    : int_immediate
    | fp_immediate
    | str_immediate
    ;

int_immediate
    : IMM_DEC_NUMBER
    | IMM_HEX_NUMBER
    ;

fp_immediate
    : FP_DECIMAL
    | FP_EXPONENTIAL
    | DOT_SEGMENT
    ;

str_immediate
    : STRING_IMMEDIATE
    ;

/* 部分マッチする字句 */
DOT_SEGMENT     : DOT DEC_NUMBER;           // .1 (ワード中ビット、浮動小数点即値、浮動小数点の一部)
DOT_SUFFIX      : DOT ALPHABETS ALPHABETS?; // サフィックス
ROPERATOR_INDEX : COLLON;
SCOPE_LOCAL     : ATMARK;
MUL_OP_REF      : ASTERISK;                  // * (乗算なのか間接参照なのかは構文で判定する)
ARITH_PLUS      : PLUS;
ARITH_MINUS     : MINUS;
ARITH_DIV       : SLASH;
ARITH_EQ        : EQUAL;
ARITH_LT        : '<';
ARITH_GT        : '>';
ARITH_RSHIFT    : '>>';
ARITH_LSHIFT    : '<<';
ARITH_OR        : BAR;
ARITH_AND       : AND;
ARITH_XOR       : HAT;

PREFIX_OLD_INDIRECT : SHARP;
DEV_TM          : T M;

DEC_NUMBER      : DEC_DIGIT+;

/* 改行・セパレータ */
NEWLINE         : ('\r'|'\n');
SEPARATOR       : (' ' | '\t')+;

/* 単独でidentifierにマッチする字句 */
OPERAND_UNDEFINED                           // 未定義オペランド
    : '???';
STRING_IMMEDIATE                            // 文字列即値
    : QUOTE (~["] | ESC_QUOTE)* QUOTE;
FP_EXPONENTIAL                              // 指数形式浮動小数点即値
    : DECIMAL_HEAD? SIGN? DEC_DIGIT* DOT DEC_DIGIT *E SIGN DEC_DIGIT+;
FP_DECIMAL                                  // 浮動小数点即値
    : DECIMAL_HEAD? SIGN? DEC_DIGIT* DOT DEC_DIGIT+;
IMM_DEC_NUMBER                              // 10進即値
    : DECIMAL_HEAD [-]? DEC_DIGIT+;
IMM_HEX_NUMBER                              // 16進即値
    : HEX_HEAD HEX_DIGIT+;
OLD_INDIRECT                                // 旧間接参照 (#TM)
    : PREFIX_OLD_INDIRECT DEV_TM DEC_NUMBER;
IDENTIFIER
    : (DEC_DIGIT | ALPHABETS | '_')+;

fragment SIGN                               // 符号
    : PLUS | MINUS;
fragment DECIMAL_HEAD                       // 10進即値の頭文字
    : K | SHARP;
fragment HEX_HEAD                           // 16進即値の頭文字
    : H | DOLLAR;
fragment EQUAL          : '=';
fragment PLUS           : '+';
fragment MINUS          : '-';
fragment DEC_DIGIT      : [0-9];
fragment HEX_DIGIT      : [0-9A-F];
fragment ESC_QUOTE      : QUOTE QUOTE;
fragment DOLLAR         : '$';
fragment SINGLE_QUOTE   : '\'';
fragment COLLON         : ':';
fragment ATMARK         : '@';
fragment SHARP          : '#';
fragment SLASH          : '/';
fragment BAR            : '|';
fragment AND            : '&';
fragment HAT            : '^';
fragment SEMICOLLON     : ';';
fragment ASTERISK       : '*';
fragment QUOTE          : '"';
fragment DOT            : '.';
fragment ALPHABETS      : [a-zA-Z];
fragment A: [Aa];
fragment B: [Bb];
fragment C: [Cc];
fragment D: [Dd];
fragment E: [Ee];
fragment F: [Ff];
fragment G: [Gg];
fragment H: [Hh];
fragment I: [Ii];
fragment J: [Jj];
fragment K: [Kk];
fragment L: [Ll];
fragment M: [Mm];
fragment N: [Nn];
fragment O: [Oo];
fragment P: [Pp];
fragment Q: [Qq];
fragment R: [Rr];
fragment S: [Ss];
fragment T: [Tt];
fragment U: [Uu];
fragment V: [Vv];
fragment W: [Ww];
fragment X: [Xx];
fragment Y: [Yy];
fragment Z: [Zz];

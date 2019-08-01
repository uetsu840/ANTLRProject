grammar KVMnemonic;

input: file EOF;
file: (empty_line | mnemonic)+;
empty_line: separator* NEWLINE;
mnemonic: separator* (instruction (separator operand)* separator* NEWLINE?);
separator: SEPARATOR;

// 命令語
instruction: IDENTIFIER | IDENTIFIER suffix | IDENTIFIER calc_operator suffix;
calc_operator: ARITH_OPERATOR;

// オペランド
operand: device
        | int_immediate
        | fp_immediate
        | str_immediate
        | OPERAND_UNDEFINED;            //???

// デバイス、ラベル
device: device_old_indirect
        | device_normal;                // *@DM0, DM10.0
device_old_indirect: OLD_INDIRECT;
device_normal: device_content
                | device_content ROPERATOR_INDEX index_value    // *@DM10:Z1, *@DM10:K10
                | device_wbit;                                  // @DM10.0
device_wbit: device_content bitpos;                             // DM10.0
device_content: device_raw | (reference_operator device_raw);   // @DM0, *@DM10, DM10
device_raw: IDENTIFIER | (scope IDENTIFIER);                    // DM0, @DM0
index_value: (DEC_NUMBER | HEX_NUMBER | device_content);        // インデックス修飾
bitpos: DOT_SEGMENT;
scope: SCOPE_LOCAL;
reference_operator: MUL_OP_REF;

// 即値
str_immediate: STRING_IMMEDIATE;
int_immediate:  DEC_NUMBER | HEX_NUMBER;
fp_immediate: FP_DECIMAL | FP_EXPONENTIAL | DOT_SEGMENT;
suffix: DOT_SUFFIX;

/* 部分マッチする字句 */
DOT_SEGMENT: DOT NUMBER;
DOT_SUFFIX: DOT(D | L |  S | U | F | D F);
ARITH_OPERATOR: PLUS | MINUS | MUL_OP_REF | DIV | EQ | LT | GT | RSHIFT | LSHIFT;
ROPERATOR_INDEX: COLLON;
SCOPE_LOCAL: ATMARK;
MUL_OP_REF: ASTERISK;
PREFIX_OLD_INDIRECT: SHARP;
DEV_TM: T M;
NUMBER: [0-9]+;

/* 改行・セパレータ */
NEWLINE: ('\r'|'\n');
SEPARATOR: (' ' | '\t')+;

/* 単独でidentifierにマッチする字句 */
OPERAND_UNDEFINED: '???';
STRING_IMMEDIATE:  QUOTE (~["] | ESC_QUOTE)* QUOTE;
FP_EXPONENTIAL: [#K]?[+-]*[0-9]*DOT[0-9]*E[+-]*[0-9]+;
FP_DECIMAL: [#K]?[+-]*[0-9]*DOT[0-9]+;
DEC_NUMBER: [K#][-]?[0-9]+;
HEX_NUMBER: [H$][-]?[0-9A-F]+;
OLD_INDIRECT: PREFIX_OLD_INDIRECT DEV_TM NUMBER;
IDENTIFIER: [0-9a-zA-Z_]+;

fragment SINGLE_QUOTE: '\'';
fragment COLLON: ':';
fragment ATMARK: '@';
fragment SHARP: '#';
fragment SEMICOLLON: ';';
fragment PLUS: '+';
fragment MINUS: '-';
fragment ASTERISK: '*';
fragment DIV: '/';
fragment EQ: '=';
fragment LT: '<';
fragment GT: '>';
fragment RSHIFT: '>>';
fragment LSHIFT: '<<';
fragment ESC_QUOTE: QUOTE QUOTE;
fragment QUOTE: '"';
fragment DOT: '.';
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

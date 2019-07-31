grammar KVMnemonic;

input: file EOF;
file: mnemonic+;

mnemonic: separator* (instruction (separator operand)* separator* NEWLINE*);
separator: SEPARATOR;

instruction: IDENTIFIER | IDENTIFIER suffix;
operand: device
        | int_immediate
        | fp_immediate
        | str_immediate;
device: device_old_indirect
        | device_normal
        | index_device;
device_normal: device_content
                | device_content SEMICOLLON index_value
                | device_wbit;
device_wbit: device_content bitpos;
device_content: IDENTIFIER | (SCOPE_LOCAL IDENTIFIER);
device_old_indirect: OLD_INDIRECT;
index_value: (DEC_NUMBER | HEX_NUMBER | INDEX_DEVICE);
index_device: INDEX_DEVICE;
bitpos: BITPOS;
str_immediate: STRING_IMMEDIATE;
int_immediate:  DEC_NUMBER | HEX_NUMBER;
fp_immediate: FP_NUMBER | FP_EXPONENTIAL;
suffix: SUFFIX;

NEWLINE: ('\r'|'\n');
SEPARATOR: (' ' | '\t')+;

/* 単独でidentifierにマッチする字句 */
STRING_IMMEDIATE:  QUOTE (~["] | ESC_QUOTE)* QUOTE;
FP_NUMBER: [#K]?[+-]*[0-9]+DOT[0-9]+;
FP_EXPONENTIAL: [#K]?[+-]*[0-9]*DOT[0-9]*[eE][+-]*[0-9]+;
DEC_NUMBER: [K#][-]?[0-9]+;
HEX_NUMBER: [H$][-]?[0-9A-F]+;
OLD_INDIRECT: PREFIX_OLD_INDIRECT DEV_TM NUMBER;
INDEX_DEVICE: Z[0-9]+;
IDENTIFIER: [0-9a-zA-Z_]+;

/* identifier の一部をなす字句 */
SEMICOLLON: ':';
SCOPE_LOCAL: '@';
PREFIX_OLD_INDIRECT: '#';
SUFFIX: DOT(D | L |  S | U | F | D F);
BITPOS: DOT([0-9]+);
DEV_TM: T M;
NUMBER: [0-9]+;

WS: ' ' ->skip;

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

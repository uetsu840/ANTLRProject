grammar KVScript;

input
    : (statement)* EOF
    ;

statement
    : return_statement
    | if_statement
    | while_statement
    | for_statement
    | repeat_statement
    | case_statement
    | expression STATEMENT_SEPARATOR
    | STATEMENT_SEPARATOR
    ;

/* return */
return_statement
    : TOKEN_RETURN
    ;

/* if */
if_statement
    : TOKEN_IF expression TOKEN_IF_THEN
        statement+
        (TOKEN_IF_ELIF statement)*
        (TOKEN_ELSE statement)?
        TOKEN_IF_END
    ;

/* while */
while_statement
    : TOKEN_WHILE expression TOKEN_DO
        statement+
        TOKEN_WHILE_END
    ;

/* for */
for_statement
    : TOKEN_FOR expression TOKEN_TO expression TOKEN_DO
        statement+
        TOKEN_FOR_END
    ;

/* repeat */
repeat_statement
    : TOKEN_REPEAT
        statement+
        TOKEN_UNTIL expression TOKEN_REPEAT_END
    ;

/* case */
case_statement
    : TOKEN_CASE variable TOKEN_OF
        (token_case_label+ statement+)+
        TOKEN_CASE_END
    ;

token_case_label
    : value (TOKEN_CASE_VAL_SEP value)* TOKEN_CASE_LBL_SEP      // 1:  / 1, 3, 5:
    | value TOKEN_CASE_RANGE value TOKEN_CASE_LBL_SEP           // 3..5:
    | TOKEN_ELSE
    ;

expression
    : value
    | TOKEN_OPEN_BRACE expression TOKEN_CLOSE_BRACE
    | expression arith_operator_muldiv expression
    | expression arith_operator_addsub expression
    | expression compare_operator expression
    | expression assign_operator expression
    | function_call
    ;

function_call
    : IDENTIFIER TOKEN_OPEN_BRACE TOKEN_CLOSE_BRACE                     // withiout argument
    | IDENTIFIER
        TOKEN_OPEN_BRACE
        expression (TOKEN_ARG_SEP expression)*
        TOKEN_CLOSE_BRACE                                               // informal call
    | IDENTIFIER
        TOKEN_OPEN_BRACE
        ((func_in_argument | func_out_argument)
         (TOKEN_ARG_SEP (func_in_argument | func_out_argument))*)
        TOKEN_CLOSE_BRACE                                               // formal call
    ;

func_in_argument
    : variable assign_operator expression
    ;

func_out_argument
    : variable assign_operator_out variable
    ;

assign_operator
    : TOKEN_ASSIGN_RL
    ;

compare_operator
    : TOKEN_CMP_EQ
    | TOKEN_CMP_GT_EQ
    | TOKEN_CMP_LT_EQ
    | TOKEN_CMP_GT
    | TOKEN_CMP_LT
    ;

assign_operator_out
    : TOKEN_ASSIGN_LR
    ;

unary_operator_pre
    : TOKEN_PLUS
    | TOKEN_MINUS
    ;

arith_operator_muldiv
    : TOKEN_MUL
    | TOKEN_DIV
    ;

arith_operator_addsub
    : TOKEN_PLUS
    | TOKEN_MINUS
    ;

value
    : immediate
    | variable
    | unary_operator_pre value
    ;

immediate
    : TOKEN_MINUS? TOKEN_DEC_NUMBER
    | TOKEN_HEX_NUMBER
    | TOKEN_OCT_NUMBER
    | TOKEN_BIN_NUMBER
    ;

variable
    : IDENTIFIER;

/* 構文予約語 */
WS                  : (' ' | '\t' | '\n')+ -> skip;
TOKEN_ASSIGN_RL     : COLLON EQUAL;
TOKEN_ASSIGN_LR     : EQUAL GT;
TOKEN_CMP_EQ        : EQUAL;
TOKEN_CMP_GT_EQ     : GT EQUAL;
TOKEN_CMP_LT_EQ     : LT EQUAL;
TOKEN_CMP_GT        : GT;
TOKEN_CMP_LT        : LT;
TOKEN_RETURN        : 'RETURN';
TOKEN_FOR           : 'FOR';
TOKEN_FOR_END       : 'END_FOR';
TOKEN_WHILE         : 'WHILE';
TOKEN_DO            : 'DO';
TOKEN_TO            : 'TO';
TOKEN_WHILE_END     : 'END_WHILE';
TOKEN_IF            : 'IF';
TOKEN_IF_THEN       : 'THEN';
TOKEN_IF_ELIF       : 'ELSIF';
TOKEN_ELSE          : 'ELSE';
TOKEN_IF_END        : 'END_IF';
TOKEN_SELECT        : 'SELECT';
TOKEN_SELECT_END    : 'END_SELECT';
TOKEN_REPEAT        : 'REPEAT';
TOKEN_UNTIL         : 'UNTIL';
TOKEN_REPEAT_END    : 'END_REPEAT';
TOKEN_CASE          : 'CASE';
TOKEN_OF            : 'OF';
TOKEN_CASE_END      : 'END_CASE';
TOKEN_OPEN_BRACE    : OPEN_BLACE;
TOKEN_CLOSE_BRACE   : CLOSE_BLACE;
TOKEN_HEX_NUMBER    : HEX_PREFIX HEX_NUMBER;
TOKEN_DEC_NUMBER    : DEC_NUMBER;
TOKEN_OCT_NUMBER    : OCT_PREFIX OCT_NUMBER;
TOKEN_BIN_NUMBER    : BIN_PREFIX BIN_NUMBER;
TOKEN_INCREMENT     : PLUS PLUS;
TOKEN_DECREMENT     : MINUS MINUS;
TOKEN_CASE_RANGE    : DOT DOT;
TOKEN_PLUS          : PLUS;
TOKEN_MINUS         : MINUS;
TOKEN_MUL           : ASTERISK;
TOKEN_DIV           : SLASH;
TOKEN_ARG_SEP       : COMMA;
TOKEN_CASE_VAL_SEP  : COMMA;
TOKEN_CASE_LBL_SEP  : COLLON;

STATEMENT_SEPARATOR : SEMICOLLON;
IDENTIFIER
    : ALPHABETS (DEC_DIGIT | ALPHABETS | '_')*;

fragment HEX_NUMBER     : HEX_DIGIT+;
fragment DEC_NUMBER     : DEC_DIGIT+;
fragment OCT_NUMBER     : OCT_DIGIT+;
fragment BIN_NUMBER     : BIN_DIGIT+;
fragment HEX_PREFIX     : '16#';
fragment OCT_PREFIX     : '8#';
fragment BIN_PREFIX     : '2#';
fragment DEC_DIGIT      : [0-9];
fragment HEX_DIGIT      : [0-9A-Fa-f];
fragment OCT_DIGIT      : [0-7];
fragment BIN_DIGIT      : ('0' | '1');
fragment GT             : '>';
fragment LT             : '<';
fragment EQUAL          : '=';
fragment OPEN_BLACE     : '(';
fragment CLOSE_BLACE    : ')';
fragment USCORE         : '_';
fragment PLUS           : '+';
fragment MINUS          : '-';
fragment COMMA          : ',';
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

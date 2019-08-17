grammar calc;

input : expr EOF;

expr
    : integer                                 #expr_none
    | fp_num                                  #expr_none
    | string                                  #expr_none
    | function_call                           #expr_none
    | constant                                #expr_none
    | paren_expr                              #expr_none
    | <assoc=right> lhs=expr HAT rhs=expr     #expr_power
    | lhs=expr op=(ASTERISK | SLASH) rhs=expr #expr_multiplicative
    | lhs=expr rhs=paren_expr                 #expr_raw_multiplicative
    | lhs=expr op=(PLUS | MINUS) rhs=expr     #expr_additive
    ;

function_call
    : SYMBOL OPEN_PAREN expr CLOSE_PAREN
    ;

constant
    : SYMBOL
    ;

paren_expr
    : OPEN_PAREN expr CLOSE_PAREN
    ;

fp_num
    : FP_NUM
    | op=(PLUS | MINUS) FP_NUM
    ;

integer
    : UINT
    | op=(PLUS | MINUS) UINT
    ;

string
    : STR_IMM
    ;

OPEN_PAREN:     '(';
CLOSE_PAREN:    ')';
ASTERISK:       '*';
SLASH:          '/';
PLUS:           '+';
MINUS:          '-';
HAT:            '^';
DOT:            '.';
FP_NUM:         [0-9]*DOT[0-9]+;
UINT:           [0-9]+;
SYMBOL:         [a-zA-Z][a-zA-Z0-9]*;
WS:             [ \t\n] -> skip;
STR_IMM:        DQ (~["])* DQ;

fragment DQ:    '"';

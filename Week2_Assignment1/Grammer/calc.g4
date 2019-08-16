grammar calc;

input : expr EOF;

expr  : lhs=DISITS PLUS rhs=DISITS EOF      # calc_add
      ;

DISITS : [0-9]+;
PLUS   : '+';
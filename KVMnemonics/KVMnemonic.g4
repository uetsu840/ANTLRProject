grammar KVMnemonic;

input: file EOF;
file: mnemonic+;

mnemonic: (NEWLINE instruction (separator operand)*);
separator: SEPARATOR;
operand: OPERAND_TEXT;
instruction: INSTRUCTION_TEXT | INSTRUCTION_TEXT DOT suffix;
suffix: SUFFIX;

NEWLINE: ('\r'|'\n');
SEPARATOR: (' ' | '\t')+;
INSTRUCTION_TEXT: [a-z0-9A-Z_]+;
DOT: '.';
SUFFIX: [a-zA-Z]+;
OPERAND_TEXT: [a-zA-Z0-9_]+;

# Cforger

This is a lexical analyzer for C language.

It prints the symbol table and provides info about Lexical errors if present.

Step 1: Modify the *input.txt* file and put your code whose analysis you want.

Step 2: To run , use the following commands

`flex compiler.l`

`gcc lex.yy.c -o compile `

`./compile `

In case if you want to compile a file other than *input.txt* modify the code in *compiler.l*

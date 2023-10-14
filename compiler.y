%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "sym_table.c"
%}

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INT LONG REGISTER RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE
%token ID NUMBER SPECIAL _CHAR _STRING PRINTF SCANF RETURN MAIN SPACE

%%
E: '+' {printf("add");}
 ;
%%
int yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int main(){
    yyparse();
    return 0;
}
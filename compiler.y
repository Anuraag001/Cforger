%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "sym_table.c"
%}

%token ID NUMBER SPECIAL CHAR STRING PRINTF SCANF RETURN MAIN STRUCT SPACE

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
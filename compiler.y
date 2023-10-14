%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "sym_table.c"
%}

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
%{
    #include <stdio.h>
    //#include "sym_table.h"
    //#include "errors.h"

    void Print(char *);
    //Error* head;
    
%}

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INT LONG REGISTER RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE
%token ID NUMBER SPECIAL _CHAR _STRING PRINTF SCANF MAIN SPACE WHITESPACE
%token LPARA RPARA LCURLY RCURLY LBRACK RBRACK
%token string_constant character_constant INCREMENT DECREMENT AND_AND OR_OR NOT LEFT_SHIFT RIGHT_SHIFT SUBTRACT_EQUAL ADD_EQUAL MOD_EQUAL MULTIPLE_EQUAL DIVIDE_EQUAL GREATER LESSER LESS_EQUAL GREAT_EQUAL EQUAL_EQUAL NOT_EQUAL _INTEGER _FLOAT
%%
/*start: stmt MAIN LPARA stmt RPARA { printf("CORRECT syntax of main."); return 0; }
     ;

stmt: 
    | ID stmt
    ;*/
E: INT SPACE MAIN {printf("correct\n");}
 ;
%%
int yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int main(int argc, char *argv[]) {
initialize();
char Name[]="Name";
char Length[]="Length";
char Token[]="Token";
char Line_num[]="Line Number";
char Scope[]="Scope";
//head=(Error*) malloc(sizeof(Error));
//head=NULL;

  extern FILE* yyin;
yyin =fopen(argv[1],"r");
    yyparse();
fclose(yyin);
/*                printf("\t\t\t\t\t  ----Symbol Table----\n");
                printf("%-25s | %-10s | %-25s | %-10s | %10s\n",Name,Length,Token,Scope,Line_num);
                printf("------------------------------------------------------------------------------------------------\n");

	for(int i=0;i<100;i++){
		//printf("Index %d:",i);
		symbol* current =hash[i];
		while(current!=NULL){
			printf("%-25s | %-10d | %-25s | %-11d",current->name,current->length,current->token,current->scope);
            Line* ptr=current->line_num;
            printf("| ");
            while(ptr!=NULL){
                printf("%d ",ptr->line);
                ptr=ptr->next;
            }
            printf("\n");
			current=current->next;
		}
		//printf("\n");
	}
*/
    //Error* p=head;
    // while(p!=NULL){
    //     printf("\033[31m%s\n\033[0m",p->str);
    //     p=p->next;
    // }
    // if ( in_comment != 0) printf("\033[31mLine %d: Multiline comment: missing \"*/\" .\n\033[0m", comment_line);
    // if ( brack_count != 0) printf("\033[31mLine %d: Incomplete brackets .\n\033[0m", brack_line);
    // if ( curli_count != 0) printf("\033[31mLine %d: Incomplete curly braces .\n\033[0m", curli_line);
    // if ( parenth_count != 0) printf("\033[31mLine %d: Incomplete paranthesis.\n\033[0m", parenth_line);
    //yyparse();

    return 0;
}


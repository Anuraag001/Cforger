
%{
    #include <stdio.h>
    #include <string.h>
    #include "sym_table.c"
    void Print(char *);
    char type[20];
    int l_count=1;
    
%}

%option noyywrap

DIGIT       [0-9]
LETTER      [a-zA-Z]
ID          {LETTER}({LETTER}|{DIGIT})*
NUMBER      {DIGIT}+(\.{DIGIT}+)?(E[+\-]?{DIGIT}+)?

%%
(auto)|(break)|(case)|(char)|(const)|(continue)|(default)|(do)|(double)|(else)|(enum)|(extern)|(float)|(for)|(goto)|(if)|(int)|(long)|(register)|(return)|(short)|(signed)|(sizeof)|(static)|(struct)|(switch)|(typedef)|(union)|(unsigned)|(void)|(volatile)|(while) { strcpy(type,"keyword");hash_algo(yytext,yyleng,type,l_count);}
{ID}        { strcpy(type,"Identifier"); hash_algo(yytext,yyleng,type,l_count);}
{NUMBER}    { hash_algo(yytext,yyleng,"number",l_count);}


[ \t]     ;
.           { }
\n        {l_count++ ;}
%%




int main(int argc, char *argv[]) {
initialize();
char Name[]="Name";
char Value[]="Value";
char Datatype[]="Datatype";
char Line_num[]="Line Number";
char Scope[]="Scope";
   

  extern FILE* yyin;
yyin =fopen("input.txt","r");
    yylex();
fclose(yyin);
                printf("%-10s \t\t %-10s\t\t %-10s\t\t %-10s\t\t %-10s\n\n",Name,Value,Datatype,Line_num,Scope);

	for(int i=0;i<100;i++){
		//printf("Index %d:",i);
		symbol* current =hash[i];
		while(current!=NULL){
			printf("%-10s \t\t %-10d \t\t %-10s\t\t %-10d\t\t %-10d\n",current->name,current->value,current->datatype,current->line_number[0],current->scope);
			current=current->next;
		}
		//printf("\n");
	}
    return 0;
}



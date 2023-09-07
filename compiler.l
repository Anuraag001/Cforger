
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
LETTER      [_a-zA-Z]
ID          {LETTER}({LETTER}|{DIGIT})*
NUMBER      {DIGIT}+(\.{DIGIT}+)?(E[+\-]?{DIGIT}+)?
SPECIAL     [&@$#]+
%%
(auto)|(break)|(case)|(char)|(const)|(continue)|(default)|(do)|(double)|(else)|(enum)|(extern)|(float)|(for)|(goto)|(if)|(int)|(long)|(register)|(return)|(short)|(signed)|(sizeof)|(static)|(struct)|(switch)|(typedef)|(union)|(unsigned)|(void)|(volatile)|(while) { strcpy(type,"keyword");hash_algo(yytext,yyleng,type,l_count);}
{ID}        { strcpy(type,"Identifier"); hash_algo(yytext,yyleng,type,l_count);}
#include    {hash_algo(yytext,yyleng,"Preprocessor",l_count);}
{NUMBER}    { hash_algo(yytext,yyleng,"number",l_count);}
{DIGIT}({LETTER}|{DIGIT}|{SPECIAL})* {printf("\033[31mError detected: Line Number=%d identifier cannot start with digit i.e %s\033[0m\n",l_count,yytext);}
{SPECIAL}({LETTER}|{DIGIT})* {printf("\033[31mError detected: Line Number=%d identifier cannot start with special character i.e %s\033[0m\n",l_count,yytext);}
{LETTER}({LETTER}|{DIGIT})*{SPECIAL}({LETTER}|{DIGIT})* {printf("\033[31mError detected: Line Number=%d identifier cannot have a special character in between  i.e %s\033[0m\n",l_count,yytext);}
[ \t]     ;
.           { }
\n        {l_count++ ;}
%%




int main(int argc, char *argv[]) {
initialize();
char Name[]="Name";
char Length[]="Length";
char Datatype[]="Datatype";
char Line_num[]="Line Number";
char Scope[]="Scope";
   

  extern FILE* yyin;
yyin =fopen("input.txt","r");
    yylex();
fclose(yyin);
                printf("\t\t\t\t\t  ----Symbol Table----\n");
                printf("%-10s \t\t %-10s\t\t %-10s\t\t %-10s\t\t %-10s\n\n",Name,Length,Datatype,Line_num,Scope);

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




%{
    #include <stdio.h>
    #include <string.h>
    #include "sym_table.c"
    void Print(char *);
    char type[20];
    int l_count=1;

    bool  in_comment = false;int comment_line ;
    
%}

%option noyywrap

DIGIT       [0-9]
LETTER      [_a-zA-Z]
ID          {LETTER}({LETTER}|{DIGIT})*
NUMBER      {DIGIT}+(\.{DIGIT}+)?(E[+\-]?{DIGIT}+)?
SPECIAL     [&@$#]+
ALPHA       [a-zA-Z]
%x comment

%%
"#include"[ ]*"<"{ALPHA}({ALPHA}|{DIGIT})*".h>" {hash_algo(yytext,yyleng,"Preprocessor Directive",l_count);}
("#include"|"include")[ ]*{ALPHA}({ALPHA}|{DIGIT})*".h>" {printf("\033[31mLine %d: Incorrect preprocessor defination: %s\n\033[0m",l_count,yytext);}
("#include"|"include")[ ]*"<"{ALPHA}({ALPHA}|{DIGIT})*".h" {printf("\033[31mLine %d: Incorrect preprocessor defination: %s\n\033[0m",l_count,yytext);}
"#include"[ ]*\"(.)*\" {hash_algo(yytext,yyleng,"Preprocessor Directive",l_count);}
("#include"|"include")[ ]*(.)*\"    {printf("\033[31mLine %d: Incorrect preprocessor defination: %s\n\033[0m",l_count,yytext);}
("#include"|"include")[ ]*\"(.)*   {printf("\033[31mLine %d: Incorrect preprocessor defination: %s\n\033[0m",l_count,yytext);}
"#define"[ ]*({LETTER})({ALPHA}|{DIGIT})*[ ]*(.)* {hash_algo(yytext,yyleng,"Preprocessor Directive",l_count);}
"define"[ ]*({LETTER})({ALPHA}|{DIGIT})*[ ]*(.)*  {printf("\033[31mLine %d: Incorrect preprocessor defination: %s\n\033[0m",l_count,yytext);}
\/\/.*  {printf("\033[32mSingle line Comment present in %d line\033[0m\n",l_count);}
    /* to detect multiline comments */
"/*" { BEGIN(comment); in_comment = true; comment_line = l_count; }
<comment>"*/" { BEGIN(INITIAL); if(in_comment) in_comment = false; }
<comment>. { }

    /* to detect strings */
\"(\\.|[^"])*\"      { hash_algo(yytext,yyleng-2,"String literal",l_count); }  
\"                   { printf("\033[31mError detected: Line Number=%d String literal incomplete.\033[0m\n",l_count); }

    /* characters , some escape sequence might go unnoticed */
'[^'\\]'|'\\[^'~!@#$%^&*_+-+=]'          { hash_algo(yytext,yyleng,"Character",l_count); }  
'[^']{2,}'                               { printf("\033[31mError detected: Line Number=%d Character overflow.\033[0m\n",l_count);}

    /* Operators */
,|;                          { hash_algo(yytext,yyleng,"Delimiter",l_count); }
"++"|"--"                    { hash_algo(yytext,yyleng,"Unary Operator",l_count); }
"+"|"-"|"*"|"%"|"/"          { hash_algo(yytext,yyleng,"Arithmetic Op.",l_count); } 
"&&"|"||"|"!"                { hash_algo(yytext,yyleng,"Logical Op.",l_count); }  
"&"|"|"|"^"|"~"|"<<"|">>"    { hash_algo(yytext,yyleng,"Bitwise Op.",l_count); }  
"="|"-="|"+="|"*="|"/="|"%=" { hash_algo(yytext,yyleng,"Assignment Op.",l_count); } 
"<"|">"|"<="|">="|"=="|"!="  { hash_algo(yytext,yyleng,"Relational Op.",l_count); }
[?][^?:]*                    { printf("\033[31mError detected: Line Number=%d Missing ':' Conditional Operator\033[0m\n",l_count); }
[?][^?:]*[:]                 { hash_algo("?:",2,"Conditional Op.",l_count); }
    /* brackets */
"{"			     { hash_algo(yytext,yyleng,"R_Brace",l_count); }
"}"			     { hash_algo(yytext,yyleng,"L_Brace",l_count); }
"("			     { hash_algo(yytext,yyleng,"R_Parenthesis",l_count); }
")"			     { hash_algo(yytext,yyleng,"L_Parenthesis",l_count); }
"["			     { hash_algo(yytext,yyleng,"R_Bracket",l_count); }
"]"			     { hash_algo(yytext,yyleng,"L_Bracket",l_count); }
(auto)|(break)|(case)|(char)|(const)|(continue)|(default)|(do)|(double)|(else)|(enum)|(extern)|(float)|(for)|(goto)|(if)|(int)|(long)|(register)|(return)|(short)|(signed)|(sizeof)|(static)|(struct)|(switch)|(typedef)|(union)|(unsigned)|(void)|(volatile)|(while) { strcpy(type,"keyword");hash_algo(yytext,yyleng,type,l_count);}
{ID}        { strcpy(type,"Identifier"); hash_algo(yytext,yyleng,type,l_count);}
#include  {hash_algo(yytext,yyleng,"Preprocessor",l_count);}
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
                printf("%-25s | %-10s | %-25s | %-10s | %10s\n",Name,Length,Datatype,Scope,Line_num);
                printf("------------------------------------------------------------------------------------------------\n");

	for(int i=0;i<100;i++){
		//printf("Index %d:",i);
		symbol* current =hash[i];
		while(current!=NULL){
			printf("%-25s | %-10d | %-25s | %-11d",current->name,current->value,current->datatype,current->scope);
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
     if ( in_comment != 0) printf("Line %d: Multiline comment: missing \"*/\" .", comment_line);
    return 0;
}



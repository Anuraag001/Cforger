
%{
    #include <stdio.h>
    #include <string.h>
    #include "sym_table.c"
    #include "errors.c"
    void Print(char *);
    char type[20];
    int l_count=1;
    Error* head;
    char temp[100];
    char stoi[100];
    bool  in_comment = false;int comment_line ;
    int brack_count=0, parenth_count=0, curli_count=0;
    int brack_line=0, parenth_line=0, curli_line=0;
    
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
("#include"|"include")[ ]*{ALPHA}({ALPHA}|{DIGIT})*".h>" {
                                                            strcpy(temp,"Line ");
                                                            sprintf(stoi,"%d",l_count);
                                                            strcat(temp,stoi);
                                                            strcat(temp,": Incorrect preprocessor defination: ");
                                                            strcat(temp,yytext);
                                                            head=push_error(temp,head);
                                                            temp[0]='\0';
                                                            }
("#include"|"include")[ ]*"<"{ALPHA}({ALPHA}|{DIGIT})*".h" {
                                                            strcpy(temp,"Line ");
                                                            sprintf(stoi,"%d",l_count);
                                                            strcat(temp,stoi);
                                                            strcat(temp,": Incorrect preprocessor defination: ");
                                                            strcat(temp,yytext);
                                                            head=push_error(temp,head);
                                                            temp[0]='\0';
                                                            }
"#include"[ ]*\"(.)*\" {hash_algo(yytext,yyleng,"Preprocessor Directive",l_count);}
("#include"|"include")[ ]*(.)*\"    {
                                    strcpy(temp,"Line ");
                                    sprintf(stoi,"%d",l_count);
                                    strcat(temp,stoi);
                                    strcat(temp,": Incorrect preprocessor defination: ");
                                    strcat(temp,yytext);
                                    head=push_error(temp,head);
                                    temp[0]='\0';
                                    }
("#include"|"include")[ ]*\"(.)*   {                                   
                                    strcpy(temp,"Line ");
                                    sprintf(stoi,"%d",l_count);
                                    strcat(temp,stoi);
                                    strcat(temp,": Incorrect preprocessor defination: ");
                                    strcat(temp,yytext);
                                    head=push_error(temp,head);
                                    temp[0]='\0'; 
                                    }
"#define"[ ]*({LETTER})({ALPHA}|{DIGIT})*[ ]*(.)* {hash_algo(yytext,yyleng,"Preprocessor Directive",l_count);}
"define"[ ]*({LETTER})({ALPHA}|{DIGIT})*[ ]*(.)*  {
                                                strcpy(temp,"Line ");
                                                sprintf(stoi,"%d",l_count);
                                                strcat(temp,stoi);
                                                strcat(temp,": Incorrect preprocessor defination: ");
                                                strcat(temp,yytext);
                                                head=push_error(temp,head);
                                                temp[0]='\0';
                                                }
\/\/.*  {printf("\033[32mSingle line Comment present in %d line\033[0m\n",l_count);}
    /* to detect multiline comments */
"/*" { BEGIN(comment); in_comment = true; comment_line = l_count; }
<comment>"*/" { BEGIN(INITIAL); if(in_comment) in_comment = false; }
<comment>\n { /* Do nothing, newline characters are ignored inside comments */ }
<comment>. { }



\(  { hash_algo(yytext,yyleng,"R_Parenthesis",l_count); parenth_count++; if(parenth_count != 0) parenth_line = l_count;}
\{  { hash_algo(yytext,yyleng,"R_Brace",l_count); curli_count++; if(curli_count != 0) curli_line = l_count;}
\[  { hash_algo(yytext,yyleng,"R_Bracket",l_count); brack_count++; if(brack_count != 0) brack_line = l_count;}
\)  { hash_algo(yytext,yyleng,"L_Parenthesis",l_count);parenth_count--; if(parenth_count != 0) parenth_line = l_count;}
\}  { hash_algo(yytext,yyleng,"L_Brace",l_count); curli_count--; if(curli_count != 0) curli_line = l_count;}
\]  { hash_algo(yytext,yyleng,"L_Bracket",l_count); brack_count--; if(brack_count != 0) brack_line = l_count;}

    /* to detect strings */
\"(\\.|[^"])*\"      { hash_algo(yytext,yyleng-2,"String literal",l_count); }  
\"                   { 
                        strcpy(temp,"Line ");
                        sprintf(stoi,"%d:",l_count);
                        strcat(temp,stoi);
                        strcat(temp," String literal incomplete.");
                        head=push_error(temp,head);
                     }

    /* characters , some escape sequence might go unnoticed */
'[^'\\]'|'\\[^'~!@#$%^&*_+-+=]'          { hash_algo(yytext,yyleng,"Character",l_count); }  
'[^']{2,}'                               {
                                            strcpy(temp,"Line ");
                                            sprintf(stoi,"%d:",l_count);
                                            strcat(temp,stoi);
                                            strcat(temp," Character overflow.");
                                            head=push_error(temp,head); 
                                         }

    /* Operators */
,|;                          { hash_algo(yytext,yyleng,"Delimiter",l_count); }
"++"|"--"                    { hash_algo(yytext,yyleng,"Unary Operator",l_count); }
"+"|"-"|"*"|"%"|"/"          { hash_algo(yytext,yyleng,"Arithmetic Op.",l_count); } 
"&&"|"||"|"!"                { hash_algo(yytext,yyleng,"Logical Op.",l_count); }  
"&"|"|"|"^"|"~"|"<<"|">>"    { hash_algo(yytext,yyleng,"Bitwise Op.",l_count); }  
"="|"-="|"+="|"*="|"/="|"%=" { hash_algo(yytext,yyleng,"Assignment Op.",l_count); } 
"<"|">"|"<="|">="|"=="|"!="  { hash_algo(yytext,yyleng,"Relational Op.",l_count); }
[?][^?:]*                    { 
                              strcpy(temp,"Line ");
                              sprintf(stoi,"%d:",l_count);
                              strcat(temp,stoi);
                              strcat(temp," Missing ':' Conditional Operator");
                              head=push_error(temp,head); 
                            }
[?][^?:]*[:]                 { hash_algo("?:",2,"Conditional Op.",l_count); }


"0"|[0-9]{DIGIT}*                     { hash_algo(yytext,yyleng,"INTEGER",l_count); }           
"0"|{DIGIT}*"."{DIGIT}+         { hash_algo(yytext,yyleng,"FLOAT",l_count); }



(auto)|(break)|(case)|(char)|(const)|(continue)|(default)|(do)|(double)|(else)|(enum)|(extern)|(float)|(for)|(goto)|(if)|(int)|(long)|(register)|(return)|(short)|(signed)|(sizeof)|(static)|(struct)|(switch)|(typedef)|(union)|(unsigned)|(void)|(volatile)|(while) { strcpy(type,"keyword");hash_algo(yytext,yyleng,type,l_count);}
{ID}        { strcpy(type,"Identifier"); hash_algo(yytext,yyleng,type,l_count);}
#include  {hash_algo(yytext,yyleng,"Preprocessor",l_count);}
{NUMBER}    { hash_algo(yytext,yyleng,"number",l_count);}
{DIGIT}({LETTER}|{DIGIT}|{SPECIAL})* {
                                    strcpy(temp,"Line ");
                                    sprintf(stoi,"%d:",l_count);
                                    strcat(temp,stoi);
                                    strcat(temp," identifier cannot start with digit i.e ");
                                    strcat(temp,yytext);
                                    head=push_error(temp,head);
                                    }
{SPECIAL}({LETTER}|{DIGIT})* {
                            strcpy(temp,"Line ");
                            sprintf(stoi,"%d:",l_count);
                            strcat(temp,stoi);
                            strcat(temp," identifier cannot start with special character i.e ");
                            strcat(temp,yytext);
                            head=push_error(temp,head);
                            }
{LETTER}({LETTER}|{DIGIT})*{SPECIAL}({LETTER}|{DIGIT})* {
                                                        strcpy(temp,"Line ");
                                                        sprintf(stoi,"%d:",l_count);
                                                        strcat(temp,stoi);
                                                        strcat(temp," identifier cannot have a special character in between i.e");
                                                        strcat(temp,yytext);
                                                        head=push_error(temp,head);
                                                        }


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
head=(Error*) malloc(sizeof(Error));
head=NULL;

  extern FILE* yyin;
yyin =fopen(argv[1],"r");
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
    Error* p=head;
    while(p!=NULL){
        printf("\033[31m%s\n\033[0m",p->str);
        p=p->next;
    }
    if ( in_comment != 0) printf("\033[31mLine %d: Multiline comment: missing \"*/\" .\n\033[0m", comment_line);
    if ( brack_count != 0) printf("\033[31mLine %d: Incomplete brackets .\n\033[0m", brack_line);
    if ( curli_count != 0) printf("\033[31mLine %d: Incomplete curly braces .\n\033[0m", curli_line);
    if ( parenth_count != 0) printf("\033[31mLine %d: Incomplete paranthesis.\n\033[0m", parenth_line);

    return 0;
}


%{
    #include "sym_table.h"
    #include "errors.h"
    #include "compiler.tab.h"
    bool  in_comment = false;
    int comment_line ;
    int brack_count=0, parenth_count=0, curli_count=0;
    int brack_line=0, parenth_line=0, curli_line=0;
    int l_count=1;
    char type[20];
    
    Error* head;
    char temp[100];
    char stoi[100];
%}

%option noyywrap

DIGIT       [0-9]
ALPHA       [a-zA-Z]
LETTER      [_a-zA-Z]
ID          {LETTER}({LETTER}|{DIGIT})*
NUMBER      {DIGIT}+(\.{DIGIT}+)?(E[+\-]?{DIGIT}+)?
SPECIAL     [&@$#]+
%x comment

%%

auto        { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return AUTO; }
break       { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return BREAK; }
case        { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return CASE; }
char        { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return CHAR; }
const       { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return CONST; }
continue    { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return CONTINUE; }
default     { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return DEFAULT; }
do          { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return DO; }
double      { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return DOUBLE; }
else        { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return ELSE; }
enum        { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return ENUM; }
extern      { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return EXTERN; }
float       { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return FLOAT; }
for         { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return FOR; }
goto        { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return GOTO; }
if          { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return IF; }
int         { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return INT; }
long        { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return LONG; }
register    { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return REGISTER; }
return      { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return RETURN; }
short       { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return SHORT; }
signed      { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return SIGNED; }
sizeof      { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return SIZEOF; }
static      { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return STATIC; }
struct      { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return STRUCT; }
switch      { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return SWITCH; }
typedef     { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return TYPEDEF; }
union       { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return UNION; }
unsigned    { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return UNSIGNED; }
void        { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return VOID; }
volatile    { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return VOLATILE; }
while       { strcpy(type,"keyword"); hash_algo(yytext,yyleng,type,l_count); return WHILE; }

"printf"     {return PRINTF;}
"scanf"      {return SCANF;}
"main"       {return MAIN;} 

\(  { parenth_count++; if(parenth_count != 0) parenth_line = l_count; return *yytext;}
\{  { curli_count++; if(curli_count != 0) curli_line = l_count;return *yytext;}
\[  {  brack_count++; if(brack_count != 0) brack_line = l_count;return *yytext;}
\)  { parenth_count--; if(parenth_count != 0) parenth_line = l_count;return *yytext;}
\}  { curli_count--; if(curli_count != 0) curli_line = l_count;return *yytext;}
\]  { brack_count--; if(brack_count != 0) brack_line = l_count;return *yytext;}


    /* Operators */
,                          { hash_algo(yytext,yyleng,"Delimiter",l_count); return *yytext;}
;                          { hash_algo(yytext,yyleng,"Delimiter",l_count); return *yytext;}
"++"                    { hash_algo(yytext,yyleng,"Unary Operator",l_count); return INCREMENT;}
"--"                    { hash_algo(yytext,yyleng,"Unary Operator",l_count); return DECREMENT;}
"+"     { hash_algo(yytext,yyleng,"Arithmetic Op.",l_count); return *yytext;} 
"-"     { hash_algo(yytext,yyleng,"Arithmetic Op.",l_count); return *yytext;} 
"*"     { hash_algo(yytext,yyleng,"Arithmetic Op.",l_count); return *yytext;} 
"%"     { hash_algo(yytext,yyleng,"Arithmetic Op.",l_count); return *yytext;} 
"&&"    { hash_algo(yytext,yyleng,"Logical Op.",l_count);return AND_AND; } 
"/"     { hash_algo(yytext,yyleng,"Arithmetic Op.",l_count); return *yytext;} 
"||"               { hash_algo(yytext,yyleng,"Logical Op.",l_count); return OR_OR;} 
"!"                { hash_algo(yytext,yyleng,"Logical Op.",l_count); return NOT;}  
"&"    { hash_algo(yytext,yyleng,"Bitwise Op.",l_count); return *yytext;}  
"|"   { hash_algo(yytext,yyleng,"Bitwise Op.",l_count); return *yytext;}  
"^"   { hash_algo(yytext,yyleng,"Bitwise Op.",l_count); return *yytext;}  
"~"  { hash_algo(yytext,yyleng,"Bitwise Op.",l_count); return *yytext;}  
"<<"   { hash_algo(yytext,yyleng,"Bitwise Op.",l_count); return LEFT_SHIFT;}  
">>"    { hash_algo(yytext,yyleng,"Bitwise Op.",l_count); return RIGHT_SHIFT; }  
"=" { hash_algo(yytext,yyleng,"Assignment Op.",l_count); return *yytext;} 
"-=" { hash_algo(yytext,yyleng,"Assignment Op.",l_count); return SUBTRACT_EQUAL;} 
"+=" { hash_algo(yytext,yyleng,"Assignment Op.",l_count); return ADD_EQUAL;} 
"*=" { hash_algo(yytext,yyleng,"Assignment Op.",l_count); return MULTIPLE_EQUAL;} 
"/=" { hash_algo(yytext,yyleng,"Assignment Op.",l_count); return DIVIDE_EQUAL;} 
"%=" { hash_algo(yytext,yyleng,"Assignment Op.",l_count);return MOD_EQUAL; } 
"<"  { hash_algo(yytext,yyleng,"Relational Op.",l_count); return GREATER;}
">" { hash_algo(yytext,yyleng,"Relational Op.",l_count); return LESSER;}
"<=" { hash_algo(yytext,yyleng,"Relational Op.",l_count); return LESS_EQUAL;}
">="  { hash_algo(yytext,yyleng,"Relational Op.",l_count); return GREAT_EQUAL;}
"==" { hash_algo(yytext,yyleng,"Relational Op.",l_count); return EQUAL_EQUAL;}
"!="  { hash_algo(yytext,yyleng,"Relational Op.",l_count);return NOT_EQUAL; }

{SPECIAL}    {return SPECIAL;}
{ALPHA}      {return _CHAR;}

" " {return SPACE;}
"\""({NUMBER}|{ID}|{SPECIAL})*"\"" {return _STRING;}
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




    /* to detect strings */
\"(\\.|[^"])*\"      { hash_algo(yytext,yyleng-2,"String literal",l_count); return string_constant;}  
\"                   { 
                        strcpy(temp,"Line ");
                        sprintf(stoi,"%d:",l_count);
                        strcat(temp,stoi);
                        strcat(temp," String literal incomplete.");
                        head=push_error(temp,head);
                     }

    /* characters , some escape sequence might go unnoticed */
'[^'\\]'|'\\[^'~!@#$%^&*_+-+=]'          { hash_algo(yytext,yyleng,"Character",l_count); return character_constant;}  
'[^']{2,}'                               {
                                            strcpy(temp,"Line ");
                                            sprintf(stoi,"%d:",l_count);
                                            strcat(temp,stoi);
                                            strcat(temp," Character overflow.");
                                            head=push_error(temp,head); 
                                         }

[?][^?:]*                    { 
                              strcpy(temp,"Line ");
                              sprintf(stoi,"%d:",l_count);
                              strcat(temp,stoi);
                              strcat(temp," Missing ':' Conditional Operator");
                              head=push_error(temp,head); 
                            }
[?][^?:]*[:]                 { hash_algo("?:",2,"Conditional Op.",l_count); }


"0"|[0-9]{DIGIT}*                     { hash_algo(yytext,yyleng,"INTEGER",l_count); return _INTEGER;}           
"0"|{DIGIT}*"."{DIGIT}+         { hash_algo(yytext,yyleng,"FLOAT",l_count); return _FLOAT;}



{ID}        { if(yyleng<=32){
                    strcpy(type,"Identifier"); hash_algo(yytext,yyleng,type,l_count);
                }
                else{
                    strcpy(temp,"Line ");
                    sprintf(stoi,"%d:",l_count);
                    strcat(temp,stoi);
                    strcat(temp," identifier length cannot be greater than 32 i.e ");
                    strcat(temp,yytext);
                    head=push_error(temp,head);
                }
           }
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


[ \t]     return WHITESPACE;
.           { return yytext[0];}
\n        {l_count++ ;return 0;}
%%


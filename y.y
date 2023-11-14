%{
	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void insert_type();
	void insert_value();
	void insert_dimensions();
	void insert_parameters();
	void remove_scope (int );
	int check_scope(char*);
	int check_function(char *);
	void insert_SymbolTable_nest(char*, int);
	void insert_SymbolTable_paramscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int check_array(char*);
	void insert_SymbolTable_function(char*);
	char gettype(char*,int);
	char fi[100];
	char temp[100];

	extern int flag;
	int insert_flag = 0;

	extern char current_identifier[20];
	extern char current_type[20];
	extern char current_value[20];
    extern char current_function[20];
	extern char previous_operator[20];
	extern int current_nested_val;
	char currfunctype[100];
	char currfunccall[100];
	extern int params_count;
	int call_params_count;

%}

%nonassoc IF
%token INT CHAR FLOAT DOUBLE LONG SHORT SIGNED UNSIGNED STRUCT UNION
%token RETURN MAIN INCLUDE DEFINE
%token VOID
%token WHILE FOR DO
%token BREAK CONTINUE GOTO
%token ENDIF
%token SWITCH CASE DEFAULT
%expect 2

%token identifier array_identifier
%token integer_constant string_constant float_constant character_constant

%nonassoc ELSE

%right MOD_EQUAL
%right MULTIPLY_EQUAL DIVIDE_EQUAL
%right ADD_EQUAL SUBTRACT_EQUAL
%right '='

%left OR_OR
%left AND_AND
%left '^'
%left EQUAL NOT_EQUAL
%left LESS_EQUAL LESS GREAT_EQUAL GREAT
%left '+' '-'
%left '*' '/' '%'

%right SIZEOF
%right NOT
%left INCREMENT DECREMENT


%start begin_parse

%%
begin_parse
			: declarations;

declarations
			: declaration declarations
			|
			;

declaration
			: variable_dec
			| function_dec
			| structure_dec
			| file_dec
			| define_dec
			| union_dec
			;

file_dec
        : INCLUDE '<' identifier ".h" '>'
		;

define_dec
        : DEFINE identifier identifier
		| DEFINE identifier INT
		| DEFINE identifier FLOAT
		;


structure_dec
			: STRUCT identifier { insert_type(); } '{' structure_content  '}' ';';

structure_content : variable_dec structure_content | ;

union_dec
          : UNION identifier { insert_type(); } '{' union_content  '}' ';';

union_content : variable_dec union_content | ;

variable_dec
			: datatype variables ';'
			| structure_initialize
			|union_initialize;

structure_initialize
			: STRUCT identifier variables;


union_initialize
            : UNION identifier variables;


variables
			: identifier_name multiple_variables;

multiple_variables
			: ',' variables
			| ;

identifier_name
			: identifier { if(check_function(current_identifier))
						  {yyerror("\033[31mERROR: Identifier cannot be same as function name!\033[0m\n"); exit(8);}
						  if(duplicate(current_identifier)){yyerror("\033[31mDuplicate value!\033[0m\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type(); } extended_identifier
			| array_identifier {if(duplicate(current_identifier)){yyerror("\033[31mDuplicate value!\033[0m\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type();  } extended_identifier;

extended_identifier : array_iden | '='{strcpy(previous_operator,"=");} simple_expression ;

array_iden
			: '[' array_dims {strcpy(fi,"");}
			| ;

array_dims
			: integer_constant ']' {sprintf(temp,"%d",$1);  strcat(fi,temp);} initilization {strcpy(current_value,fi); insert_dimensions();}
			| ']' string_initilization;

initilization
			: string_initilization
			| array_initialization
			| '[' integer_constant {strcat(fi,"*"); sprintf(temp,"%d",$2); strcat(fi,temp); } ']' initilization
			| ;

string_initilization
			: '='{strcpy(previous_operator,"=");} string_constant { insert_value(); };

array_initialization
			: '='{strcpy(previous_operator,"=");} '{' array_values '}';

array_values
			: integer_constant multiple_array_values;

multiple_array_values
			: ',' array_values
			| ;


datatype
			: INT | CHAR | FLOAT | DOUBLE | INT '*' {strcpy(current_type,"int*");}| CHAR '*' {strcpy(current_type,"char*");} | FLOAT '*' {strcpy(current_type,"float*");}
			| LONG long_grammar
			| SHORT short_grammar
			| UNSIGNED unsigned_grammar
			| SIGNED signed_grammar
			| VOID ;

unsigned_grammar
			: INT | LONG long_grammar | SHORT short_grammar | ;

signed_grammar
			: INT | LONG long_grammar | SHORT short_grammar | ;

long_grammar
			: INT | ;

short_grammar
			: INT | ;

function_dec
			: function_datatype function_parameters;

function_datatype
			: datatype identifier '('  {strcpy(currfunctype, current_type); check_duplicate(current_identifier); insert_SymbolTable_function(current_identifier);  strcpy(current_function,current_identifier); insert_type();};

function_parameters
			: parameters ')' statement;

parameters
			: datatype { check_params(current_type); } all_parameter_identifiers {insert_SymbolTable_paramscount(current_function, params_count);} | ;

all_parameter_identifiers
			: parameter_identifier multiple_parameters;

multiple_parameters
			: ',' parameters
			| ;

parameter_identifier
			: identifier {insert_parameters(); insert_type(); insert_SymbolTable_nest(current_identifier,1); params_count++;} extended_parameter;

extended_parameter
			: '[' ']'
			| ;

statement
			: expression_statment | multiple_statement
			| conditional_statements | iterative_statements
			| return_statement | break_statement
			| variable_dec;

multiple_statement
			:{current_nested_val++;} '{' statments '}' {remove_scope(current_nested_val);current_nested_val--;} ;

statments
			: statement statments
			| ;

expression_statment
			: expression ';'
			| ';' ;

conditional_statements
			: IF '(' simple_expression ')' {if($3!=1){yyerror("\033[31mERROR: Here, condition must have integer value!\033[0m\n");exit(0);}} statement extended_conditional_statements;

extended_conditional_statements
			: ELSE statement
			| ;

iterative_statements
			: WHILE '(' simple_expression ')'{if($3!=1){yyerror("\033[31mERROR: Here, condition must have integer value!\033[0m\n");exit(0);}} statement
			| FOR '(' for_initialization simple_expression ';' {if($4!=1){yyerror("\033[31mHere, condition must have integer value!\033[0m\n");exit(0);}} for_updation ')' 
			| DO statement WHILE '(' simple_expression ')' {if($5!=1){yyerror("\033[31mERROR: Here, condition must have integer value!\033[0m\n");exit(0);}} ';'
			| SWITCH '(' identifier ')' '{' switch_cases '}'
			;

for_initialization
			: variable_dec
			| expression ';'
			| ';' ;
for_updation
			: for_updation ',' expression
			| expression
			;

switch_cases 
			: switch_cases CASE constant ':' statments
			| switch_cases DEFAULT  ':' statments
			| CASE constant ':' statments
			;


return_statement
			: RETURN ';' {if(strcmp(currfunctype,"void")) {yyerror("\033[31mERROR: Cannot have void return for non-void function!\033[0m\n"); exit(0);}}
			| RETURN expression ';' { 	if(!strcmp(currfunctype, "void"))
										{
											yyerror("\033[31mNon-void return for void function!\033[0m"); exit(0);
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && $2!=1)
										{
											yyerror("\033[31mExpression doesn't match return type of function\033[0m\n"); exit(0);
										}

			                     	};

break_statement
			: BREAK ';' ;


expression
			: mutable '=' expression              {					strcpy(previous_operator,"=");
																	  if($1==1 && $3==1)
																	  {
			                                                          $$=1;
			                                                          }
			                                                          else
			                                                          {$$=-1; yyerror("\033[31mType Mismatch\033[0m\n"); exit(0);}
			                                                       }
			| mutable ADD_EQUAL expression     {					strcpy(previous_operator,"+=");
																	  if($1==1 && $3==1)
			                                                          $$=1;
			                                                          else
			                                                          {$$=-1; yyerror("\033[31mType Mismatch\033[0m\n"); exit(0);}
			                                                       }
			| mutable SUBTRACT_EQUAL expression  {					strcpy(previous_operator,"-=");
																	  if($1==1 && $3==1)
			                                                          $$=1;
			                                                          else
			                                                          {$$=-1; yyerror("\033[31mType Mismatch\033[0m\n"); exit(0);}
			                                                       }

			| mutable MULTIPLY_EQUAL expression {					strcpy(previous_operator,"*=");
																	  if($1==1 && $3==1)
			                                                          $$=1;
			                                                          else
			                                                          {$$=-1; yyerror("\033[31mType Mismatch\033[0m\n"); exit(0);}
			                                                       }
			| mutable DIVIDE_EQUAL expression 		{				strcpy(previous_operator,"/=");
																	  if($1==1 && $3==1)
			                                                          $$=1;
			                                                          else
			                                                          {$$=-1; yyerror("\033[31mType Mismatch\033[0m\n"); exit(0);}
			                                                       }
			| mutable MOD_EQUAL expression 		{					strcpy(previous_operator,"%=");
																	  if($1==1 && $3==1)
			                                                          $$=1;
			                                                          else
			                                                          {$$=-1; yyerror("\033[31mType Mismatch\033[0m\n"); exit(0);}
			                                                       }

			| mutable INCREMENT 							{if($1 == 1) $$=1; else $$=-1;}
			| mutable DECREMENT 							{if($1 == 1) $$=1; else $$=-1;}
			| simple_expression {if($1 == 1) $$=1; else $$=-1;} ;


simple_expression
			: simple_expression OR_OR and_expression {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			| and_expression {if($1 == 1) $$=1; else $$=-1;};

and_expression
			: and_expression AND_AND unary_relation_expression {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			  |unary_relation_expression {if($1 == 1) $$=1; else $$=-1;} ;

unary_relation_expression
			: NOT unary_relation_expression {if($2==1) $$=1; else $$=-1;}
			| regular_expression {if($1 == 1) $$=1; else $$=-1;} ;

regular_expression
			: regular_expression relational_operators sum_expression {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			  | sum_expression {if($1 == 1) $$=1; else $$=-1;} ;

relational_operators
			: GREAT_EQUAL{strcpy(previous_operator,">=");}
			| LESS_EQUAL{strcpy(previous_operator,"<=");}
			| GREAT{strcpy(previous_operator,">");}
			| LESS{strcpy(previous_operator,"<");}
			| EQUAL{strcpy(previous_operator,"==");}
			| NOT_EQUAL{strcpy(previous_operator,"!=");} ;

sum_expression
			: sum_expression sum_operators term  {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			| term {if($1 == 1) $$=1; else $$=-1;};

sum_operators
			: '+'
			| '-' ;

term
			: term MULOP factor {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			| factor {if($1 == 1) $$=1; else $$=-1;} ;

MULOP
			: '*' | '/' | '%' ;

factor
			: immutable {if($1 == 1) $$=1; else $$=-1;}
			| mutable {if($1 == 1) $$=1; else $$=-1;} ;

mutable
			: identifier {
			              if(!check_scope(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("\033[31mIdentifier undeclared\033[0m\n");exit(0);}
			              if(!check_array(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("\033[31mArray Identifier has No Subscript\033[0m\n");exit(0);}
			              if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              $$ = 1;
			              else
			              $$ = -1;
			              }
			| array_identifier {if(!check_scope(current_identifier)){printf("%s\n",current_identifier);yyerror("\033[31mIdentifier undeclared\033[0m\n");exit(0);}} '[' expression ']'
			                   {if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              		$$ = 1;
			              		else
			              		$$ = -1;
			              		};

immutable
			: '(' expression ')' {if($2==1) $$=1; else $$=-1;}
			| call
			| constant {if($1==1) $$=1; else $$=-1;};

call
			: identifier '('{ strcpy(previous_operator,"(");
			             if(!check_declaration(current_identifier, "Function"))
			             { yyerror("\033[31mFunction not declared\033[0m"); exit(0);}
			             insert_SymbolTable_function(current_identifier);
						 strcpy(currfunccall,current_identifier);
			             } arguments ')'
						 { if(strcmp(currfunccall,"printf"))
							{
								if(getSTparamscount(currfunccall)!=call_params_count)
								{
									yyerror("\033[31mNumber of parameters not same as number of arguments during function call!\033[0m");
									//printf("Number of arguments in function call %s doesn't match number of parameters\n", currfunccall);
									exit(8);
								}
							}
						 };

arguments
			: arguments_list | ;

arguments_list
			: expression { call_params_count++; } A ;

A
			: ',' expression { call_params_count++; } A
			| ;

constant
			: integer_constant 	{  insert_type(); $$=1; }
			| string_constant	{  insert_type(); $$=-1;}
			| float_constant	{  insert_type(); }
			| character_constant{  insert_type();$$=1; };


%%

extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insert_SymbolTable_type(char *,char *);
void insert_SymbolTable_value(char *, char *);
void insert_ConstantTable(char *, char *);
void insert_SymbolTable_arraydim(char *, char *);
void insert_SymbolTable_funcparam(char *, char *);
void printSymbolTable();
void printConstantTable();


int main()
{
	yyin = fopen("input.txt", "r");
	yyparse();

	if(flag == 0)
	{

		printf("\033[6;32mVALID PARSE\033[0m\n");
		printf("%50s \033[33mSYMBOL TABLE\033[0m \n", " ");
		printf("%50s %s\n", " ", "\033[33m------------\033[0m");
		printSymbolTable();

		printf("\n\n%30s \033[33mCONSTANT TABLE\033[0m \n", " ");
		printf("%30s %s\n", " ", "\033[33m--------------\033[0m");
		printConstantTable();
	}
}

void yyerror(char *s)
{
	printf("\033[31mLine No. : %d %s %s\033[0m\n",yylineno, s, yytext);
	flag=1;
	printf("\n\033[31mUNSUCCESSFUL: INVALID PARSE\033[0m\n");
}

void insert_type()
{
	insert_SymbolTable_type(current_identifier,current_type);
}

void insert_value()
{
	if(strcmp(previous_operator, "=") == 0)
	{	insert_SymbolTable_value(current_identifier,current_value);
	}
}

void insert_dimensions()
{
    insert_SymbolTable_arraydim(current_identifier, current_value);
}

void insert_parameters()
{
    insert_SymbolTable_funcparam(current_function, current_identifier);
}

int yywrap()
{
	return 1;
}
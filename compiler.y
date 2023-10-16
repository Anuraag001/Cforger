%{
    #include <stdio.h>
    #include <stdlib.h>
    

 /*%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INT LONG REGISTER RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE
%token ID NUMBER SPECIAL _CHAR _STRING PRINTF SCANF MAIN SPACE
%token string_constant character_constant INCREMENT DECREMENT AND_AND OR_OR NOT LEFT_SHIFT RIGHT_SHIFT SUBTRACT_EQUAL ADD_EQUAL MOD_EQUAL MULTIPLE_EQUAL DIVIDE_EQUAL GREATER LESSER LESS_EQUAL GREAT_EQUAL EQUAL_EQUAL NOT_EQUAL _INTEGER _FLOAT*/
%}

%nonassoc IF
%token AUTO CHAR CONST DOUBLE ENUM EXTERN FLOAT INT LONG REGISTER SHORT SIGNED SIZEOF STATIC STRUCT TYPEDEF UNION UNSIGNED VOLATILE 
%token RETURN MAIN
%token VOID
%token WHILE FOR DO 
%token BREAK CONTINUE GOTO
%token ENDIF
%token SWITCH CASE DEFAULT
%token PRINTF SCANF LEFT_SHIFT RIGHT_SHIFT MULTIPLE_EQUAL EQUAL_EQUAL SPECIAL _CHAR SPACE _STRING WHITESPACE
%expect 2

%token ID
%token _INTEGER string_constant _FLOAT character_constant

%nonassoc ELSE

%right MOD_EQUAL
%right MULTIPLY_EQUAL DIVIDE_EQUAL
%right ADD_EQUAL SUBTRACT_EQUAL
%right '='

%left OR_OR
%left AND_AND
%left '^'
%left EQUAL NOT_EQUAL
%left LESS_EQUAL LESSER GREAT_EQUAL GREATER
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
			| structure_dec;

structure_dec
			: STRUCT ID  '{' structure_content  '}' ';';

structure_content : variable_dec structure_content | ;

variable_dec
			: datatype variables ';' 
			| structure_initialize;

structure_initialize 
			: STRUCT ID variables;

variables
			: ID_name multiple_variables;

multiple_variables
			: ',' variables 
			| ;

ID_name 
			: ID extended_ID;

extended_ID : array_ID | '=' expression ; 

array_ID
			: '[' array_dims
			| ;

array_dims
			: _INTEGER ']' initilization
			| ']' string_initilization;

initilization
			: string_initilization
			| array_initialization
			| ;

string_initilization
			: '=' string_constant ;

array_initialization
			: '=' '{' array_values '}';

array_values
			: _INTEGER multiple_array_values;

multiple_array_values
			: ',' array_values 
			| ;


datatype 
			: INT | CHAR | FLOAT | DOUBLE 
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
			: datatype ID '(';

function_parameters
			: parameters ')' statement;

parameters 
			: datatype all_parameter_IDs | ;

all_parameter_IDs 
			: parameter_ID multiple_parameters;

multiple_parameters
			: ',' parameters 
			| ;

parameter_ID 
			: ID extended_parameter;

extended_parameter
			: '[' ']'
			| ;

statement 
			: expression_statment | multiple_statement 
			| conditional_statements | iterative_statements 
			| return_statement | break_statement 
			| variable_dec;

multiple_statement 
			: '{' statments '}' ;

statments 
			: statement statments
			| ;

expression_statment 
			: expression ';' 
			| ';' ;

conditional_statements 
			: IF '(' simple_expression ')' statement extended_conditional_statements;

extended_conditional_statements
			: ELSE statement
			| ;

iterative_statements 
			: WHILE '(' simple_expression ')' statement 
			| FOR '(' for_initialization simple_expression ';' expression ')' 
			| DO statement WHILE '(' simple_expression ')' ';';

for_initialization
			: variable_dec
			| expression ';'
			| ';' ;

return_statement 
			: RETURN return_suffix;

return_suffix
			: ';' 
			| expression ';' ;

break_statement 
			: BREAK ';' ;

expression 
			: iden expressions
			| simple_expression ;

expressions
			: '=' expression 
			| ADD_EQUAL expression 
			| SUBTRACT_EQUAL expression 
			| MULTIPLY_EQUAL expression 
			| DIVIDE_EQUAL expression 
			| MOD_EQUAL expression 
			| INCREMENT 
			| DECREMENT ;

simple_expression 
			: and_expression simple_expression_breakup;

simple_expression_breakup 
			: OR_OR and_expression simple_expression_breakup | ;

and_expression 
			: unary_relation_expression and_expression_breakup;

and_expression_breakup
			: AND_AND unary_relation_expression and_expression_breakup
			| ;

unary_relation_expression 
			: NOT unary_relation_expression 
			| regular_expression ;

regular_expression 
			: sum_expression regular_expression_breakup;

regular_expression_breakup
			: relational_operators sum_expression 
			| ;

relational_operators 
			: GREAT_EQUAL
			| LESS_EQUAL
			| GREATER
			| LESSER
			| EQUAL
			| NOT_EQUAL;

sum_expression 
			: sum_expression sum_operators term 
			| term ;

sum_operators 
			: '+' 
			| '-' ;

term
			: term multiply_operators factor 
			| factor ;

multiply_operators 
			: '*' | '/' | '%' ;

factor 
			: func | iden ;

iden 
			: ID 
			| iden extended_iden;

extended_iden
			: '[' expression ']' 
			| '.' ID;

func 
			: '(' expression ')' 
			| func_call | constant;

func_call
			: ID '(' arguments ')';

arguments 
			: arguments_list | ;

arguments_list 
			: expression extended_arguments;

extended_arguments
			: ',' expression extended_arguments 
			| ;

constant 
			: _INTEGER
			| string_constant	
			| _FLOAT
			| character_constant;

%%
int yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int main(){
    yyparse();
    return 0;
}
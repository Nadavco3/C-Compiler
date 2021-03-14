%{
 #define _GNU_SOURCE
 #include "lex.yy.c"
 #include "semantics.c"
 #include "3AC.c"
 #include "header.h"

 int tab=0;
%}

%union{
   struct node *node;
   char *string;
}

%token <string> WHILE IF ELSE FOR DO ADRS
%token <string> RETURN MAIN
%token <string> BOOL STRING CHAR INTEGER PCHAR PINT PREAL NULLPOINTER REAL ID
%token <string> FUNCTION VAR VOID
%token <string> PLUS MINUS MUL DIV LEFTBRACE RIGHTBRACE GE LE NE EQ G L AND OR NOT ASSIGN
%token <string> BOOLVAL INTEGERNUM REALNUM STRINGVAL CHARVAL

%type <node> program process code proc func main function_var return_type arguments parmeters parm_id var_list_string
%type <node> body body_void declar_list var_declar var_list statement_list statement while do_while for identifier_string
%type <node> function_call function_call_parm return_expr assignment expr identifier val declar assignment_list
%type <string> type


%left OR
%left AND
%left GE LE NE EQ G L ASSIGN
%left PLUS MINUS
%left MUL DIV
%left NOT ADRS
%left LEFTBRACE RIGHTBRACE

%nonassoc IFX
%nonassoc ELSE


%%
program:
    process
    {
		node * asttree=mknode("CODE","",$1,NULL);
		//printf("\nchecking semantics...\n");
		//initializeGlobalScope(asttree);
		//printf("\nprint ast:\n");
		//printTree(asttree);
		printf("\nprint 3AC:\n");
		generateLabels(asttree);
		generate3AC(asttree);

    }
    ;

process:
		code process {$$= mknode("","",$1,$2);}
		| code       {$$=mknode("","",$1,NULL);}
		| main       {$$=mknode("","",$1,NULL);}
		| main process {$$= mknode("","",$1,$2);}
		;

code:
		proc    { $$ = $1; }
		|func  { $$ = $1; }
		;

proc:
		FUNCTION VOID ID function_var '{' body_void '}' {$$=mknode_new("FUNCTION",$3,$4,mknode("TYPE ",$2,NULL,NULL),$6,NULL);}
		;

func:
		FUNCTION return_type ID function_var '{' body '}' {$$=mknode_new("FUNCTION",$3,$4,$2,$6,NULL);}
		;

main:
		FUNCTION VOID MAIN LEFTBRACE RIGHTBRACE '{' body_void '}' {$$=mknode("MAIN","",mknode("TYPE ",$2,NULL,NULL),$7);}
		;

function_var: 
		LEFTBRACE arguments RIGHTBRACE {$$=mknode("ARGS","",$2,NULL);}
		|LEFTBRACE RIGHTBRACE {$$=mknode("ARGS","NONE",NULL,NULL);}
		;

return_type:
		type { $$ = mknode("TYPE ",$1,NULL,NULL); }
		;

arguments: 
		parmeters {$$=$1;} 
		|parmeters ';' arguments {$$=mknode("","",$1,$3);} 
		;

parmeters:
		type parm_id {$$=mknode($1,"",$2,NULL);}
		;

parm_id:
		ID {$$=mknode("",$1,NULL,NULL);} 
		|ID ',' parm_id {$$=mknode("","",mknode("",$1,NULL,NULL),$3);} 
		;

type:
		INTEGER { $$ = $1; }
		| CHAR 	{ $$ = $1; }
		| REAL  { $$ = $1; }
		| PINT  { $$ = $1; }
		| PCHAR { $$ = $1; }
		| PREAL { $$ = $1; }
		| BOOL  { $$ = $1; }
		;

body:
		declar_list statement_list			{$$=mknode_new("BODY","",$1,$2,NULL,NULL);}
		|declar_list 								{$$=mknode("BODY","",$1,NULL);}
		;

body_void:
		declar_list statement_list 			{$$=mknode("BODY","",$1,$2);}
		|declar_list 						{$$=mknode("BODY","",$1,NULL);}
		;

declar_list:
		declar declar_list 			{$$=mknode("","",$1,$2);}
		|%empty 						{$$=NULL;}
		;
declar:
		code 							{$$=$1;}
		|var_declar 					{$$=$1;}
		;

var_declar:
		VAR type var_list ';' 			{$$=mknode("DECLAR",$2,$3,NULL);}
		|STRING var_list_string ';' 	{$$=mknode("DECLAR",$1,$2,NULL);}
		;
	
var_list_string:
       	identifier_string ASSIGN expr 					        {$$=mknode("ASSIGN","=",$1,$3);}
		|identifier_string			   					        {$$=$1;}
		|identifier_string ASSIGN expr  ',' var_list_string     {$$=mknode("","",mknode("ASSIGN","=",$1,$3),$5);}
		|identifier_string ',' var_list_string 					{$$=mknode("","",$1,$3);}
		;

var_list:
		identifier ASSIGN expr 					{$$=mknode("ASSIGN","=",$1,$3);}
		|identifier			   					{$$=$1;}
		|identifier ASSIGN expr  ',' var_list   {$$=mknode("","",mknode("ASSIGN","=",$1,$3),$5);}
		|identifier ',' var_list 				{$$=mknode("","",$1,$3);}	
		;

statement_list:
		statement statement_list 		{node* newnode=$1;
										 newnode->next=$2;
										 $$=mknode("","",$1,$2);
										 }
		|statement 						{$$=$1;}
		;

statement:	
		IF LEFTBRACE expr RIGHTBRACE statement %prec IFX 			{$$=mknode("IF","",$3,$5);}
		|IF LEFTBRACE expr RIGHTBRACE statement ELSE statement 		{$$=mknode_new("IF-ELSE","",$3,$5,$7,NULL);}
		|assignment ';' 											{$$=$1;}
		|'{' var_declar statement_list '}'							{$$=mknode("BLOCK","",$2,$3);}
		| '{' var_declar  '}'										{$$=mknode("BLOCK","",$2,NULL);}
		|'{' statement_list '}'										{$$=mknode("BLOCK","",$2,NULL);}
		| '{' '}' 													{$$=mknode("BLOCK","",NULL,NULL);}
		|while 														{$$=$1;}
		|do_while 													{$$=$1;}
		|for 														{$$=$1;}
		|function_call ';' 											{$$=$1;}
		|return_expr												{$$=$1;}
		;

while:
	WHILE LEFTBRACE expr RIGHTBRACE statement 						{$$=mknode("WHILE","",$3,$5);}
	;

do_while:
		DO '{' statement_list '}' WHILE LEFTBRACE expr RIGHTBRACE ';' 				{$$=mknode("DO-WHILE","",mknode("BLOCK","",$3,NULL),$7);}
		|DO '{' var_declar statement_list '}' WHILE LEFTBRACE expr RIGHTBRACE ';' 	{$$=mknode("DO-WHILE","",mknode("BLOCK","",$3,$4),$8);}
		|DO '{' var_declar '}' WHILE LEFTBRACE expr RIGHTBRACE ';' 					{$$=mknode("DO-WHILE","",mknode("BLOCK","",$3,NULL),$7);}
		;

for:
		FOR LEFTBRACE assignment_list ';' expr ';' assignment_list RIGHTBRACE statement 	{$$=mknode_new("FOR","",$3,$5,$9,$7);}
		;

function_call:
		ID LEFTBRACE function_call_parm RIGHTBRACE  								{$$=mknode("FUNCTION-CALL",$1,mknode("var-CALL","",$3,NULL),NULL);}
		|ID LEFTBRACE RIGHTBRACE 													{$$=mknode("FUNCTION-CALL",$1,mknode("var-CALL","NONE",NULL,NULL),NULL);}
		;


function_call_parm:
		expr 													{$$=mknode("PARM","",$1,NULL);}
		|expr ',' function_call_parm 							{$$=mknode("","",mknode("PARM","",$1,NULL),$3);}
		;

return_expr:
		RETURN expr ';' 										{$$=mknode($1,"",$2,NULL);}
		;

assignment_list:
		assignment {$$=$1;}
		|assignment assignment_list {$$=mknode("","",$1,$2);}
		;

assignment:
		identifier ASSIGN expr 				{$$=mknode("ASSIGN","=",$1,$3);}
		|identifier_string ASSIGN expr 		{$$=mknode("ASSIGN","=",$1,$3);}
		|ADRS ID ASSIGN expr 				{$$=mknode("ASSIGN","=",mknode("POINTER-EXPR",$1,mknode("ID",$2,NULL,NULL),NULL),$4);}
		|MUL ID ASSIGN expr 				{$$=mknode("ASSIGN","=",mknode("POINTER-EXPR",$1,mknode("ID",$2,NULL,NULL),NULL),$4);}
		;

expr:
		expr PLUS expr 				{$$=mknode("EXPR",$2,$1,$3);}
		|expr MUL expr 				{$$=mknode("EXPR",$2,$1,$3);}
		|expr MINUS expr 			{$$=mknode("EXPR",$2,$1,$3);}		
		|expr DIV expr 				{$$=mknode("EXPR",$2,$1,$3);}
		|expr L expr 				{$$=mknode("EXPR",$2,$1,$3);}
		|expr G expr 				{$$=mknode("EXPR",$2,$1,$3);}
		|expr LE expr 				{$$=mknode("EXPR",$2,$1,$3);}
		|expr GE expr 				{$$=mknode("EXPR",$2,$1,$3);}
		|expr NE expr 				{$$=mknode("EXPR",$2,$1,$3);}
		|expr EQ expr 				{$$=mknode("EXPR",$2,$1,$3);}
		|expr AND expr 				{$$=mknode("EXPR",$2,$1,$3);}
		|expr OR expr 				{$$=mknode("EXPR",$2,$1,$3);}
		|NOT expr 					{$$=mknode("EXPR",$1,$2,NULL);}
		|ADRS expr					{$$=mknode("POINTER-EXPR","&",$2,NULL);}
		|MUL expr                   {$$=mknode("POINTER-EXPR",$1,$2,NULL);}
		|LEFTBRACE expr RIGHTBRACE  {$$=$2;}
		|val						{$$=$1;}
		|function_call  			{$$=$1;}
		;

identifier:
		ID                 { $$ = mknode("ID",$1,NULL,NULL); }
		;

identifier_string:
		ID '[' expr ']'    {$$ = mknode("STR","",mknode("ID",$1,NULL,NULL),$3);}
		;

val:
		INTEGERNUM               { $$ = mknode("INT",$1,NULL,NULL);}
		|MINUS INTEGERNUM		 { $$ = mknode("UMINUS","",mknode("INT",$2,NULL,NULL),NULL); }
		|MINUS REALNUM           { $$ = mknode("UMINUS","",mknode("REAL",$2,NULL,NULL),NULL);}
		|MINUS identifier		 { $$ = mknode("UMINUS","",$2,NULL);}
		| REALNUM                { $$ = mknode("REAL",$1,NULL,NULL); }
		| CHARVAL                { $$ = mknode("CHAR",$1,NULL,NULL); }
		| STRINGVAL              { $$ = mknode("STRING",$1,NULL,NULL); }
		| identifier             { $$ = $1; }
		| identifier_string		 { $$ = $1; }
		| BOOLVAL                { $$ = mknode("BOOL",$1,NULL,NULL); }
		| NULLPOINTER            { $$ = mknode("NULL",$1,NULL,NULL); }
		| '|' ID '|'  			 { $$ =mknode("LEN",$2,NULL,NULL);}
		;
	
%%

void yyerror(char *s){
	if(strcmp(s,"syntax error")==0)
		fprintf(stderr, "%s\n in line%d\ngramer can't reduce %s with gramers rule \n",s,yylineno,(yytext));
	else
		fprintf(stderr, "%s\n%s\n",s,yytext);
	exit(1);
}

node *mknode(char* type,char* id, node *node1, node *node2){
		return mknode_new (type,id,node1,node2,NULL,NULL);
	}

node* mknode_new (char* type,char* id,node *node1, node *node2,node* node3,node* node4){
	node *newnode = (node*)malloc(sizeof(node));
	char* newtype = (char*)malloc(sizeof(type)+1);
	char* newid = (char*)malloc(sizeof(id)+1);	
	strcpy(newtype,type);
	strcpy(newid,id);
	newnode->id=newid;
	newnode->strsize=-1;
	newnode->nodeType=newtype;
	newnode->node1=node1;
	newnode->node2=node2;
	newnode->node3=node3;
	newnode->node4=node4;
	newnode->code=strdup("");
	newnode->var=strdup("");
	newnode->truelabel=strdup("");
	newnode->falselabel=strdup("");
	newnode->next=NULL;
	newnode->flag=false;
	return newnode;
}

void printTree(node* root){	
	/*any nodeType node that has a value \n tab */	
	if(strcmp(root->nodeType,"")!=0&&strcmp(root->nodeType,"ID")!=0&&strcmp(root->nodeType,"INT")!=0&&strcmp(root->nodeType,"LEN")!=0&&
	strcmp(root->nodeType,"CHAR")!=0&&strcmp(root->nodeType,"STRING")!=0
	&&strcmp(root->nodeType,"REAL")!=0&&strcmp(root->nodeType,"REAL*")!=0&&strcmp(root->nodeType,"INT*")!=0&&strcmp(root->nodeType,"CHAR*")!=0){
		if(strcmp(root->nodeType,"var-CALL")!=0){
			printf("\n");		
			for(int i=0;i<tab;i++)
				printf("    ");
		}
		printf("(");
		tab++;
	}
	/*print any nodeType except EXPR ASSIGN expr DECLAR FUCNTION-CALL var-CALL*/
	if(strcmp(root->nodeType,"EXPR")!=0&&strcmp(root->nodeType,"ASSIGN")!=0&&strcmp(root->nodeType,"FUNCTION-CALL")!=0
	&&strcmp(root->nodeType,"var-CALL")!=0&&strcmp(root->nodeType,"expr")!=0
	&&strcmp(root->nodeType,"DECLAR")!=0&&strcmp(root->nodeType,"POINTER")!=0&&strcmp(root->nodeType,"POINTER-EXPR")!=0&&
	strcmp(root->nodeType,"STR")!=0&&strcmp(root->nodeType,"ID")!=0&&strcmp(root->nodeType,"INT")!=0&&strcmp(root->nodeType,"LEN")!=0&&
	strcmp(root->nodeType,"CHAR")!=0&&strcmp(root->nodeType,"STRING")!=0
	&&strcmp(root->nodeType,"REAL")!=0&&strcmp(root->nodeType,"REAL*")!=0&&strcmp(root->nodeType,"INT*")!=0&&strcmp(root->nodeType,"CHAR*")!=0)			
		printf("%s",root->nodeType);

	/*every time in tree we see "" print space */
	if(strcmp(root->nodeType,"")==0&&strcmp(root->id,"")!=0)
		printf(" ");
	

	if(strcmp(root->nodeType,"FUNCTION")==0){
		printf("\n");
		for(int i=0;i<tab;i++)
			printf("    ");	
	}

	/*prints the id type of the node even if empty(dont have an id -> "") */	
	printf("%s",root->id);
	
	if(root->node1){
		printTree(root->node1);
	}
	if(root->node2){
		printTree(root->node2);
	}
	if(root->node3){
		printTree(root->node3);
	}
	if(root->node4){
		printTree(root->node4);
	}
	
	if(strcmp(root->nodeType,"")!=0&&strcmp(root->nodeType,"POINTER")!=0&&strcmp(root->nodeType,"ID")!=0&&strcmp(root->nodeType,"INT")!=0&&strcmp(root->nodeType,"LEN")!=0&&
	strcmp(root->nodeType,"CHAR")!=0&&strcmp(root->nodeType,"STRING")!=0
	&&strcmp(root->nodeType,"REAL")!=0&&strcmp(root->nodeType,"REAL*")!=0&&strcmp(root->nodeType,"INT*")!=0&&strcmp(root->nodeType,"CHAR*")!=0){
		tab--;
		if((strcmp(root->nodeType,"FUNCTION")==0||strcmp(root->nodeType,"MAIN")==0||strcmp(root->nodeType,"DO-WHILE")==0||strcmp(root->nodeType,"FOR")==0
		||strcmp(root->nodeType,"CODE")==0||strcmp(root->nodeType,"BODY")==0||strcmp(root->nodeType,"var")==0
		||strcmp(root->nodeType,"IF")==0||strcmp(root->nodeType,"BLOCK")==0||strcmp(root->nodeType,"DECLAR")==0||strcmp(root->nodeType,"IF-ELSE")==0
		||(root->node1&&strcmp(root->node1->nodeType,"EXPR")==0||root->node2&&strcmp(root->node2->nodeType,"EXPR")==0))
		&&(root->node1||root->node2||root->node3||root->node3)){
			printf("\n");		
			for(int i=0;i<tab;i++)
				printf("    ");		
			printf(")");
		}
		else				
			printf(")");
	}
}

int main(){
	yyparse();
	printf("\n");
	return 0;
}

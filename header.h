#ifndef HEADER
#define HEADER

 #include <stdbool.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 typedef struct node{
   char *nodeType;
   char *id;
   int strsize;
   char* code;
   char* var;
   char* truelabel;
   char* falselabel;
   bool flag;
   struct node* next;
   struct node *node1;
   struct node *node2;
   struct node *node3;
   struct node *node4;
 }node;
 
  
typedef enum 
{ 
    VARIABLE,
    FUNC  
} identifierType;

/* property of function and var */
  typedef struct symbol
 {
   char* id;
   char* type;
   identifierType idType;
   char** args;
   int args_size;
   struct symbol* next;
 }symbol;

/*symbol table */
  typedef struct scope
 {
   symbol* headSymbol;
   struct scope* nextScope;
 }scope;

 /*stack of scopes */
  typedef struct Scopestack
 {
   scope* HeadScope;
 }Scopestack;

/*stack functions*/
 void pop(Scopestack* );
 void push(Scopestack*,scope*);
 void createStack();
 void printStack();

/*link list function of symbol */
symbol* createSymbol(char*,char*,identifierType,char**);
void addSymbol(symbol*,scope*);
void makeArgs(node*,char***);
void fillArgs(node*,char*,char***);
void fillDeclars(node*,char*);
void printSymbol(symbol*);
bool checkIfExistsInScope(symbol*,scope*);
symbol* getSymbol(char*);
bool checkIfExistsInStack(char*);
char* checkExpr(node*);
void checkNumOfArg(node* ,char***);
void checkAssign(node*);
char* checkFunction(node*);
char* checkCharAt(node*);
void chainFunction(symbol*);


/*scope functions*/
scope* createScope();

void checkSemantics(node*);

void generate3AC(node*);
char* freshLabel();
char* freshVar();
char* itoa(int);
char* generateNum(char*,char*);

 int yylex();
 node* mknode(char*,char*,node*,node*); 
 node* mknode_new (char*,char*,node*, node*,node*,node*);
 void printTree(node*);
 #endif
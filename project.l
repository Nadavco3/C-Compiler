%{
 #include <stdlib.h>
 #include "y.tab.h"
 void yyerror(char*);
%}
%%

[/][*][A-Z|a-z|0-9| |\t|\n|!@#$%^&"*()_+<>=?;',{}\/|\[\]]*[*][/] ;
['][A-Z|a-z|0-9| |\t|\n|!@#$%^&"*()_+<>=?;',{}\/|\[\]]['] {yylval.string=strdup(yytext);return CHARVAL;}
["][a-zA-Z0-9!@#$%^&*()_+=./;,-`~ ]*["] {yylval.string=strdup(yytext);return STRINGVAL;}
[0][xX][0-9ABCDEF]+ {yylval.string=strdup(yytext);return INTEGERNUM;}
[0-9]+ {yylval.string=strdup(yytext);return INTEGERNUM;}
[0-9]+[.][0-9]+ {yylval.string=strdup(yytext);return REALNUM;}
[0-9]+[.][0-9]+[Ee][-+]?[0-9]+ {yylval.string=strdup(yytext);return REALNUM;}
[0-9]+[Ee][-+]?[0-9]+ {yylval.string=strdup(yytext);return REALNUM;}
[-+]?[.][0-9]+[Ee][0-9]+ {yylval.string=strdup(yytext);return REALNUM;}
\[ {return yytext[0];}
\] {return yytext[0];}
[|] {return yytext[0];}
[+] {yylval.string=strdup(yytext);return PLUS;}
[-] {yylval.string=strdup(yytext);return MINUS;}
[*] {yylval.string=strdup(yytext);return MUL;}
[/] {yylval.string=strdup(yytext);return DIV;}
[(] {yylval.string=strdup(yytext);return LEFTBRACE;}
[)] {yylval.string=strdup(yytext);return RIGHTBRACE;}
[;,] {return yytext[0];}
[{}] {return yytext[0];}
[&] {yylval.string=strdup(yytext);return ADRS;}
[=] {yylval.string=strdup(yytext);return ASSIGN;}
[<]  {yylval.string=strdup(yytext);return G;}
[>]  {yylval.string=strdup(yytext);return L;}
[>][=] {yylval.string=strdup(yytext);return GE;}
[<][=] {yylval.string=strdup(yytext);return LE;}
[!][=] {yylval.string=strdup(yytext);return NE;}
[=][=] {yylval.string=strdup(yytext);return EQ;}
[|][|] {yylval.string=strdup(yytext);return OR;}
[&][&] {yylval.string=strdup(yytext);return AND;}
[!]  {yylval.string=strdup(yytext);return NOT;}
main {yylval.string=strdup(yytext);return MAIN;}
function {yylval.string="FUNCTION";return FUNCTION;}
int {yylval.string="INT";return INTEGER;}
real {yylval.string="REAL";return REAL;}
string {yylval.string="STRING";return STRING;}
bool {yylval.string="BOOL";return BOOL;}
char {yylval.string="CHAR";return CHAR;}
int\* {yylval.string="INT*";return PINT;}
char\* {yylval.string="CHAR*";return PCHAR;}
real\* {yylval.string="REAL*";return PREAL;}
if {yylval.string="IF";return IF;}
else {yylval.string="ELSE";return ELSE;}
while {yylval.string="WHILE";return WHILE;}
for {yylval.string="FOR";return FOR;}
var {yylval.string="VAR";return VAR;}
return {yylval.string="RETURN";return RETURN;}
null {yylval.string="NULL";return NULLPOINTER;}
void {yylval.string="VOID";return VOID;}
do {yylval.string="DO";return DO;}
true|false {yylval.string=strdup(yytext);return BOOLVAL;}
[\t ] ;
[\n] yylineno++; 
[A-Za-z]+[A-Za-z0-9]*_?[A-Za-z0-9]* {yylval.string=strdup(yytext);return ID;}
. ;
%%

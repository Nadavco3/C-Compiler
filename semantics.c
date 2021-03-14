 #include "header.h"

 Scopestack* stack;
 symbol* functionSymbols;
 symbol* functions_returns;
 bool flagReturn;
 bool flagMain;
 int count;
 int Argscount;


 void pop(Scopestack* stack){
  stack->HeadScope=stack->HeadScope->nextScope;
 }

 void push(Scopestack* stack,scope* newscope){
   newscope->nextScope=stack->HeadScope;
   stack->HeadScope=newscope;
 }

 symbol* createSymbol(char* id,char* type,identifierType idType,char** args){
     symbol* newSymbol= (symbol*)malloc(sizeof(symbol));
     char* newtype = (char*)malloc(sizeof(type)+1);
	 char* newid = (char*)malloc(sizeof(id)+1);	
	 strcpy(newtype,type);
	 strcpy(newid,id);
     newSymbol->id=newid;
     newSymbol->type=newtype;
     newSymbol->idType=idType;
     newSymbol->next=NULL;
     newSymbol->args=args;
     newSymbol->args_size=0;
     return newSymbol;
 }

 void addSymbol(symbol* newSymbol,scope* currentscope){
    if(!checkIfExistsInScope(newSymbol,currentscope)){
        newSymbol->next=currentscope->headSymbol;
        currentscope->headSymbol=newSymbol;
    }
    else
    {
        printf("redeclaration of ‘%s' at the same scope\n",newSymbol->id);
        exit(1);
    }
 }

 void createStack(){
     stack=(Scopestack*)malloc(sizeof(Scopestack));
     stack->HeadScope=NULL;
 }

 scope* createScope(){
    scope* newscope=(scope*)malloc(sizeof(scope));
    newscope->headSymbol=NULL;
    newscope->nextScope=NULL;
    return newscope;
 }

 void initializeGlobalScope(node* root){
     createStack();
     push(stack,createScope());
     functions_returns=NULL;
     flagMain=false;
     checkSemantics(root);
     if(flagMain!=true){
         printf("main cannot be found\n");
     }
 }

 void makeArgs(node* root,char*** funcArgs){
    
     
     if (root&&strcmp(root->nodeType,"")!=0)
     {
         fillArgs(root,root->nodeType,funcArgs);
     }

    if(root->node1){
		makeArgs(root->node1,funcArgs);
	}
	if(root->node2){
		makeArgs(root->node2,funcArgs);
	}
 }

 void fillArgs(node* root,char* argType,char*** funcArgs){
    
     if(root&&strcmp(root->id,"")!=0){
         if(count==0){
             count++;
             (*funcArgs)=(char**)malloc(sizeof(char*)*count);
         }
         else{
             count++;
            (*funcArgs)=(char**)realloc((*funcArgs),sizeof(char*)*count);
         }
         if(functionSymbols==NULL){
             functionSymbols=createSymbol(root->id,argType,VARIABLE,NULL);
         }
         else
         {
             symbol* temp=createSymbol(root->id,argType,VARIABLE,NULL);
             temp->next=functionSymbols;
             functionSymbols=temp;       
         }        
         (*funcArgs)[count-1]=(char*)malloc(sizeof(argType)+1);
         strcpy((*funcArgs)[count-1],argType);
         strcat((*funcArgs)[count-1],"\0");       
     }

    if(root->node1){
		fillArgs(root->node1,argType,funcArgs);
	}
	if(root->node2){
		fillArgs(root->node2,argType,funcArgs);
	}
 }

 void fillDeclars(node* root,char* type){
    if(root&&strcmp(root->nodeType,"ID")==0){
        symbol* news=createSymbol(root->id,type,VARIABLE,NULL);
        addSymbol(news,stack->HeadScope);
    }
    if(root&&strcmp(root->nodeType,"ASSIGN")==0){
        if(strcmp(root->node1->nodeType,"STR")==0){
            if(strcmp(checkExpr(root->node1->node2),"INT")!=0||strcmp(checkExpr(root->node2),"STRING")!=0){
                printf("in declartion expr in [] must be int and assigment expr must be string\n");
                exit(1);
            }
            symbol* news=createSymbol(root->node1->node1->id,type,VARIABLE,NULL);
            addSymbol(news,stack->HeadScope);
            return;
        }
        symbol* news=createSymbol(root->node1->id,type,VARIABLE,NULL);
        addSymbol(news,stack->HeadScope);
        checkAssign(root);
        return;
    }
    
    if(root->node1){
		fillDeclars(root->node1,type);
	}
	if(root->node2){
		fillDeclars(root->node2,type);
	}
 }

 void printSymbol(symbol* prop){
    printf("%s\n",prop->id);
    
    if(prop->idType==FUNC)
        printf("function type: ");
    else{
        printf("var type: ");
    }
    printf("%s\n",prop->type);
    
    for(int i=0;i<prop->args_size;i++){
        printf("%s ",prop->args[i]);
    }
    
    printf("\n");
    
}

 void printStack(){
     scope* temp=stack->HeadScope;
     while(temp!=NULL){
         symbol* currentsymbol=temp->headSymbol;
         while(currentsymbol!=NULL){
            printSymbol(currentsymbol);
            currentsymbol=currentsymbol->next;
         }
         if(temp->nextScope!=NULL){
            printf("NextScope\n");
         }
         temp=temp->nextScope;
     }
 }

 bool checkIfExistsInScope(symbol* newsymbol,scope* currentscope){
   symbol* current=currentscope->headSymbol;
   while(current!=NULL){
       if(strcmp(current->id,newsymbol->id)==0)
            return true;
       current=current->next;
   }
   return false;
 }

 bool checkIfExistsInStack(char* id){
     scope* temp=stack->HeadScope;
     while (temp!=NULL)
     {
         if(checkIfExistsInScope(createSymbol(id,"INT",FUNC,NULL),temp)){
             return true;
         }
         temp=temp->nextScope;
     }
     return false;
     
 }

 symbol* getSymbol(char* id){
     scope* temp=stack->HeadScope;
     while(temp!=NULL){
         symbol* newSymbol=temp->headSymbol;
         while (newSymbol!=NULL)
         {
            if(strcmp(newSymbol->id,id)==0)
                return newSymbol;
            newSymbol=newSymbol->next;
         }
         temp=temp->nextScope;
     }
     return NULL;
 }

 char* typeChecking(char* type1,char* type2,char* op){
     
     switch(*op){
         case '+':
         case '-':
         case '*':
         case '/':
                    if(strcmp(type1,"INT")==0&&strcmp(type2,"INT")==0)
                        return "INT";
                    else if((strcmp(type1,"REAL")!=0&&strcmp(type1,"INT")!=0)||(strcmp(type2,"REAL")!=0&&strcmp(type2,"INT")!=0)){
                        printf("invalid artmetic operations types\n");
                        exit(1);
                        return "ERROR";
                    }
                    else
                        return "REAL";
            break;
         case '<':
         case '>':
                    if((strcmp(type1,"REAL")!=0&&strcmp(type1,"INT")!=0)||(strcmp(type2,"REAL")!=0&&strcmp(type2,"INT")!=0)){
                        printf("invalid logical expressions\n");
                        exit(1);
                        return "ERROR";
                    }
                    else
                        return "BOOL";
        

     }
    if(strcmp(op,"&&")==0||strcmp(op,"||")==0){
        if(strcmp(type1,"BOOL")==0&&strcmp(type2,"BOOL")==0)
                        return "BOOL";
                    else{
                        printf("invalid logical expressions\n");
                        exit(1);
                        return "ERROR";
                    }
    }
    if(strcmp(op,"==")==0||strcmp(op,"!=")==0){
        if(strcmp(type1,"STR")!=0&&strcmp(type1,"STRING")!=0&&strcmp(type1,type2)==0)
                return "BOOL";
        else{
                printf("invalid logical expressions\n");
                exit(1);
                return "ERROR";
        }
    }
    


 }


 char* checkPointerExpr(char* pointer_op,node* root){
        if(strcmp(pointer_op,"&")==0){
            if(strcmp(root->nodeType,"STR")==0){
                symbol* sm=getSymbol(root->node1->id);
                if(sm){
                    if(strcmp(sm->type,"STRING")==0)
                        return "CHAR*";
                    else{
                        printf("type of var %s not string ",sm->id);
                        exit(1);
                        return "ERROR";
                    }
                }
                else
                {
                    printf("undefined reference to ‘%s' \n",root->node1->id);
                    exit(1);
                    return "ERROR";
                }  
            }
            if(strcmp(root->nodeType,"ID")==0){
                symbol* sm=getSymbol(root->id);
                if(sm){
                    if(strcmp(sm->type,"INT")==0||strcmp(sm->type,"REAL")==0||strcmp(sm->type,"CHAR")==0)
                        return strcat(strdup(sm->type),strdup("*"));
                    else{
                        printf("type of var %s not int/real/char ",sm->id);
                        exit(1);
                        return "ERROR";
                    }
                }
                else
                {
                    printf("undefined reference to ‘%s' \n",root->id);
                    exit(1);
                    return "ERROR";
                }  
            }
            printf("cannot take the address of arbitrary expression  \n");
            exit(1);
            return "ERROR";
        }
        if(strcmp(pointer_op,"*")==0){
              if(strcmp(root->nodeType,"ID")==0){
                symbol* sm=getSymbol(root->id);
                if(sm){
                    if(strcmp(sm->type,"INT*")==0||strcmp(sm->type,"REAL*")==0||strcmp(sm->type,"CHAR*")==0){
                        char* newtype=strdup(sm->type);
                        newtype[strlen(newtype)-1]='\0';
                        return newtype;
                    }
                    else{
                        printf("type of var %s not pint/preal/pchar\n   ",sm->id);
                        exit(1);
                        return "ERROR";
                    }
                }
                else
                {
                    printf("undefined reference to ‘%s' \n",root->id);
                    exit(1);
                    return "ERROR";
                }
             
              }
              if(strcmp(root->nodeType,"EXPR")==0){
                    if (strcmp(root->id,"-")==0||strcmp(root->id,"+")==0)
                    {
                        if(strcmp(root->node1->nodeType,"ID")==0)
                        {
                            symbol* sm=getSymbol(root->node1->id);
                            if(sm){
                                    if(!(strcmp(sm->type,"INT*")==0||strcmp(sm->type,"REAL*")==0||strcmp(sm->type,"CHAR*")==0)){
                                        printf("type of var %s not pint/preal/pchar ",sm->id);
                                        exit(1);
                                        return "ERROR";
                                    }
                                    if (strcmp(checkExpr(root->node2),"INT")==0)
                                    {
                                        char* newtype=strdup(sm->type);
                                        newtype[strlen(newtype)-1]='\0';
                                        return newtype;
                                    }
                                    else
                                    {
                                        printf("type of expr in * is not int ");
                                        exit(1);
                                        return "ERROR";
                                    }
                                    
                                    
                                }
                            else
                                    {
                                     printf("undefined reference\n");
                                     exit(1);
                                     return "ERROR";
                                    }
                        }
                        else
                        {
                               printf("invalid pointer expression\n");
                               exit(1);
                               return "ERROR";
                        }
                            
                    }
                    else
                    {
                        printf("invalid pointer expression must be -/+");
                        exit(1);
                        return "ERROR";
                    }
                    
                    
            }
                    
        }
}

 char* checkExpr(node* root){
     
     if ((strcmp(root->nodeType,"STR")==0)){
        return checkCharAt(root);
     }   
     if((strcmp(root->nodeType,"POINTER-EXPR")==0)){
       return checkPointerExpr(root->id,root->node1);
     }   
     if(strcmp(root->nodeType,"EXPR")==0&&strcmp(root->id,"!")==0){
        char* type=checkExpr(root->node1);
        if(strcmp(type,"BOOL")==0)
            return "BOOL";
        else
        {
            printf("Error expr in  NOT not equal to Bool");
            exit(1);
            return "ERROR";
        }
        
     }
     if(strcmp(root->nodeType,"LEN")==0){
         symbol* newsym=getSymbol(root->id);
         if(newsym){
             if(strcmp(newsym->type,"STRING")==0)
                return "INT";
         }
         printf("Error expr in  | | not equal to String\n");
         exit(1);
         return "ERROR";
     }
     if (strcmp(root->nodeType,"ID")==0){
        symbol* tempsymbol=getSymbol(root->id);
        if(tempsymbol){
            return tempsymbol->type;
        }
        else
        {
            printf("undefined reference to ‘%s' \n",root->id);
            exit(1);
            return "ERROR";
        }
        
     } 
     if (strcmp(root->nodeType,"FUNCTION-CALL")==0){
      return checkFunction(root);
     }
     
     if (strcmp(root->nodeType,"UMINUS")==0){
         char* type=checkExpr(root->node1);
        if(strcmp("INT",type)!=0&&strcmp("REAL",type)!=0){
            printf("uminus must be before int or real but the expr type is %s\n",type);
            exit(1);
        }
        return strdup(type);
     }
     
     
     if(strcmp(root->nodeType,"EXPR")!=0){
         return root->nodeType;
     }  
     
     
     char* type1=checkExpr(root->node1);
     char* type2=checkExpr(root->node2);
     char* result= typeChecking(type1,type2,root->id);
     return result;

 }

 char* checkCharAt(node* root){
     if(strcmp(checkExpr(root->node1),"STRING")==0&&strcmp(checkExpr(root->node2),"INT")==0){
            return "CHAR";
     }
     else
     {
         printf("error expr inside [] must be int and '%s' must be string type \n",root->node1->id);
         exit(1);
         return "ERROR";
     }
     
 }

 void checkNumOfArg(node* root,char*** array){
     if(strcmp(root->nodeType,"PARM")==0){
        if(Argscount==0){
             Argscount++;
             (*array)=(char**)malloc(sizeof(char*)*Argscount);
        }     
        else
        {
            Argscount++;
            (*array)=(char**)realloc((*array),sizeof(char*)*Argscount);
        }
        char* type=checkExpr(root->node1);
        (*array)[Argscount-1]=(char*)malloc(sizeof(type)+1);
        strcpy((*array)[Argscount-1],type);
        strcat((*array)[Argscount-1],"\0");     
     }

     if(root->node1){
		checkNumOfArg(root->node1,array);
	}
	if(root->node2){
		checkNumOfArg(root->node2,array);
	}
	if(root->node3){
		checkNumOfArg(root->node3,array);
	}
	if(root->node4){
		checkNumOfArg(root->node4,array);
	}
 }

 char* checkFunction(node* root){
       if(checkIfExistsInStack(root->id)){
            Argscount=0;
            char** argsArray=NULL;
            checkNumOfArg(root->node1,&argsArray);
            symbol* sm=getSymbol(root->id);
            if (Argscount==sm->args_size)
            {
                for (int i = 0; i < sm->args_size; i++)
                {
                    if(strcmp(sm->args[i],argsArray[i])!=0){
                        printf("function '%s' arguments type is diffrent from declartion\n",sm->id);
                        exit(1);
                        return "ERROR";
                    }
                }
                return sm->type;
                
            }
            else
            {
                printf("different amount of arguments to function ‘%s' \n",root->id);
                exit(1);
                return "ERROR";
            } 
       }
       printf("undefined reference to ‘%s' \n",root->id);
       exit(1);
       return "ERROR";
 }
 
 void checkAssign(node* root){
     if(strcmp(checkExpr(root->node1),checkExpr(root->node2))!=0){
         if((strcmp(checkExpr(root->node1),"INT*")==0||strcmp(checkExpr(root->node1),"REAL*")==0||strcmp(checkExpr(root->node1),"CHAR*")==0)&&
         strcmp(checkExpr(root->node2),"NULL")==0){
            return;
         }
         printf("cannot assign between different types\n");
         exit(1);
     }
 }

 void chainFunction(symbol* function){
     flagReturn=false;
     symbol* newfunction=createSymbol(function->id,function->type,function->idType,NULL);
     newfunction->next=functions_returns;
     functions_returns=newfunction;
     
 }

 void checkSemantics(node* root){

    if(strcmp(root->nodeType,"FUNCTION")==0){
        char** argsArray=NULL;
        if(root->node1->node1!=NULL){
            functionSymbols=NULL;
            count=0;
            makeArgs(root->node1->node1,&argsArray);
        }
        if(strcmp(root->node1->id,"NONE")==0){
            count=0;
            functionSymbols=NULL;
        }
        symbol* newprop=createSymbol(root->id,root->node2->id,FUNC,argsArray);
        newprop->args_size=count; 
        addSymbol(newprop,stack->HeadScope);
        //
        chainFunction(newprop);
    }
    
    if(strcmp(root->nodeType,"MAIN")==0){
        if(flagMain){
            printf("cannot have more than one MAIN\n");
            exit(1);
            return;
        }
        else
        {
            count=0;
            functionSymbols=NULL;
            symbol* newprop=createSymbol(root->nodeType,root->node1->id,FUNC,NULL);
            newprop->args_size=0; 
            addSymbol(newprop,stack->HeadScope);
            chainFunction(newprop);
            flagMain=true;
        }
        
    }

    if(strcmp(root->nodeType,"BODY")==0){
        scope* newscope=createScope();
        push(stack,newscope);
        stack->HeadScope->headSymbol=functionSymbols; 
      
    }
    
    if(strcmp(root->nodeType,"BLOCK")==0){
        scope* newscope=createScope();
        push(stack,newscope);
    }
 
    if(strcmp(root->nodeType,"DECLAR")==0){
        fillDeclars(root->node1,root->id);
        return;
    }

    if(strcmp(root->nodeType,"IF")==0||strcmp(root->nodeType,"IF-ELSE")==0){
        if(strcmp(checkExpr(root->node1),"BOOL")!=0){
            printf("if condition must be boolean\n");
            exit(1);
        }
    }
    
    if(strcmp(root->nodeType,"WHILE")==0){
        if(strcmp(checkExpr(root->node1),"BOOL")!=0){
            printf("while condition must be boolean\n");
            exit(1);
        }
    }
      
    if(strcmp(root->nodeType,"DO-WHILE")==0){
        if(strcmp(checkExpr(root->node2),"BOOL")!=0){
            printf("do-while condition must be boolean\n");
            exit(1);
        }
    }

    if(strcmp(root->nodeType,"FOR")==0){
        if(strcmp(checkExpr(root->node2),"BOOL")!=0){
            printf("if condition must be boolean\n");
            exit(1);
        }

    }

    if (strcmp(root->nodeType,"FUNCTION-CALL")==0)
    {
       checkFunction(root);
    
    }
    if (strcmp(root->nodeType,"ASSIGN")==0)
    {
       checkAssign(root);
    }
    if(strcmp(root->nodeType,"RETURN")==0){
        flagReturn=true;
        if(strcmp(checkExpr(root->node1),functions_returns->type)!=0){
            printf("return expr of %s is %s but return expr is %s\n",functions_returns->id,functions_returns->type,checkExpr(root->node1));
            exit(1);
        }
    }

    if(root->node1){
		checkSemantics(root->node1);
	}
	if(root->node2){
		checkSemantics(root->node2);
	}
	if(root->node3){
		checkSemantics(root->node3);
	}
	if(root->node4){
		checkSemantics(root->node4);
	}
   
     if(strcmp(root->nodeType,"BODY")==0){
        if(!flagReturn){
            if(functions_returns&&strcmp(functions_returns->type,"VOID")!=0){
                printf("function %s must have return statement\n ",functions_returns->id);
                exit(1);
            }
        }
        functions_returns=functions_returns->next;
        flagReturn=false;

    }

    if(strcmp(root->nodeType,"BODY")==0||strcmp(root->nodeType,"BLOCK")==0){
        pop(stack);
    }

 }

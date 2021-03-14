#include "header.h"
int countlabel=0;
int countvar=0;
symbol* functions=NULL;

char* freshLabel(){
    char* label;
    asprintf(&label,"L%d",countlabel);
    countlabel++;
    return label;
}
char* freshVar(){
    char* var;
    asprintf(&var,"t%d",countvar);
    countvar++;
    return var;
}

char* itoa(int num){
    int temp = num, size = 0;
    char buffer[100], number[100];
    char *res = NULL, *bufferPtr = buffer, *numPtr = number;

    if(num < 10){
        res = (char*) malloc (sizeof(char));
        *res = num + '0';
        return res;
    }

    *bufferPtr = '$';
    bufferPtr++;

    while(temp != 0){
        *bufferPtr = (temp % 10) + '0';
        temp = temp / 10;
        bufferPtr++;  
    }

    bufferPtr--;
    while(*bufferPtr != '$'){
        *numPtr = *bufferPtr;
        bufferPtr--;
        numPtr++;
    }
    *numPtr = '\0';
    res = (char*) malloc ((strlen(number) + 1) * sizeof(char));
    strcpy(res, number);
    return res;
}

char* generateNum(char* var ,char* id ){
    char* code;
    asprintf(&code,"\t%s:=%s\n",var,id);
    return code;
}

int calcParam(node* root){

    if(strcmp(root->id,"")!=0){
        return 1;
    }

    return calcParam(root->node1)+calcParam(root->node2);
}

int getFuncBytes(char* id){
   symbol* current=functions;
   while(current!=NULL){
       if(strcmp(current->id,id)==0)
            return current->args_size;
       current=current->next;
   }
   return -1;
}

void checkFunc(node* root){

    if(strcmp(root->nodeType,"FUNCTION-CALL")==0){
        root->flag=true;
        return;
    }
    if(strcmp(root->nodeType,"LEN")==0){
        root->flag=true;
        return;
    }
    if(root->node1){
		checkFunc(root->node1);
	}
	if(root->node2){
		checkFunc(root->node2);
	}
	if(root->node3){
		checkFunc(root->node3);
	}
	if(root->node4){
		checkFunc(root->node4);
	}
}

int checkFuncBytes(node* root){
    if(strcmp(root->nodeType,"INT")==0){
        return 4*calcParam(root->node1);
    }
    if(strcmp(root->nodeType,"CHAR")==0 || strcmp(root->nodeType,"BOOL")==0){
        return 1*calcParam(root->node1);
    }
    if(strcmp(root->nodeType,"")!=0){
        return 8*calcParam(root->node1);
    }
    return checkFuncBytes(root->node1)+checkFuncBytes(root->node2);
}

void checkAssignCode(node* root){

    if(strcmp(root->nodeType,"ASSIGN")==0){
        generate3AC(root);
        return;
    }

    if(root->node1){
		checkAssignCode(root->node1);
	}
	if(root->node2){
		checkAssignCode(root->node2);
	}
	if(root->node3){
		checkAssignCode(root->node3);
	}
	if(root->node4){
		checkAssignCode(root->node4);
	}

    if(strcmp(root->nodeType,"")==0){
        if(root->node1){
            asprintf(&root->code,"%s",root->node1->code);
        }
        if(root->node2){
            asprintf(&root->code,"%s%s",root->code,root->node2->code);
        }
    }

}


void generateLabels(node* root){

    if(strcmp(root->nodeType,"FOR")==0){
        root->truelabel=freshLabel();
    }
    if(strcmp(root->nodeType,"WHILE")==0){
        root->truelabel=freshLabel();
    }
    if(root->node1){
		generateLabels(root->node1);
	}
	if(root->node2){
		generateLabels(root->node2);
	}
	if(root->node3){
		generateLabels(root->node3);
	}
	if(root->node4){
		generateLabels(root->node4);
	}
        if(strcmp(root->nodeType,"WHILE")==0){
        //root->truelabel=freshLabel();
        root->node1->truelabel=freshLabel();
        root->node1->falselabel=freshLabel();
        
    }

    if(strcmp(root->nodeType,"DO-WHILE")==0){
        root->node2->truelabel=freshLabel();
        root->node2->falselabel=freshLabel();      
    }

    if(strcmp(root->nodeType,"IF")==0){  
        root->node1->truelabel=freshLabel();
        root->node1->falselabel=freshLabel();
    }

    if(strcmp(root->nodeType,"IF-ELSE")==0){  
        root->node1->truelabel=freshLabel();
        root->node1->falselabel=freshLabel();
        root->falselabel=freshLabel();
    }

    if(strcmp(root->nodeType,"EXPR")==0){
        if(strcmp(root->id,"||")==0){
            root->node1->falselabel=freshLabel();
        }
        if(strcmp(root->id,"&&")==0){
            root->node1->truelabel=freshLabel();
        }
    }
    
    if(strcmp(root->nodeType,"FOR")==0){  
        //root->truelabel=freshLabel();
        root->node2->truelabel=freshLabel();
        root->node2->falselabel=freshLabel(); 
    }

    if(strcmp(root->nodeType,"ASSIGN")==0 && (strcmp(root->node2->id,"||")==0 || strcmp(root->node2->id,"&&")==0)){
        root->node2->truelabel=freshLabel();
        root->node2->falselabel=freshLabel();
        root->truelabel=freshLabel();
    }






}


void generate3AC(node* root){

    if(strcmp(root->nodeType,"DECLAR")==0){
        checkAssignCode(root);
        asprintf(&root->code,"%s",root->node1->code);
        return;
    }
    
    if(strcmp(root->nodeType,"FUNCTION")==0){
        symbol* newfunc = createSymbol(root->id,root->node3->id,FUNC,NULL);
        if(strcmp(root->node1->id,"NONE")!=0){
            newfunc->args_size=checkFuncBytes(root->node1->node1);
        }
        newfunc->next=functions;
        functions=newfunc;
    }
    /*
    if(strcmp(root->nodeType,"ASSIGN")==0 && (strcmp(root->node2->id,"||")==0 || strcmp(root->node2->id,"&&")==0)){
        root->node2->truelabel=freshLabel();
        root->node2->falselabel=freshLabel();
        root->truelabel=freshLabel();
    }
    */

    if(strcmp(root->nodeType,"ASSIGN")==0){
        checkFunc(root);
    }
    /*
    if(strcmp(root->nodeType,"WHILE")==0){
        root->truelabel=freshLabel();
        root->node1->truelabel=freshLabel();
        root->node1->falselabel=freshLabel();
        
    }

    if(strcmp(root->nodeType,"DO-WHILE")==0){
        root->node2->truelabel=freshLabel();
        root->node2->falselabel=freshLabel();
        
    }

    if(strcmp(root->nodeType,"IF")==0){  
        root->node1->truelabel=freshLabel();
        root->node1->falselabel=freshLabel();
    }

    if(strcmp(root->nodeType,"IF-ELSE")==0){  
        root->node1->truelabel=freshLabel();
        root->node1->falselabel=freshLabel();
        root->falselabel=freshLabel();
    }
    */

    if(strcmp(root->nodeType,"EXPR")==0){
        if(strcmp(root->id,"||")==0){
            root->node1->truelabel=root->truelabel;
            //root->node1->falselabel=freshLabel();
            root->node2->truelabel=root->truelabel;
            root->node2->falselabel=root->falselabel;
        }
        if(strcmp(root->id,"&&")==0){
           // root->node1->truelabel=freshLabel();
            root->node1->falselabel=root->falselabel;
            root->node2->truelabel=root->truelabel;
            root->node2->falselabel=root->falselabel;
        }
        if(strcmp(root->id,"!")==0){
            root->node1->truelabel=root->falselabel;
            root->node1->falselabel=root->truelabel;
        }


    }
    /*
    
    if(strcmp(root->nodeType,"FOR")==0){  
        root->node2->truelabel=freshLabel();
        root->node2->falselabel=freshLabel();
        root->truelabel=freshLabel();
    }
    */

    if(root->node1){
		generate3AC(root->node1);
	}
	if(root->node2){
		generate3AC(root->node2);
	}
	if(root->node3){
		generate3AC(root->node3);
	}
	if(root->node4){
		generate3AC(root->node4);
	}
    if(strcmp(root->nodeType,"CODE")==0){
        asprintf(&root->code,"%s",root->node1->code);
        printf("%s",root->code);
    }

    if(strcmp(root->nodeType,"FUNCTION")==0){
        asprintf(&root->code,"%s:\n\tBeginFunc\n%s\tEndFunc\n",root->id,root->node3->code);
       
    }

    if(strcmp(root->nodeType,"MAIN")==0){
        asprintf(&root->code,"main:\n\tBeginMain\n%s\tEndMain\n",root->node2->code);
    }

    if(strcmp(root->nodeType,"BODY")==0||strcmp(root->nodeType,"BLOCK")==0||strcmp(root->nodeType,"")==0){
        if(root->node1){
            asprintf(&root->code,"%s",root->node1->code);
        }
        if(root->node2){
            asprintf(&root->code,"%s%s",root->code,root->node2->code);
        }
        
    }

    if(strcmp(root->nodeType,"IF")==0){
        asprintf(&root->code,"%s%s:%s%s:",root->node1->code,root->node1->truelabel,root->node2->code,root->node1->falselabel);
    }
    
    if(strcmp(root->nodeType,"IF-ELSE")==0){
        asprintf(&root->code,"%s%s:%s\tGoTo %s\n%s:%s%s:",root->node1->code,root->node1->truelabel,root->node2->code,root->falselabel,root->node1->falselabel,root->node3->code,root->falselabel);
    }

    if(strcmp(root->nodeType,"WHILE")==0){
        asprintf(&root->code,"%s:%s%s:%s\tGoTo %s\n%s:",root->truelabel,root->node1->code,root->node1->truelabel,root->node2->code,root->truelabel,root->node1->falselabel);
    }
    if(strcmp(root->nodeType,"DO-WHILE")==0){
        asprintf(&root->code,"%s:%s%s%s:",root->node2->truelabel,root->node1->code,root->node2->code,root->node2->falselabel);
    }

    if(strcmp(root->nodeType,"FOR")==0){
            asprintf(&root->code,"%s%s:%s%s:%s%s\tGoTo %s\n%s:",root->node1->code,root->truelabel,root->node2->code,root->node2->truelabel,root->node3->code,root->node4->code,root->truelabel,root->node2->falselabel);
    }


    if(strcmp(root->nodeType,"INT")==0||strcmp(root->nodeType,"REAL")==0||strcmp(root->nodeType,"CHAR")==0||strcmp(root->nodeType,"STRING")==0||strcmp(root->nodeType,"BOOL")==0||strcmp(root->nodeType,"NULL")==0){
        root->var=freshVar();
        root->code=generateNum(root->var,root->id);
    }
    
    if(strcmp(root->nodeType,"UMINUS")==0){
        root->var=freshVar();
        asprintf(&root->code,"\t%s:=-%s\n",root->var,root->node1->id);
    }
    
    if(strcmp(root->nodeType,"ID")==0){
        root->var=strdup(root->id);
    }
    
    if(strcmp(root->nodeType,"STR")==0){
        char* var=freshVar();
        asprintf(&root->code,"\t%s:=&%s\n",var,root->node1->id);
        char* var2=freshVar();
        asprintf(&root->code,"%s%s\t%s:=%s+%s\n",root->node2->code,root->code,var2,var,root->node2->var);
        asprintf(&root->var,"*%s",var2);
    }
    
    if(strcmp(root->nodeType,"POINTER-EXPR")==0){
        if(strcmp(root->id,"*")==0){
            asprintf(&root->code,"%s",root->node1->code);
            asprintf(&root->var,"*%s",root->node1->var);
        }
        if(strcmp(root->id,"&")==0){
            asprintf(&root->code,"%s",root->node1->code);
            asprintf(&root->var,"&%s",root->node1->var);
        }
    }
    
    if(strcmp(root->nodeType,"EXPR")==0){
        if(strcmp(root->id,"||")==0){
            asprintf(&root->code,"%s%s:%s",root->node1->code,root->node1->falselabel,root->node2->code);
            return;
           
        }
        if(strcmp(root->id,"&&")==0){
            asprintf(&root->code,"%s%s:%s",root->node1->code,root->node1->truelabel,root->node2->code);
            return;
        }
        if(strcmp(root->id,"!")==0){
            asprintf(&root->code,"%s",root->node1->code);
            return;
        }
        if(strcmp(root->id,"<")==0||strcmp(root->id,"<=")==0||strcmp(root->id,">")==0||strcmp(root->id,">=")==0||strcmp(root->id,"==")==0||strcmp(root->id,"!=")==0){
            asprintf(&root->code,"%s%s\tif %s %s %s GoTo %s\n\tGoTo %s\n",root->node1->code,root->node2->code,root->node1->var,root->id,root->node2->var,root->truelabel,root->falselabel);
            return;
        }
        
        root->var=freshVar();
        asprintf(&root->code,"%s%s%s\t%s:=%s%s%s\n",root->code,root->node1->code,root->node2->code,root->var,root->node1->var,root->id,root->node2->var);
       
    }

    if(strcmp(root->nodeType,"ASSIGN")==0 && (strcmp(root->node2->id,"||")==0 || strcmp(root->node2->id,"&&")==0)){
        asprintf(&root->node2->var,"T");
        asprintf(&root->code,"%s:\tT:=0\n\tGoTo %s\n%s:\tT:=1\n%s:",root->node2->falselabel,root->truelabel,root->node2->truelabel,root->truelabel);
    }

    if(strcmp(root->nodeType,"ASSIGN")==0){
        root->var=root->node1->var;
        asprintf(&root->code,"%s%s%s\t%s:=%s\n",root->node1->code,root->node2->code,root->code,root->var,root->node2->var);
    }

    if(strcmp(root->nodeType,"RETURN")==0){
        asprintf(&root->code,"%s\tReturn %s\n",root->node1->code,root->node1->var);
    }

    if(strcmp(root->nodeType,"PARM")==0){
        asprintf(&root->code,"%s%s\tPushParam %s\n",root->node1->code,root->code,root->node1->var);
    }
    if(strcmp(root->nodeType,"var-CALL")==0){
        if(strcmp(root->id,"NONE")!=0){
            asprintf(&root->code,"%s",root->node1->code);
        }
    }
    if(strcmp(root->nodeType,"FUNCTION-CALL")==0){
        if(root->flag){
            root->var=freshVar();
            asprintf(&root->code,"%s\t%s:=LCall %s\n",root->node1->code,root->var,root->id);
        }
        else if(!root->flag){
            asprintf(&root->code,"%s\tLCall %s\n",root->node1->code,root->id);
        }
        if(strcmp(root->node1->id,"NONE")!=0){
            asprintf(&root->code,"%s\tPopParams %d\n",root->code,getFuncBytes(root->id));
        }
    }
    if(strcmp(root->nodeType,"LEN")==0){
         if(root->flag){
            root->var=freshVar();
            asprintf(&root->code,"\tPushParam %s\n\t%s:=LCall LEN\n",root->id,root->var);
        }
        else if(!root->flag){
            asprintf(&root->code,"\tPushParam %s\n\tLCall LEN\n",root->id);
        }
        asprintf(&root->code,"%s\tPopParams 8\n",root->code);
    }
}
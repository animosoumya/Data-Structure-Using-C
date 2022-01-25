#include<stdio.h>
#include<stdlib.h>

int LINK[20];
char STACK[20];
int TOP,AVAIL;
char p[18];
char q[18]={'4','*','(','5','+','1',')','-','8','/','4'};
void push(char);
char pop(void);
int prec(char);

void main(){
	int i=0;
	int j=0;
	char I;
	int val;
	
	
	LINK[0]=3, LINK[1]=17, LINK[2]=13, LINK[3]=2, LINK[4]=12, LINK[5]=8, LINK[6]=11, LINK[7]=14, LINK[8]=9, LINK[9]=18,
	LINK[10]=6, LINK[11]=16, LINK[12]=10, LINK[13]=5, LINK[14]=-1, LINK[15]=1, LINK[16]=0, LINK[17]=19, LINK[18]=7, LINK[19]=4; 
	
	TOP= -1;
	AVAIL= 15;
	
	printf("the infix expression : %s",q);
	q[11]= ')';
	push('(');
	
	while(q[i]!='\0'){
		if(q[i]<=57 && q[i]>=48){
			p[j]= q[i];
			j= j+1;
		}
		if(q[i]=='('){
			push('(');
		}
		if(q[i]=='+' || q[i]=='-' || q[i]=='*' || q[i]=='/' || q[i]=='^'){
			val= prec(q[i]);
			if(STACK[TOP]=='('){
				push(q[i]);
			}
			else if(val==0){
				I= pop();
				p[j]= I;
				push(q[i]);
				j= j+1;
			}
			else if(val==1){
				push(q[i]);
			}
		}
		if(q[i]==')'){
				while(I!='('){
					I= pop();
					if(I!='('){
					    p[j]= I;
					    j= j+1;
					}
				}
				I= '\0';
		}
		i= i+1;
	}
	printf("\npostfix expression: %s",p);
}

int prec(char c){
	if((STACK[TOP]=='^') && (c=='+' || c=='-' || c=='*' || c=='/')){
		return 0;
	}
	else if((STACK[TOP]=='*' || STACK[TOP]=='/') && (c=='+' || c=='-')){
		return 0;
	}
	else{
		return 1;
	}
}

void push(char d){
	int NEW;
	NEW= AVAIL;
	AVAIL= LINK[AVAIL];
	STACK[NEW]= d;
	LINK[NEW]= TOP;
	TOP= NEW;
}

char pop(void){
	char I;
	int TEMP;
	I= STACK[TOP];
	TEMP= TOP;
	TOP= LINK[TOP];
	LINK[TEMP]=AVAIL;
	AVAIL= TEMP;
	return(I);
}

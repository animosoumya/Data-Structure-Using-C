#include<stdio.h>

int stack[20];
int top=-1;
int checkparen(int);
void push(char);
char pop(void);
char q[6]={'[','{','(',')','}',']'};

void main(){
	int i=0,k=0,n=0;
	char c;
	scanf("%d",&i);
	printf("Enter the combination of parentheses to be checked :");
	
	k= checkparen(i);
	if(k==1){
		printf("\nBalanced !");
	}
	else{
		printf("\nNot Balanced !");
	}
}

int checkparen(int i){
	int j;
	char r;
	for(j=0;j<i;j++){
		if(q[j]=='('|| q[j]=='{' || q[j]=='['){
			push(q[j]);
		}
		if(q[j]==')'|| q[j]=='}' || q[j]==']'){
			r= pop();
			if(r=='(' && q[j]!=')'){
				return 0;
			}
			else if(r=='{' && q[j]!='}'){
				return 0;
			}
			else if(r=='[' && q[j]!=']'){
				return 0;
			}
		}
	}
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

void push(char I){
	top= top+1;
	stack[top]= I;
}

char pop(void){
	char r;
	r= stack[top];
	top= top-1;
	return r;
}

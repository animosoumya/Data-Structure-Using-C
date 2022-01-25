#include<stdio.h>
#include<stdlib.h>

#define MAX 15
void push(int [],int *,int);
void pop(int [],int *,int *);

void main(){
	int val,n;
	int newstack[MAX];
	int top= -1;
	
	do{
		do{
			printf("Enter the element to be pushed :");
			scanf("%d",&val);
			push(newstack,&top,val);
			printf("\nto continue enter 1 :");
			scanf("%d",&n);
		}while(n==1);
		printf("\nto pop an element enter 1 :");
		scanf("%d",&n);
		while(n==1){
			pop(newstack,&top,&val);
			printf("\nthe element poped is: %d",val);
			printf("\nto pop an element enter 1 :");
			scanf("%d",&n);
		}
		printf("\nto continue enter 1 :");
		scanf("%d",&n);
	}while(n==1);
}

void push(int newstack[],int *top,int val){
	if(*top<MAX){
		*top= *top+1;
		newstack[*top]= val;
	}
	else{
		printf("OVERFLOW\n");
		exit(0);
	}
}

void pop(int newstack[],int *top,int *val){
	if(*top>=0){
		*val= newstack[*top];
		*top= *top-1;
	}
	else{
		printf("UNDERFLOW\n");
		exit(0);
	}
}

#include<stdio.h>
#include<stdlib.h>

struct stack{
	int num;
	struct stack *;
};

int q[10]={2,4,1,5,3,1,7};
void push(int,struct stack*);
struct stack * createstack(int);

void main(){
	int i;
	while(q[i]!='\0'){
		scanf("%d",q[i]);
		i++;
	}
	ptr1= createstack();
	push(q[0],ptr1);
	if(q[1]>q[0]){
		ptr2= createstack();
		push(q[1],ptr2);
	}
	else{
		push(q[1],ptr1);
	}
	
	for(j=2;j<i;j++){
		if(q[j]>(top1->num) && q[i]>)
	}
}

struct stack * createstack(int j){
	struct stack * ptr;
	ptr= (struct stck *) malloc(sizeof(struct stack));
	return ptr;
}

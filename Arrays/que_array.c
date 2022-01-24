#include<stdio.h>
int remov(void);
void insert(int);

int max=15;
int fnt=-1;
int rer=-1;
int que[15];
int n,val;

void main(){
	
	do{
		do{
			printf("Enter the val to be inserted :");
			scanf("%d",&val);
			insert(val);
			printf("FRONT= %d\nREAR= %d",fnt,rer);
			printf("\nTo continue press 1: ");
			scanf("%d",&n);
		}while(n==1);
		printf("\nTo delete a val press 1: ");
		scanf("%d",&n);
		while(n==1){
		val= remov();
		printf("FRONT= %d\nREAR= %d",fnt,rer);
		printf("\nValue removed is %d",val);
		printf("\nTo delete a val press 1: ");
		scanf("%d",&n);
		}
		printf("\nTo continue press 1: ");
		scanf("%d",&n);
	}while(n==1);
}

void insert(int val){
	if(fnt==-1 && rer==-1){
		que[0]= val;
		fnt= fnt+1;
		rer= rer+1;
	}
	else if(rer==max){
		rer= 1;
		que[rer]= val;
	}
	else{
		rer= rer+1;
		que[rer]= val;
	}
}

int remov(void){
	if(fnt==rer){
		val= que[fnt];
		fnt= rer= -1;
	}
	else if(fnt== max){
		val= que[fnt];
		fnt= 1;
	}
	else{
		val= que[fnt];
		fnt= fnt+1;
	}
	return val;
}

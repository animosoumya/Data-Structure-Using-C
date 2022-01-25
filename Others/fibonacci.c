#include<stdio.h>
int fibo(int);

void main(void){
	int N,i;
	int fibi;
	printf("find the value of N :");
	scanf("%d",&N);
	if(N==0 || N==1){
		fibi =N;
	}
	else{
		for(i=0;i<N;i++){
			fibi =fibo(i);
			printf("%d\t",fibi);
		}
	}
}

int fibo(int num){
	int fib1,fib2,fibN;
	if(num==0){
		return 0;
	}
	else if(num==1){
		return 1;
	}
	fib1 = fibo(num-2);
	fib2 = fibo(num-1);
	fibN = fib1+fib2;
	return fibN;
}

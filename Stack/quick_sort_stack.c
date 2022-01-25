#include<stdio.h>

int a[12]={44,33,11,55,77,90,40,60,99,22,88,66};
int n=12;
int quick(int,int);

void main(){
	int lower[12],upper[12];
	int beg,end,top,loc,i;
	
	for(i=0;i<12;i++){
		printf("%d\t",a[i]);
	}
	top= -1;
	if(n>1){
		top= top+1;
		lower[top]= 0;
		upper[top]= 11;
	}
	while(top!=-1){
		beg= lower[top];
		end= upper[top];
		top= top-1;
		loc= quick(beg,end);
		if(loc-1>beg){
			top= top+1;
			lower[top]= beg;
			upper[top]= loc-1;
		}
		if(loc+1<end){
			top= top+1;
			lower[top]= loc+1;
			upper[top]= end;
		}
	}
	printf("the sorted array is: \n");
	for(i=0;i<12;i++){
		printf("%d\t",a[i]);
	}
}

int quick(int beg, int end){
	int temp,left,right,loc;
	left= beg;
	right= end;
	loc= beg;
	while(1){
	while(a[loc]<=a[right] && loc!=right){
		right= right-1;
	}
	if(loc==right){
		return loc;
	}
	if(a[loc]>a[right]){
		temp= a[loc];
		a[loc]= a[right];
		a[right]= temp;
		loc= right;
	}
	while(a[loc]>=a[left] && loc!=left){
		left= left+1;
	}
	if(loc==left){
		return loc;
	}
	if(a[left]>a[loc]){
		temp= a[loc];
		a[loc]= a[left];
		a[left]= temp;
		loc= left;
	}
}
}

#include<stdio.h>

int START;
int INFO[10];
int LINK[10];
int SEARCH(int);

void main(){
	int PTR;
	int LOC;
	int ITEM;
	START= 7;
	
	LINK[0]=9; LINK[1]=-1; LINK[2]=0; LINK[3]=5; LINK[4]=3; LINK[5]=8; LINK[6]=1; LINK[7]=2; LINK[8]=6; LINK[9]=4;
	INFO[0]=6; INFO[1]=20; INFO[2]=4; INFO[3]=12; INFO[4]=10; INFO[5]=14; INFO[6]=18; INFO[7]=2; INFO[8]=16; INFO[9]= 8;
	
	printf("Enter the ITEM:");
	scanf("%d",&ITEM);
	
	LOC= SEARCH(ITEM);
	if(LOC==-1){
		printf("Item is not present in the list.");
	}
	else
	printf("Location of ITEM is: %d",LOC);
}

int SEARCH(int ITEM){
	int PTR=START;
	int LOC=-1;
	while(PTR!=-1)
	if(ITEM>INFO[PTR]){
		PTR= LINK[PTR];
	}
	else if(ITEM==INFO[PTR]){
		LOC= PTR;
		return LOC;
	}
	else{
		return LOC;
	}
}

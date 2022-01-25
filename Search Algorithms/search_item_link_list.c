#include<stdio.h>

int LINK[10];
int INFO[10];
int START=7;
int search(int);

void main(){
	int PTR;
	int ITEM;
	int LOC;
	
	LINK[0]=9; LINK[1]=-1; LINK[2]=0; LINK[3]=5; LINK[4]=3; LINK[5]=8; LINK[6]=1; LINK[7]=2; LINK[8]=6; LINK[9]=4;
	INFO[0]=6; INFO[1]=20; INFO[2]=4; INFO[3]=12; INFO[4]=10; INFO[5]=14; INFO[6]=18; INFO[7]=2; INFO[8]=16; INFO[9]= 8;
	
	START=7;
	PTR= START;
	printf("Enter the ITEM to be searched:\n");
	scanf("%d",&ITEM);
	LOC= search(ITEM);
	if(LOC==-1){
		printf("ITEM is not present in the list.");
	}
	else
	printf("ITEM location is: %d",LOC);
}

int search(int ITEM){
	int LOC,PTR;
	PTR= START;
	LOC=-1;
	while(PTR!=-1){
		if(ITEM==INFO[PTR]){
		LOC= PTR;
		break;
	    }
		else
		PTR= LINK[PTR];
	}
	return LOC;
}

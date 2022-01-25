#include<stdio.h>
void process(int);
int LIST[10];
int LINK[10];
int START;

void main(){
	int PTR;
	LINK[0]=9, LINK[1]=-1, LINK[2]=0, LINK[3]=5, LINK[4]=3, LINK[5]=8, LINK[6]=1, LINK[7]=2, LINK[8]=6, LINK[9]=4;
	LIST[0]=6, LIST[1]=20, LIST[2]=4, LIST[3]=12, LIST[4]=10, LIST[5]=14, LIST[6]=18, LIST[7]=2, LIST[8]=16, LIST[9]=8;
	START= 7;
	PTR= START;
	printf("Initial List:\n");
	while(PTR!=-1){
		printf("%d\t",LIST[PTR]);
		PTR= LINK[PTR];
	}
	PTR= START;
	while(PTR!=-1){
		process(PTR);
		PTR= LINK[PTR];
	}
	PTR= START;
	printf("\nProcessed List:\n");
	while(PTR!=-1){
		printf("%d\t",LIST[PTR]);
		PTR= LINK[PTR];
	}
	getch();
}

void process(int P1){
	LIST[P1]= LIST[P1]/2;
}

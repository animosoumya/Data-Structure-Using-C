#include<stdio.h>

int LINK[10];
int INFO[10];
int START;
int AVAIL;
int LOC,LOCP;
void findloc(int);
void del(void);

void main(){
	int PTR;
	int ITEM;
	
	LINK[0]=7; LINK[1]=3; LINK[2]=8; LINK[3]=6; LINK[4]=0; LINK[5]=4; LINK[6]=-1; LINK[7]=2; LINK[8]=5; LINK[9]=1;
    INFO[0]=6; INFO[2]=2; INFO[4]=5; INFO[5]=4; INFO[7]=1; INFO[8]=3;
    
    START= 7;
    AVAIL= 9;
    PTR= LINK[START];
	
	printf("Linked List: \n");    
    while(PTR!=START){
    	printf("%d\t",INFO[PTR]);
    	PTR= LINK[PTR];
	}
    
    printf("\nEnter the ITEM to be Searched & Deleted : ");
    scanf("%d",&ITEM);
    
    findloc(ITEM);
    printf("\nITEM LOC : %d",LOC);
    
    del();
    printf("\nModified Linked List: \n");
    
    PTR= LINK[START];
    while(PTR!=START){
    	printf("%d\t",INFO[PTR]);
    	PTR= LINK[PTR];
	}
}

void findloc(int ITEM){
	int ptr,save;
	save= START;
	ptr= LINK[START];
	while(INFO[ptr]!= ITEM && ptr!=START){
		save= ptr;
		ptr= LINK[ptr];
	}
	if(INFO[ptr]==ITEM){
		LOCP= save;
		LOC= ptr;
	}
	else{
		LOCP= save;
		LOC= -1;
	}
}

void del(void ){
	if(LOC==-1){
		printf("\nITEM not found");
	}
	else{
		LINK[LOCP]= LINK[LOC];
	}
	LINK[LOC]= AVAIL;
	AVAIL= LOC;
}

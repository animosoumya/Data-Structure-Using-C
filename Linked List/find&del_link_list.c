#include<stdio.h>

int START;
int AVAIL;
int LOCP;
int LOC;
int LINK[10];
int INFO[10];
void del(int);
int findloc(int);

void main(){
	int PTR;
	int ITEM;
	
	LINK[0]=-1; LINK[1]=3; LINK[2]=8; LINK[3]=6; LINK[4]=0; LINK[5]=4; LINK[6]=-1; LINK[7]=2; LINK[8]=5; LINK[9]=1;
    INFO[0]=6; INFO[2]=2; INFO[4]=5; INFO[5]=4; INFO[7]=1; INFO[8]=3;
    START= 7;
    AVAIL= 9;
    
    PTR=START;
    printf("LIST :\n");
    while(PTR!=-1){
    	printf("%d\t",INFO[PTR]);
    	PTR= LINK[PTR];
	}
	printf("ITEM :");
	scanf("%d",&ITEM);
	LOCP= findloc(ITEM);
	printf("\nLOCP :%d",LOCP);
	del(LOCP);
	
	PTR= START;
	printf("NEW LIST :\n");
	while(PTR!=-1){
    	printf("%d\t",INFO[PTR]);
    	PTR= LINK[PTR];
	}
}

void del(int locp){
	LOCP= locp;
	if(LOC==-1){
		printf("Item is not in the list\n");
	}
	else{
	if(LOCP==-1){
		START= LINK[START];
	}
	else{
		LINK[LOCP]= LINK[LOC];
	}
	LINK[LOC]= AVAIL;
	AVAIL= LOC;
}
}

int findloc(int item){
	int ptr;
	ptr= START;
	int save;
	if(INFO[START]==item){
		LOC= START;
		LOCP= -1;
		return LOCP;
	}
	else if(START==-1){
		LOC= -1;
		LOCP= -1;
		return LOCP;
	}
	else{
		save= ptr;
		ptr= LINK[ptr];
		while(ptr!=-1){
			if(INFO[ptr]==item){
				LOCP= save;
				LOC= LINK[LOCP];
				return LOCP;
			}
			save= ptr;
			ptr= LINK[ptr];
		}
		LOC= -1;
	}
}

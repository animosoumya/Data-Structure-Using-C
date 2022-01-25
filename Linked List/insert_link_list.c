#include<stdio.h>

int START;
int AVAIL;
int LINK[10];
int INFO[10];
void insert(int,int);
int findloc(int);

void main(){
	int PTR;
	int LOC;
	int ITEM;
	
	LINK[0]=-1; LINK[1]=3; LINK[2]=8; LINK[3]=6; LINK[4]=0; LINK[5]=4; LINK[6]=-1; LINK[7]=2; LINK[8]=5; LINK[9]=1;
    INFO[0]=7; INFO[2]=2; INFO[4]=5; INFO[5]=4; INFO[7]=1; INFO[8]=3;
    START= 7;
    AVAIL= 9;
    
    PTR=START;
    printf("LIST :\n");
    while(PTR!=-1){
    	printf("%d\t",INFO[PTR]);
    	PTR= LINK[PTR];
	}
	printf("Enter the item to be inserted:");
	scanf("%d",&ITEM);
	
	LOC= findloc(ITEM);
	insert(ITEM,LOC);
	printf("%d",LOC);
	PTR= START;
	printf("NEW LIST :\n");
	while(PTR!=-1){
    	printf("%d\t",INFO[PTR]);
    	PTR= LINK[PTR];
	}
}

int findloc(int item){
	int ptr;
	ptr= START;
	int loc,save=-1;
	if(START==-1){
		loc= -1;
		return loc;
	}
	else if(item<INFO[START]){
		loc= -1;
		return loc;
	}
	save= ptr;
    ptr= LINK[ptr];
	while(ptr!=-1){
		if(item<INFO[ptr]){
			loc= save;
			return loc;
		}
		save= ptr;
		ptr= LINK[ptr];
	}
	loc= save;
	return save;
}

void insert(int item, int loc){
	int ptr;
	ptr= START;
	int NEW;
	if(AVAIL==-1){
		printf("\nOVERFLOW");
	}
	else{
	NEW= AVAIL;
	AVAIL= LINK[AVAIL];
	INFO[NEW]= item;
	
	if(loc==-1){
		LINK[NEW]= START;
		START= NEW;
	}
	else{
		LINK[NEW]= LINK[loc];
		LINK[loc]= NEW;
	}
}
}


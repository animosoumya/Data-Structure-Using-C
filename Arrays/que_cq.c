#include<stdio.h>
#include<stdlib.h>

struct cq{
	int ele;
	struct cq *next;
};
struct cq* front= NULL;

void display(void);
void insert(int num);
int remov(void);
void sear(int);

void main(){
	int num,choice,i;
	
	for(i=0;i<7;i++){
	printf("Select an Option");
	printf("\n1- Insert");
	printf("\n2- Delete");
	printf("\n3- Search");
	printf("\n4- Display");
	printf("\nEnter your Choice:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:{
			printf("\nEnter the Number to be Inserted: ");
			scanf("%d",&num);
			insert(num);
			break;
		}
		
		case 2:{
			num= remov();
			printf("\nDeleted Element is: %d",num);
			break;
		}
		
		case 3:{
			printf("\nEnter the Number to be Searched: ");
			scanf("%d",&num);
			sear(num);
			break;
		}
		
		case 4:{
			printf("The elements in the Q are:\n");
			display();
			break;
		}
	}
}
}

void insert(int num){
	struct cq* que;
	que= (struct cq*) malloc(sizeof(struct cq));
	que->ele= num;
	if(front==NULL){
		front= que;
		front->next= front;
	}
	else{
		struct cq* ptr;
		ptr= front;
		for(ptr=front;ptr->next!=front;ptr=ptr->next);
		ptr->next= que;
		que->next= front;
	}
}

int remov(void){
	struct cq* ptr;
	int j;
	j= front->ele;
	if(front==front->next){
		front= NULL;
	}
	else{
		ptr= front;
		for(ptr=front;ptr->next!=front;ptr=ptr->next);
		ptr->next= front->next;
		front= front->next;
	}
}

void display(void){
	struct cq* ptr;
	ptr= front;
	printf("%d",ptr->ele);
	while(ptr!=front){
		printf("%d",ptr->ele);
		ptr= ptr->next;
	}
}

void sear(int num){
	struct cq* ptr;
	ptr= front;
	if(ptr->ele==num){
		printf("\nItem is present.");
	}
	else{
	ptr= ptr->next;
	while(ptr!=front){
		if(ptr->ele== num){
			printf("\nItem is present.");
		}
		else{
			printf("\nItem is not present.");
		}
		ptr= ptr->next;
	}
}
}

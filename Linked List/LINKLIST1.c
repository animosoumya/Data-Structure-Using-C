#include<stdio.h>
#include<stdlib.h>
struct point{
	int x;
	int y;
	struct point * next;
};

void print(struct point *);
struct point * append(struct point *,struct point *);
struct point * create(int ,int );
void freeSPACE(struct point *);

int main(void){
	struct point *start, *end, *newpt;
	int num,i;
	int x,y;
	printf("no of vertices");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("x=\n ");
		scanf("%d",&x);
		printf("y=\n ");
		scanf("%d",&y);
		newpt= create(x,y);
		if(i==0){
			start=end= newpt;
		}
		else
		end=append(end,newpt);
	}
	print(start);
	freeSPACE(start);
}

void print(struct point * ptr){
	while(ptr!=NULL){
		printf("(%d,%d)",ptr->x,ptr->y);
		ptr= ptr->next;
	}
}

struct point * create(int a,int b){
	struct point *ptr;
	ptr= (struct point *) malloc(sizeof(struct point));
	ptr->x= a;
	ptr->y= b;
	return ptr;
}

struct point * append(struct point * end,struct point * newpt){
	end->next= newpt;
	return (end->next);
}

void freeSPACE(struct point* ptr){
	while(ptr!=NULL){
	ptr= ptr->next;
	free(ptr);
    }
}

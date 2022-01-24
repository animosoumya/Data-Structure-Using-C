#include<stdio.h>
struct point{
	int x;
	int y;
};

void readpoint(struct point *);
void printpoint(struct point);
void printsquare(struct point *);


int main(void){
	struct point square[4];
	int i=0;
	for(i=0;i<4;i++){
		readpoint(&square[i]);
	}
	printsquare(square);
	return 0;
}
void printsquare(struct point *ptr){
	int i=0;
	for(i=0;i<4;i++){
		printpoint(ptr[i]);
	}
}

void readpoint(struct point* ptr){
	scanf("%d",&ptr->x);
	scanf("%d",&ptr->y);
}

void printpoint(struct point pt){
	printf("(%d,%d)\n",pt.x,pt.y);
}

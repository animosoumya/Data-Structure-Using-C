#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    int ver;
    struct point * polygon;
    scanf("%d",&ver);
    polygon= (struct point *) malloc(ver * sizeof(struct point));
    initializePoly(polygon,ver);
    
    printPoly(polygon,ver);
    // Fill in your main function here

}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

void initializePoly(struct point * polygon, int ver){
    int i=0;
    for(i=0;i<ver;i++){
        (*(polygon+i)).x= -i;
        (*(polygon+i)).y= i*i;
    }
}
// Write your initializePoly() function here

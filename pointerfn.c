#include<stdio.h>
void rev(int *);
int main(void){
    int array[6];
    int i=0;
    for(i=0;i<6;i++){
        scanf("%d",&array[i]);
    }
    rev(array);
    for(i=0;i<6;i++){
        printf("%d",array[i]);
    }
}
void rev(int * ptr){
    int temp;
    int i=0;
    for(i=0;i<3;i++){
        temp= *(ptr+i);
        *(ptr+i)= *(ptr+5-i);
        *(ptr+5-i)=temp;
    }
}

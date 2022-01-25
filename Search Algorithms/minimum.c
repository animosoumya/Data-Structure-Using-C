#include<stdio.h>
int min(int,int);

int main(void)
{
    int total;
    int i=0;
    int input1;
    int input2;
    int min1;
    scanf("%d",&total);
    scanf("%d",&input1);
    for(i=0;i<total-1;i++)
    {
        scanf("%d",&input2);
        min1=min(input1,input2);
        input1=min1;
    }
    printf("%d",input1);
    return 0;
}

int min(int x,int y)
{
    int minimum;
    if(x<y)
    minimum=x;
    else
    {
        minimum=y;
    }
    return minimum;
}

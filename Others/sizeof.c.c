#include<stdio.h>
int main(void)
{
    int number;
    char dtype;
    scanf("%c %d",&dtype,&number);
    int space;
    if(dtype=='i')
    space=sizeof(int);
    else if(dtype=='s')
    space=sizeof(short);
    else if(dtype=='c')
    space=sizeof(char);
    else
    {
    space=sizeof(double);
    }
    int output1,output2,output3,output4;
    output1=space*number;
    output2=output1/1000000;
    output3=(output1%1000000)/1000;
    output4=output1%1000;
    if(output2>0){    
    printf("%d MB and %d KB and %d B",output2,output3,output4);
    }
    else if(output2==0 && output3>0){
    output3=output1/1000;
    output4=output1%1000;
    printf("%d KB and %d B",output3,output4);
    }
    else{
    output4=output1%1000;
    printf("%d B",output4);
    }
    return 0;
}

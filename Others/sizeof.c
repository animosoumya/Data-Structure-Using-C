#include<stdio.h>
int main(void)
{
    int input;
    scanf("%d",&input);
    char dt;
    int number;
    int s1,s2,s3;
    int i=0;
    int size;
    for(i=0;i<input;i++)
    {
        scanf("%d %c",&number,&dt);
        {
            if(dt=='i')
            s1=4*number;
            else if(dt=='c')
            s2=1*number;
            else if(dt=='d')
            s3=8*number;
            else
            {
                printf("Invalid tracking code type");
                return 0;
            }
        }
    }
    size=s1+s2+s3;
    printf("%d bytes",size);
    return 0;
}

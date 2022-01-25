#include<stdio.h>
int main(void)
{
    char word[50];
    scanf("%s", word);
    int length=0;
    int i=0;
    int j=0;
    char temp;
    while(word[length]!=0)
    {
        length++;
    }
    for(i=0;i<length-1;i++)
    {
        for(j=0;j<length-1;j++)
        {
            if(word[j]>word[j+1])
            {
                temp=word[j];
                word[j]=word[j+1];
                word[j+1]=temp;
            }
        }
    }
    printf("%s\n",word);
    int k=0;
    int repeat=0;
    int t=2;
    for(k=0;k<length-1;k++)
    {
        if(word[k]==word[k+1] && word[k]!=0)
        {
         for(t=2;t<length-k-1;t++)
         {
             if(word[k]==word[k+t])
             word[k+t]='\0';
         }
         repeat++;
        }
    }
    printf("%d",repeat);
    return 0;
}

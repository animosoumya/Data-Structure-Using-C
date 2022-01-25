#include<stdio.h>

double length(double);
double weight(double);
double temp(double);

int main(void)
{
    int conv;
    int i=0;
    double number,result;
    char unit;
    scanf("%d",&conv);
    for(i=0;i<conv;i++)
    {
        scanf("%lf %c",&number,&unit);
        if(unit=='m')
        {
            result=length(number);
            printf("%lf ft",result);
        }
        else if(unit=='g')
        {
            result=weight(number);
            printf("%lf lbs",result);
        }
        else if(unit=='c')
        {
            result=temp(number);
            printf("%lf f",result);
        }
    }
    return 0;
}

double length(double x)
{
    double ans;
    ans=3.2808*x;
    return ans;
}

double weight(double y)
{
    double ans;
    ans=0.002205*y;
    return ans;
}

double temp(double z)
{
    double ans;
    ans=32+(1.8*z);
    return ans;
}

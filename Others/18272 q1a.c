#include <stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a number:\n");
	scanf("%d",&a);
	b=a%10;
	while(a>10)
	{
		a=a/10;
	}
	c=a+b;
	printf("Sum of the first and last digit of the number is : %d",c);
}

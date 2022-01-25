#include <stdio.h>
void main()
{
	int a,b;
	printf("Enter a Integer N:\n");
	scanf("%d",&a);
	b=a%10;
	if(b==0)
	{
		printf("Min No. of turns to win the game is : 0");
	}
	else if(b==5)
	{
		printf("Min No. of turns to win is : 1");
	}
	else
	{
		printf("Min No. of turns to win is : -1");
	}
}

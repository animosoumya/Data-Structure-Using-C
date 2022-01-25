#include<stdio.h>
void MULTIMATRIX(void);
int a[3][3];
int b[3][3];
int c[3][3];
int i,j,k;
void main()
{
printf("enter the 9 elements of the 3*3 matrix(A)row wise\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
printf("enter the 9 elements of the 3*3 matrix(B)row wise\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
MULTIMATRIX();
printf("the multiplied matrix C is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",c[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}
void MULTIMATRIX(void)
{
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
	    	}
		}
	}
}

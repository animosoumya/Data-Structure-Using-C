#include<stdio.h>
#include<conio.h>
int DATA[10]={10,9,8,7,6,5,4,3,2,1};
int N=10;
void BUBBLE(void);
void main()
{
	int i;
	printf("the given data are DATA[10]=");
	for(i=0;i<10;i++)
	printf(" %d",DATA[i]);
	BUBBLE();
	printf("\n\nthe vlaues in the data after sorting=");
	for(i=0;i<10;i++)
	printf(" %d",DATA[i]);
	getch();
}
void BUBBLE(void)
{
	int k,PTR,TEMP;
	for(k=0;k<(N-1);k++)
	{
		for(PTR=0;PTR<(N-k);PTR++)
		{
			if(DATA[PTR]>=DATA[PTR+1])
			{
			TEMP=DATA[PTR];
			DATA[PTR]=DATA[PTR+1];
			DATA[PTR+1]=TEMP;
	    	}
		}
		
		
		
	}
}

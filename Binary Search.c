#include<stdio.h>
#include<conio.h>
int DATA[10]={1,2,3,4,5,6,7,8,9,10,11}
int N=10;
void main()
{
	int i,LOC;
	printf("the given data are DATA[10]=");
	for(i=0;i<10;i++)
	printf(" %d",DATA[i]);
	int BEG=0;
	int END=10;
	int MID=int((BEG+END)/2);
	while(BEG<=END && DATA[MID]!=ITEM)
	{
		if(DATA[MID]<=ITEM)
		BEG=MID+1;
		else
		END=MID-1;
		MID=(BEG+END)/2;
	}
	if(DATA[MID]=ITEM)
	LOC=MID;
	else
	LOC=0;
	
}

#include<stdio.h>
int DATA[11]={11,20,33,45,51,65,74,85,96,101,113};
int LB=0;
int UB=10;
int BINARY(int);
void main()
{
	int i,ITEM,LOC;
	printf("values contained in data are: ");
	for(i=0;i<=10;i++)
	{
    	printf(" %d",DATA[i]);
    }
	printf("\nEnter the item to be searched: ");
	scanf("%d",&ITEM);
	BINARY(ITEM);
	LOC=BINARY(ITEM);
	if(LOC==-1)
	printf("item is not present in data");
	else
	printf("the location of ITEM is: %d",LOC);
}
int BINARY(int I)
{
	int L,BEG,MID,END;
	BEG=LB;
	END=UB;
	MID=(BEG+END)/2;
	while(BEG<=END && DATA[MID]!=I)
	{
		if(I<DATA[MID])
		END=MID-1;
		else
		BEG=MID+1;
		MID=(BEG+END)/2;
	}
	if(DATA[MID]==I)
	L=MID;
	else
	L=-1;
	return(L);
}

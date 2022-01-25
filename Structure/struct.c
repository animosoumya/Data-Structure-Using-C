#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date * today){
    scanf("%d",&(*today).year);
    scanf("%d",&(*today).month);
    scanf("%d",&(*today).day);
}

void printDate(struct date today){
    if(today.day/10==0 && today.month/10==0){
        printf("0%d/0%d/%d",today.day,today.month,today.year);
    }
    else if(today.day/10==0){
    printf("0%d/%d/%d",today.day,today.month,today.year);
    }
    else if(today.month/10==0){
    printf("%d/0%d/%d",today.day,today.month,today.year); 
    }
    else
    printf("%d/%d/%d",today.day,today.month,today.year);
}

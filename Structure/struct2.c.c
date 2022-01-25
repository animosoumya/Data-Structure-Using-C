#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void readDate(struct date * today){
    scanf("%d",&(*today).year);
    scanf("%d",&(*today).month);
    scanf("%d",&(*today).day);
}

void printDate(struct date today){
    if(today.day/10==0 && today.month/10==0){
    printf("0%d/0%d/%d\n",today.month,today.day,today.year);
    }
    else if(today.month/10==0){
    printf("0%d/%d/%d\n",today.month,today.day,today.year);
    }
    else if(today.day/10==0){
    printf("%d/0%d/%d\n",today.month,today.day,today.year); 
    }
    else
    printf("%d/%d/%d\n",today.month,today.day,today.year);
}

struct date advanceDay(struct date new){
    if(new.month==2 && new.day==28){
        new.day=1;
        new.month=3;
    }
    else if(new.day==31 && new.month==12){
        new.day=1;
        new.month=01;
        new.year=new.year+1;
    }
    else if(new.day==31){
        new.day=1;
        new.month=new.month+1;
    }
    else if((new.month==4 || new.month==6 || new.month==9 || new.month==11) && new.day==30){
        new.day=1;
        new.month=new.month+1;
    }
    return new;
}

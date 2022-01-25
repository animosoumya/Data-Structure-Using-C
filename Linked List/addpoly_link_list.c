#include<stdio.h>
#include<stdlib.h>

int terms;

struct poly{
	int exp;
	int coeff;
	struct poly *next;
};

struct poly * readpoly();
struct poly * createspace(int ,int);
struct poly * append(struct poly *,struct poly *);
void printpoly(struct poly *);
struct poly * addpoly(struct poly *, struct poly *);

void main(){
	int i=0;
	struct poly *ptr,*m1,*m2,*ptr2;
	for(i=0;i<2;i++){
	    printf("Enter total no. of Terms in the %d(st/nd) poly: ",i+1);
	    scanf("%d",&terms);
	    printf("Enter the exp & coeff: ");
	    ptr= readpoly();
	    m2= ptr;
	    if(i==0){
	    	m1= ptr;
		}
	    printpoly(ptr);
	}
	printf("%p %p",m1,m2);
	ptr2= addpoly(m1,m2);
	printf("%p",ptr2);
	//printpoly(ptr2->next);
}

struct poly * readpoly(){
	int i=0;
	struct poly *start,*newptr,*end;
	start= NULL;
	int ex,coef;
	for(i=0;i<terms;i++){
		scanf("%d %d",&ex,&coef);
		newptr= createspace(ex,coef);
		if(start==NULL){
			start= newptr;
			end= start;
		}
		else{
			end= append(end,newptr);
		}
	}
	return start;
}

struct poly * createspace(int ex,int coef){
	struct poly * ptr;
	ptr= (struct poly *) malloc(sizeof(struct poly));
	ptr->exp= ex;
	ptr->coeff= coef;
	ptr->next= NULL;
	return ptr;
}

struct poly * append(struct poly *end, struct poly *newptr){
	end->next= newptr;
	return newptr;
}

void printpoly(struct poly *start){
	struct poly *ptr;
	ptr= start;
	while(ptr!=NULL){
		printf("%dx^%d + ",ptr->coeff,ptr->exp);
		ptr= ptr->next;
	}
	printf("\n");
}

struct poly * addpoly(struct poly * m1,struct poly *m2){
	struct poly * ph3,*m3,*ptr2;
	ph3= (struct poly *) malloc(sizeof(struct poly));
	ph3->next= NULL;
	ptr2= ph3;
	
	while((m1!=NULL) || (m2!=NULL)){
		while((m1->exp)>(m2->exp)){
			m3= (struct poly *) malloc(sizeof(struct poly));
			m3->next= NULL;
			m3->exp= m1->exp;
			m3->coeff= m1->coeff;
			ph3= append(ph3,m3);
			m1= m1->next;
		}
		
		while((m1->exp)<(m2->exp)){
			m3= (struct poly *) malloc(sizeof(struct poly));
			m3->next= NULL;
			m3->exp= m2->exp;
			m3->coeff= m2->coeff;
			ph3= append(ph3,m3);
			m2= m2->next;
		}
		
		while(((m1->exp)==(m2->exp)) && m1!=NULL && m2!=NULL){
			m3= (struct poly *) malloc(sizeof(struct poly));
			m3->next= NULL;
			m3->exp= (m1->exp);
			m3->coeff= (m1->coeff)+(m2->coeff);
			ph3= append(ph3,m3);
			m1= m1->next;
			m2= m2->next;
		}
	}
	if(m2!=NULL){
		ph3= append(ph3,m2);
	}
	else{
		ph3= append(ph3,m1);
	}
	return ptr2;
}

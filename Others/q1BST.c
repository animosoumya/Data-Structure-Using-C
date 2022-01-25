#include <stdio.h>  
#include <stdlib.h>  

struct node{  
    int data;  
    struct node *left;  
    struct node *right;  
};
   
struct node *root = NULL;  
   
struct node* createNode(int data){  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->left = NULL;  
    newNode->right = NULL;  
    return newNode;  
}  
   
int factorial(int num) {  
    int fact = 1;  
    if(num == 0)  
        return 1;  
    else {  
        while(num > 1) {  
            fact = fact * num;  
            num--;  
        }  
        return fact;  
    }  
}  
   
int numOfBST(int key) {  
    int catalanNumber = factorial(2 * key)/(factorial(key + 1) * factorial(key));  
    return catalanNumber;  
}  
      
int main(){  
   int N;
   printf("enter the value of N:");
   scanf("%d",&N);
    printf("Total number of possible Binary Search Trees with given key: %d", numOfBST(N));  
      
    return 0;
}


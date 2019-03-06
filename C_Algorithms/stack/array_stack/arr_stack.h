/*
Implementation of stack data structre 
by Evan Gertis
03/04/ 2018
Purpose: studying up on data structures
and algorithms. 
*/

#include <stdio.h>
#include <stdlib.h>

//size of the stack
#define MAX 50 

//global variables.
int a[MAX];
int top;

void initializeStack();
int isEmpty();
int isFull();
int size();
int peek();
void push(int x);
int pop();
void display();

/*BEGIN IMPLEMENTATION */

/*BEGIN - initializeStack*/
void initializeStack(){
    top = -1;
}
/*END - initializeStack*/

/*BEGIN - isEmpty*/
int isEmpty(){
    if(top < 0){
        return 1;
    }
    else {
        return 0;
    }
}
/*END - isEmpty*/

/*BEGIN - isFull*/
int isFull(){
    if(top == MAX -1){
        return 1;
    } else {
        return 0;
    }
    return 0;
}
/*END - isFull*/

/*BEGIN - size*/
int size(){
    return top + 1;
}
/*END - size*/

/*BEGIN - peek*/
int peek(){
    return a[top];
}
/*END - peek*/

/*BEGIN - push*/
void push(int x){
    if(isFull()){
        printf("Stack Overflow \n");
        return;
    }
    top++;
    a[top] = x;
}
/*END - push*/

/*BEGIN - pop*/
int pop(){
    if(!isEmpty()){
        top-= 1;
        return a[top + 1];
    }
    else{
        printf("The list is empty");
        return -1;
    }
}
/*END - pop*/

/*BEGIN - display*/
void display(){
    for(int i = 0; i <= top; i++)
    {
        printf(" %d | ", a[i]);
    }
    printf("\n");
    
}
/*END - display*/

/*END IMPLEMENTATION */  
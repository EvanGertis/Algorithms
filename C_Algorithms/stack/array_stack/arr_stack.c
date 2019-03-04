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

int main(){

    printf("Hi there.");
    return 0;
}

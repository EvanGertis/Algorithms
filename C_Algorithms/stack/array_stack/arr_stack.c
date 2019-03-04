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
    
    //locals.
    int choice, x;
    initializeStack();

    //interface.
    while(1){
        printf("1.Push an element on the stack\n");
        printf("2.Pop and element from the stack\n");
        printf("3.Display the top element\n");
        printf("4.Display all stack elements\n");
        printf("5.Display the size of the stack\n");
        printf("6. Quit\n");
        printf("Enter you choice :\n");
        printf("%d", &choice);
    }
    
    //parse the selection.
    switch (choice)
    {
        case 1:
            printf("Please enter the number that you want to push\n");
            scanf("%d", &x);
            push(x);
            break;
    
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
    
        case 4:
            /* code */
            break;
    
        case 5:
            /* code */
            break;
    
        case 6:
            /* code */
            break;
    
        default:
            break;
    }
    
    return 0;
}

/*BEGIN - initializeStack*/
void initializeStack(){

}
/*END - initializeStack*/

/*BEGIN - isEmpty*/
int isEmpty(){

    return 0;
}
/*END - isEmpty*/

/*BEGIN - isFull*/
int isFull(){
    return 0;
}
/*END - isFull*/

/*BEGIN - size*/
int size(){
    return 0;
}
/*END - size*/

/*BEGIN - peek*/
int peek(){
    return 0;
}
/*END - peek*/

/*BEGIN - push*/
void push(int x){

}
/*END - push*/

/*BEGIN - display*/
void display(){

}
/*END - display*/

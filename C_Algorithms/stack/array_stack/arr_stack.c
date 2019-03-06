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
        scanf("%d", &choice);
        
        //exit.
        if(choice == 6){
            break;
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
                display();
                break;
        
            case 5:
                break;
            
            default:
                break;
        }
    }
    
    return 0;
}

/*BEGIN - initializeStack*/
void initializeStack(){
    top = -1;
}
/*END - initializeStack*/

/*BEGIN - isEmpty*/
int isEmpty(){

    return 0;
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
    if(isFull()){
        printf("Stack Overflow \n");
        return;
    }
    top++;
    a[top] = x;
}
/*END - push*/

/*BEGIN - display*/
void display(){
    for(int i = 0; i <= top; i++)
    {
        printf(" %d | ", a[i]);
    }
    printf("\n");
    
}
/*END - display*/

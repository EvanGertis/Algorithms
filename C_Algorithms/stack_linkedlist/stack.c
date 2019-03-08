/*
File Name: stack.c
Purpose : To implement a stack using linked list.
Date : 03/08/2019
Author :  Evan Gertis
*/ 

#include <stdio.h>
#include <stdlib.h>

//used to store and link data.
struct node
{
    int info;
    struct node *link;
};

//global head pointer.
struct node *top;

/*BEGIN DEFINITIONS*/
//****************************************************************************
//****************************************************************************
//****************************************************************************

void initializeStack();
int isEmpty();
int size();
void push(int x);
int pop();
int peek();
void display();

//****************************************************************************
//****************************************************************************
//****************************************************************************
/*END DEFINITIONS*/ 

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
                printf("Please enter the number that you want to push \n");
                scanf("%d", &x);
                push(x);
                break;
        
            case 2:
                printf("The element popped off was %d \n", pop());
                break;
        
            case 3:
                peek();
                break;
        
            case 4:
                display();
                break;
        
            case 5:
                printf("The size is %d \n", size());
                break;
            
            default:
                break;
        }
    }
    return 0;
}

/*BEGIN IMPLEMENTATIONS*/
//****************************************************************************
//****************************************************************************
//****************************************************************************

/*BEGIN intializeStack*/
void initializeStack(){

}
/*END initializeStack*/

/*BEGIN isEmpty*/
int isEmpty(){

    return 0;
}
/*END isEmpty*/

/*BEGIN size*/
int size(){

    return 0;
}
/*END size*/

/*BEGIN push*/
void push(int x){

}
/*END push*/

/*BEGIN pop*/
int pop(){

    return 0;
}
/*END pop*/

/*BEGIN peek*/
int peek(){

    return 0;
}
/*END peek*/

/*BEGIN display*/
void display(){

}
/*END display*/

//****************************************************************************
//****************************************************************************
//****************************************************************************
/*END IMPLEMENTATIONS*/
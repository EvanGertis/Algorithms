/*
File Name: stack.h
Purpose : To store function definitions
          and implementations for stack.c
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



/*BEGIN IMPLEMENTATIONS*/
//****************************************************************************
//****************************************************************************
//****************************************************************************

/*BEGIN intializeStack*/
void initializeStack(){
    top = NULL;
}
/*END initializeStack*/

/*BEGIN isEmpty*/
int isEmpty(){
    if(top == NULL){
        printf("The stack is empty\n");
        return 1;
    } else {
        return 0;
    }
}
/*END isEmpty*/

/*BEGIN size*/
int size(){
    // tracker pointer.
    struct node *p;

    //keeps track of size.
    int c = 0;

    p = top;
    while(p != NULL){
        p = p->link;
        c++;
    }


    return c;
}
/*END size*/

/*BEGIN push*/
void push(int x){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("No memory: Stack overflow\n");
        return;
    }
    temp->info = x;
    temp->link = top;
    top = temp;
}
/*END push*/

/*BEGIN pop*/
int pop(){
    // deletable pointer.
    struct node *p;

    // value stored in top node.
    int val;

    if(isEmpty){
        printf("list is empty");
        exit(1);
    } else {
        p = top;
        val = top->info;
        top = top->link;
        free(p);

        return val;
    }

}
/*END pop*/

/*BEGIN peek*/
int peek(){
    // value stored in top node.
    int val;
    if(isEmpty()){
        printf("stack underflow\n");
        exit(1);
    }

    return top->info;
}
/*END peek*/

/*BEGIN display*/
void display(){
    // looping pointer.
    struct node *p;

    p = top;

    //gaurd.
    if(isEmpty()){
        printf("stack is empty\n");
        return;
    }

    printf("stack is : \n\n");
    while(p != NULL){
        printf("| %d |", p->info);
        p = p->link;
    }
    printf("\n");


}
/*END display*/

//****************************************************************************
//****************************************************************************
//****************************************************************************
/*END IMPLEMENTATIONS*/
/*
File name : queue.c
Purpose: To implement a queue using an array.
Date : 03/11/2018
Author : Evan Gertis
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int a[MAX];
int front, rear;

//function definitions.
//[START]
void initializeQueue();
int isFull();
int isEmpty();
int size();
void insert(int x);
int Delete();
int peek();
void display();
//[END]

int main(){

    // initialize locals.
    int choice, x;

    // set front and rear to -1.
    initializeQueue();

    while(1){
        printf("1. Insert an element in the queue\n");
        printf("2. Delete an element from the queue\n");
        printf("3. Display the element at the front\n");
        printf("4. Display all elements of the queue\n");
        printf("5. Display the size of the queue\n");
        printf("6. quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if(choice == 6){
            exit(1);
        }

        switch (choice)
        {
            case 1:
                printf("Enter the data that you would like to insert into the queue\n");
                scanf("%d", &x);
                insert(x);
                break;
            case 2:
                Delete();
                break;
            case 3:
                printf("The top of list %d", peek());
                break;
            case 4: 
                display();
            case 5:
                printf("The size of the queue is %d \n", size());
                break;

            default:
                break;
        }
    }
    return 0;
}

/*BEGIN IMPLEMENTATION*/
/*
******************************************************************
******************************************************************
******************************************************************
*/

/*[START] initializeQueue*/
void initializeQueue(){
    front, rear = -1;
}
/*[END] initializeQueue*/

/*[START] isFull*/
int isFull(){
    if(size() >= 50){
        return 1;
    } else {
        return 0;
    }
}
/*[END] isFull*/

/*[START] isEmpty*/
int isEmpty(){
    if(front == rear ){
        return 1;
    } else {
        return 0;
    }
}
/*[END] isEmpty*/

/*[START] size*/
int size(){
    return sizeof(a)/sizeof(a[0]);
}
/*[END] size*/

/*[START] insert*/
void insert(int x){
    rear++;
    a[rear] = x;
    
}
/*[END] insert*/

/*[START] Delete*/
int Delete(){
    if(isEmpty){
        printf("The list is empty \n");
        exit(1);
    } else {
        front++;
        a[front] = 0;
        return 1;
    }
}
/*[END] Delete*/

/*[START] peek*/
int peek(){
    if(isEmpty){
        printf("The list is empty \n");
        exit(1);
    } else {
        return a[front];
    }

}
/*[END] peek*/

/*[START] display*/
void display(){
    for(int i = 0; i < size(); i++)
    {
        printf("|%d|", a[i]);
    }
    printf("\n");
    
}
/*[END] display*/

/*
******************************************************************
******************************************************************
******************************************************************
*/
/*ENDIMPLEMENTATION*/
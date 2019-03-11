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
                peek();
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

}
/*[END] initializeQueue*/

/*[START] isFull*/
int isFull(){
    return 0;
}
/*[END] isFull*/

/*[START] isEmpty*/
int isEmpty(){
    return 0;
}
/*[END] isEmpty*/

/*[START] size*/
int size(){
    return 0;
}
/*[END] size*/

/*[START] insert*/
void insert(int x){

}
/*[END] insert*/

/*[START] Delete*/
int Delete(){
    return 0;
}
/*[END] Delete*/

/*[START] peek*/
int peek(){
    return 0;
}
/*[END] peek*/

/*[START] display*/
void display(){

}
/*[END] display*/

/*
******************************************************************
******************************************************************
******************************************************************
*/
/*ENDIMPLEMENTATION*/
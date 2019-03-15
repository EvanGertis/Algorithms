/*
Name of file: circular_queue.h
Purpose: Store defs and implementations for circular queue using an array data structure.
Author: Evan Gertis.
Date: 03/15/2019.
*/

#include "stdlib.h"
#include "stdio.h"
#define MAX 5

//globals.
int a[MAX];
int front, rear;


// Begin defintions.
void initializeQueue();
int size();
int isFull();
int isEmpty();
void insert(int x);
int Delete();
int peek();
void display();
// End definitions.

// Begin implementations.

//Begin initializeQueue
void initializeQueue(){
    front = -1;
    rear = -1;
}
//End initializeQueue

//returns size from front to rear index.
//Begin size
int size(){

    return 0;
}
//End size

//returns 1 if the maximum size MAX is allocated otherwise 0.
//Begin isFull
int isFull(){
    // case 1 front = rear + 1.    
    // case 2 front = 0 and rear = MAX - 1.
    if((front == rear +1) || ((front == 0) && (rear == MAX -1)) ){
        return 1;
    } else {
        return 0;
    }

}
//End isFull

//returns 1 if there aren't any values in the queue.
//Begin isEmpty
int isEmpty(){
    // case 1 front = -1.
    if(front == -1){
        return 1;
    }
    else {
        return 0;
    }

}
//End isEmpty

//increments the rear, decrements the front and adds an element into the queue.
//Begin insert
void insert(int x){
    if(isFull()){
        printf("Queue is full, please delete before inserting \n");
    }
    if(front == -1){
        front = 0;
    }
    if(rear == MAX -1){
        rear = 0;
    } else {
        rear = rear + 1;
    }

    //LIFO.
    a[rear] = x;
}
//End insert

//removes the last thing inserted into the queue.
//Begin Delete
int Delete(){
    int x;
    if(isEmpty()){
        printf("Queue is empty\n");
        exit(1);
    }
    x = a[front];

    //guard if only one element.
    if(front == rear){
        front = -1;
        rear = -1;
    } 
    else if(front == MAX -1)
    {
        front = 0;
    } else {
        front = front + 1;
    }
    

    return x;
}
//End Delete

//returns the next element in the queue.
//Begin peek
int peek(){

    if(!isEmpty()){
        return a[rear];
    } else {
        printf("queue is empty \n");
        exit(1);
    }
}
//End peek

//prints out all of the elements saved in the queue.
//Begin display
void display(){
    
    //guard.
    if(isEmpty()){
        printf("The queue is empty");
    } else{
        if(front <= rear){
            //print queue string.
            for(int i = front; i <= rear; i++){
                printf("[%d]", a[i]);
            }
            //break.
            printf("\n");
        } else if(front > rear){
            //print queue string.
            for(int i = front; i <= MAX-1; i++){
                printf("[%d]", a[i]);
            }
            //break.
            printf("\n");
        }
    } 
}
//End display

// End implementations.

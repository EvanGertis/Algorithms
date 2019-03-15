/*
Name of file: circular_queue.c
Purpose: Implement a circular queue using an array data structure.
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

int main(){
    int choice, x;

    //set rear and front to -1.
    initializeQueue();

    // update UI.
    while(1){
        printf("1. Get size of queue.\n");
        printf("2. Insert new element into the queue.\n");
        printf("3. Delete.\n");
        printf("4. Peek.\n");
        printf("5. Display all items.\n");
        printf("6. Exit\n");

        //get input.
        scanf("%d", choice);

        //Exit program.
        if(choice == 6){
            break;
        }

        //decicion tree.
        switch (choice)
        {
            case 1:
                printf("The size of the queue is %d \n", size());
                break;
        
            case 2:
                printf("Please enter the element that you would like to insert into the queue\n");
                scanf("%d", x);
                insert(x);
                break;
        
            case 3:
                printf("The element deleted was %d \n", Delete());
                break;
        
            case 4:
                printf("The next value in the queue is %d \n", peek());
                break;
        
            case 5:
                display();
                break;
        
            default:
                break;
        }

    }

    
    return 0;
}

// Begin implementations.

//Begin initializeQueue
void initializeQueue(){
    front = -1;
    rear = -1;
}
//End initializeQueue


//Begin size
int size(){

    return 0;
}
//End size


//Begin isFull
int isFull(){
    

    return 0;
}
//End isFull


//Begin isEmpty
int isEmpty(){
    // case 1 front and rear = -1.
    // case 2 rear = front - 1.
    // case 3 front = 0 and rear = MAX -1

    return 0;
}
//End isEmpty


//Begin insert
void insert(int x){

}
//End insert


//Begin Delete
int Delete(){

    return 0;
}
//End Delete


//Begin peek
int peek(){

    return 0;
}
//End peek


//Begin display
void display(){

}
//End display

// End implementations.

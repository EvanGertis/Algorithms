/*
FIle Name : circular_queue.c
Purpose: implement a circular queue.
Author: Evan Gertis.
Date: 03/14/2019
*/

#include "stdio.h"
#include "stdlib.h"

//node structure for saving info and
//linking subsequent nodes together.
struct node {
    struct node *link;
    int info;
};

//always points to the end of the list.
struct node *rear;

// BEGIN defintions.
void initializeQueue();
int isEmpty();
int peek();
int size();
void insert(int x);
int Delete();
void display();
// END definitions.

/*
******
******
******
*/

int main(){

    //locals.
    int choice, x;

    // loop ui.
    while(1){
        printf("1. Peek queue.\n");
        printf("2. Display size of queue.\n");
        printf("3. Insert a new element into the queue.\n");
        printf("4. Delete an element from the queue.\n");
        printf("5. Display all elements.\n");
        printf("6. Quit.\n");
        
        //process selection.
        scanf("%d", &choice);

        //exit the ui.
        if(choice == 6)
            break;

        //decision tree.
        switch (choice)
        {
            case 1:
                printf("Next up in queue %d \n", peek());
                break;
            case 2:
                printf("Size of the queue is %d \n", size());
                break;
            case 3:
                printf("Enter the number that you would like to insert into the queue\n");
                scanf("%d", x);
                insert(x);
                break;
            case 4:
                printf("Deleted %d from the queue", Delete());
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

/*
******
******
******
*/

// BEGIN defintions.
//Begin initializeQueue 
void initializeQueue(){
    rear = NULL;
}
//End initializeQueue

//Begin isEmpty
int isEmpty(){

    return 0;
}
//End isEmpty

//Begin peek
int peek(){

    return 0;
}
//End peek

//Begin size
int size(){

    return 0;
}
//End size

//Begin insert
void insert(int x){

}
//End insert

//Begin  Delete
int Delete(){

    return 0;
}
//End Delete

//Begin display
void display(){

}
//End display
// END definitions.

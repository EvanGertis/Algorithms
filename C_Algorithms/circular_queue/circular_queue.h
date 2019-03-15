/*
FIle Name : circular_queue.h
Purpose: save defs and implementations for a circular queue.
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
    if(rear == NULL){
        return 1;
    } else {
        return 0;
    }
    
}
//End isEmpty

//Begin peek
int peek(){

    // guard in case the queue is empty.
    if(isEmpty()){
        printf("List is Empty\n");
        exit(1);
    } else {
        return rear->link->info;
    }

    return 0;
}
//End peek

//Begin size
int size(){

    // guard the empty case.
    if(isEmpty()){
        printf("The list is empty. \n");
        exit(1);
    }

    //locals for skipping through and counting
    //the size of the list.
    struct node *p;
    int c;

    p = rear->link;
    do{

        c++;
        p = p->link;

    } while(p != rear->link);

    return c;
}
//End size

//Begin insert
void insert(int x){

    //locals for new node to be inserted.
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = x;

    //guard against the empty case.
    if(isEmpty()){
        rear = temp;
        rear->link = rear;
    } else {
        temp->link = rear->link;
        rear->link = temp;
        rear = temp;
    }

}
//End insert

//Begin  Delete
int Delete(){
    //node to be deleted.
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    int x;

    if(isEmpty()){
        printf("List is empty cannot delete.\n");
        exit(1);
    }
    
    //If there is only one element.
    if(rear->link == rear){
        temp = rear;
        rear = NULL;
        
    }
    else {
        temp->link = rear->link;
        rear->link = temp->link;
    }

    x = temp->info;
    free(temp);
    return x;
}
//End Delete

//Begin display
void display(){
    //pointer for skipping through the list.
    struct node *p;
    
    if(isEmpty()){
        printf("The list is empty.\n");
        exit(1);
    } else {
        p = rear->link;
        do{
            printf("| %d |", p->info);
            p = p->link;

        } while(p != rear->link);
        printf("\n");
        
    }
}
//End display
// END definitions.

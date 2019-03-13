#include "stdlib.h"
#include "stdio.h"

struct node{
    struct node *link;
    int info;
};

struct node *front, *rear;

//Begin definitions.
void initializeQueue();
int isFull();
int isEmpty();
int size();
void insert(int x);
void Delete();
int peek();
void display();
//End definitions.

int main(){

    int choice, x;

    //Set the front and rear pointers.
    initializeQueue();

    //UI loop.
    while(1){
        printf("1.Insert an element into the queue.");
        printf("2.Delete an element from the queue.");
        printf("3.Peek the queue.");
        printf("4.Display all.");
        printf("5.Display size.");
        printf("6.Quit.");
    }


    return 0;
}

//Begin implementations.

//This function simply sets the front
//and rear pointer of the quueue to NULL.
//BEGIN initializeQueue.
void initializeQueue(){
    front = NULL;
    rear = NULL;
}
//END initializeQueue.

//BEGIN isFull.
int isFull(){

    return 0;
}
//END isFull.

//BEGIN  isEmpty.
int isEmpty(){

    return 0;
}
//END isEmpty.

//BEGIN size.
int size(){

    return 0;
}
//END size.

//BEGIN insert.
void insert(int x){

}
//END insert.

//BEGIN Delete.
void Delete(){

}
//END Delete.

//BEGIN peek.
int peek(){

    return 0;
}
//END peek.

//BEGIN 
void display(){

}
//END
//End implementations.

#include "stdlib.h"
#include "stdio.h"

struct node{
    struct node *link;
    int info;
};

struct node *front, *rear;

//Begin definitions.
void initializeQueue();
int isEmpty();
int size();
void insert(int x);
int Delete();
int peek();
void display();
//End definitions.

/*
/*********
/*********
*/


//Begin implementations.

//This function simply sets the front
//and rear pointer of the quueue to NULL.
//BEGIN initializeQueue.
void initializeQueue(){
    front = NULL;
    rear = NULL;
}
//END initializeQueue.

//BEGIN  isEmpty.
int isEmpty(){
    if(front == NULL){
        return 1;
    } else {
        return 0;
    }
}
//END isEmpty.

//BEGIN size.
int size(){
    struct node *p;
    int c = 0;

    if(isEmpty()){
        printf("List is empty\n");
        return 0;
    }
    
    p = front;
    while(p != NULL){
        c++;
        p= p->link;
    }

    return c;
}
//END size.

//BEGIN insert.
void insert(int x){
    struct node *p, *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    //gaurd.
    if(temp == NULL){
        printf("memory not avail");
        return;
    }

    temp->info = x;
    temp->link = NULL;

    if(front == NULL){
        front = temp;
    }
    else {
        rear->link = temp;
    }
    rear = temp;
}
//END insert.

//BEGIN Delete.
int Delete(){
    struct node *temp;
    int x;
    if(isEmpty()){
        printf("list is empty\n");
        exit(1);
    }
    temp = front;
    x= temp->info;
    front= front->link;
    free(temp);
    return x;
}
//END Delete.

//BEGIN peek.
int peek(){
    if(isEmpty()){
        printf("list is empty\n");
        exit(1);
    }

    return front->info;
}
//END peek.

//BEGIN 
void display(){
    struct node *p;
    
    if(isEmpty()){
        printf("list is empty\n");
        return;
    }

    p = front;
    while(p != NULL){
        printf("|%d| ", p->info);
        p= p->link;
    }
    printf("\n");

}
//END
//End implementations.

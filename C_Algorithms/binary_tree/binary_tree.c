/*
File Name : binary_tree.c
Author : Evan Gertis
Date : 04/04/2019
Author : Evan Gertis
*/

#include <stdio.h>
#include <stdlib.h>

//node type for storing links and data.
struct node{
    struct node *lchild;
    char info;
    struct node *rchild;
};


//************************************
//************************************
//************************************
//DEFINITIONS

struct node *getnode(char x);
void display(struct node *p, int level);
void preorder(struct node *p);
void inorder(struct node *p);
void postorder(struct node *p);
void levelOrder(struct node *p);
int height(struct node *p);

//globals
#define MAX 100
struct node *queue[MAX];
int front = -1, rear = -1;

void insertQueue(struct node *item);
struct node * deleteQueue();
int queueEmpty();

//END
//************************************
//************************************
//************************************

int main(){
    return 0;
}

//************************************
//************************************
//************************************
//Implementations

//allocates new node for binary tree.
struct node *getnode(char x){
    struct node *rm;

    return rm;
}//end getnode

//displays the binary tree.
void display(struct node *p, int level){

}//end display

//binary tree traversal method.
void preorder(struct node *p){

}//end preorder

//binary tree traversal method.
void inorder(struct node *p){

}//end inorder

//binary tree traversal method.
void postorder(struct node *p){

}//end postorder

//binary tree traversal method.
void levelOrder(struct node *p){

}//end levelOrder

//returns the height of the binary tree.
int height(struct node *p){

    return 0;
}//end height

//utility**************

//adds an item to the queue.
void insertQueue(struct node *item){

}

//deletes an item from the queue.
struct node * deleteQueue(){

    struct node *rm;

    return rm;
}

//returns 1 if the queue is empty
int queueEmpty(){

    return 1;
}


//END
//************************************
//************************************
//************************************



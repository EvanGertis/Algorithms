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


struct node *getnode(char x){
    struct node *rm;

    return rm;
}

void display(struct node *p, int level){

}

void preorder(struct node *p){

}

void inorder(struct node *p){

}

void postorder(struct node *p){

}

void levelOrder(struct node *p){

}

int height(struct node *p){

    return 0;
}

//END
//************************************
//************************************
//************************************



/*
File Name: binary_tree.c
Author: Evan Gertis
Purpose: stores the implmentation of various binary tree methods.
Date: 04/09/2018
*/

//*********************************
//*********************************
//*********************************
//defs
#include <stdio.h>
#include <stdlib.h>

//binary tree structure for storing children and data.
struct node{
    struct node *stLeftchid;
    int intData;
    struct node *stRightchild;
};

struct node *gfGetnode(int intData);
void gfDisplay(struct node *stPtr);

//*********************************
//*********************************
//*********************************

int main(){
    //locals
    struct node *root = NULL;
    int choice, x;

    //insert the first node.
    root = gfGetnode(10);

    //display nodes.
    gfDisplay(root);
    return 0;
}

//*********************************
//*********************************
//*********************************
//implementations

//Begin getnode.
struct node *gfGetnode(int intData){
    struct node *stPtr = (struct node *)malloc(sizeof(struct node));
    stPtr->stLeftchid = NULL;
    stPtr->stLeftchid = NULL;
    stPtr->intData = intData;

    return stPtr;
}
//End getnode.

//Begin display.
void gfDisplay(struct node *stPtr){
    if(stPtr == NULL){
        return;
    }
    printf("%d", stPtr->intData);
    gfDisplay(stPtr->stLeftchid);
    gfDisplay(stPtr->stRightchild);
}
//End display.


//*********************************
//*********************************
//*********************************
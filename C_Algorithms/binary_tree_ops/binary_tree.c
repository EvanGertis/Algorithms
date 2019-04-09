/*
File Name: binary_tree.c
Author: Evan Gertis
Purpose: stores the implmentation of various binary tree methods.
Date: 04/09/2018
*Coding conventions
-gf global function.
-lf local function
-prefixes are variable types.
    -i.e int k -> int intK
    -struct node myNode -> struct node stMyNode.
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
struct node *gfInsertNode(struct node *stRoot, int intX);
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
    root = gfInsertNode(root, 15);
    root = gfInsertNode(root, 11);

    //display nodes.
    gfDisplay(root);
    return 0;
}

//*********************************
//*********************************
//*********************************
//implementations

//Begin gfGetnode.
struct node *gfGetnode(int intData){
    struct node *stPtr = (struct node *)malloc(sizeof(struct node));
    stPtr->stLeftchid = NULL;
    stPtr->stLeftchid = NULL;
    stPtr->intData = intData;

    return stPtr;
}
//End getnode.

//Begin gfInsertNode
struct node *gfInsertNode(struct node *stRoot, int intX){
    
    struct node *stTemp, *stPar, *stPtr;

    //set the head.
    stPtr = stRoot;
    //set the parent.
    stPar = NULL;

    while(stPtr != NULL){
        stPar = stPtr;
        //case 1. intX is less than stored data.
        if(intX > stPtr->intData){
            stPtr = stPtr->stLeftchid;
        }
        //case 2. intX is greater than stored data.
        else if (intX < stPtr->intData)
        {
            stPtr = stPtr->stRightchild;
        }
        // case 3. intX is equal to the stored data.
        else{
            printf("%d already exists\n", intX);
            return stRoot;
        }
    }

    stTemp = gfGetnode(intX);
    if(stPar == NULL){
        stRoot = stTemp;
    }
    else if(intX < stPar->intData){
        stPar->stLeftchid = stTemp;
    }
    else {
        stPar->stRightchild = stTemp;
    }

    return stRoot;
}

//Begin gfDisplay.
void gfDisplay(struct node *stPtr){
    if(stPtr == NULL){
        return;
    }
    gfDisplay(stPtr->stLeftchid);
    printf("%d | ", stPtr->intData);
    gfDisplay(stPtr->stRightchild);
}
//End display.


//*********************************
//*********************************
//*********************************
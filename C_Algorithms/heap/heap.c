/*
Author: Evan Gertis
File Name: heap.c
Purpose: Implementation of heap tree.
Date: 04/10/2019
*/

#include <stdio.h>
#define LARGE_VALUE 99999

void insert(int value, int a[], int *pn);
int deleteRoot(int a[], int *pn);
void restoreUp(int a[], int loc);
void restoreDown(int a[], int i, int size);
void display(int a[], int n);

int main(){

    //locals
    int a[50];
    int n=0;
    int choice, value;

    a[0] = LARGE_VALUE;

    //UI loop
    while(1){
        printf("1. Insert\n");
        printf("2. Delete root\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        // get input.
        printf("Please enter your choice: \n");
        scanf("%d", &choice);
        if(choice == 4){
            break;
        }

        switch (choice)
        {
            case 1:
                printf("Enter the value to be inserted : ");
                scanf("%d", &value);
                insert(value, a, &n);
                break;
            
            case 2: 
                if(n == 0)
                    printf("Heap is empty \n");
                else{
                    value = deleteRoot(a, &n);
                    printf("Maximum value is %d\n", value);
                }
                break;
            case 3:
                 display(a,n);
                 break;
            default:
                printf("Wrong choice\n");
        }
    }

    return 0;
}


//begin insert
void insert(int value, int a[], int *pn){
    (*pn)++;
    a[*pn]=value;
    restoreUp(a, *pn);
}
//end

//begin deleteRoot
int deleteRoot(int a[], int *pn){
    int maxValue = a[1];
    a[1] = a[*pn];
    (*pn)--;
    restoreDown(a, 1, *pn);
    return maxValue;
}
//end deleteRoot

//begin restoreUp
void restoreUp(int a[], int loc){
    int k = a[loc];
    int loc_parent=loc/2;

    while(a[loc_parent] < k){
        a[loc] = a[loc_parent];
        loc = loc_parent;
        loc_parent = loc/2;
    }
    a[loc] = k;
}
//end restoreUp

//begin restoreDown
void restoreDown(int a[], int i, int size){
    int k = a[i];
    int lchild = 2*i, rchild = lchild + 1;

    while(rchild <= size){
        if(k >= a[lchild] && k >= a[rchild]){
            a[i] = k;
            return;
        }
        else if(a[lchild] > a[rchild]){
            a[i] = a[lchild];
            i = lchild;
        }
        else {
            a[i] = a[rchild];
            i = rchild;
        }
        lchild = 2*i;
        rchild = lchild + 1;
    }

    /*If number of nodes is even*/
    if(lchild==size && k<a[lchild]){
        a[i] = a[lchild];
        i=lchild;
    }
    a[i]=k;
}
//end restoreDown

//begin display
void display(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d | ", a[i]);
    }
    printf("\n");
}
//end display

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

}
//end

//begin deleteRoot
int deleteRoot(int a[], int *pn){

}
//end deleteRoot

//begin restoreUp
void restoreUp(int a[], int loc){

}
//end restoreUp

//begin restoreDown
void restoreDown(int a[], int i, int size){
}
//end restoreDown

//begin display
void display(int a[], int n){
}
//end display

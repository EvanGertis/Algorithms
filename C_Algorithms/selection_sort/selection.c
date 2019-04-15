#include "stdlib.h"
#include "stdio.h"

#define SIZE 5

int a[SIZE] = {2, 6, 3, 1, 5};

void displayArray(int a[]);

int main(){
    
    displayArray(a);

    for(int i = 0; i < SIZE; i++){
        for(int j = 1; j < SIZE - i; j++){
            if(a[j-1] > a[j]){
                int temp;
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }

    displayArray(a);

    return 0;
}

void displayArray(int a[]){

    for(int i = 0; i < SIZE; i++){
        printf("%d | ", a[i]);
    }
    printf("\n");

}


#include "stdio.h"
#include "stdlib.h"

#define MAX 100


int main(){    

    int a[MAX], i, j, temp, n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter the element %d : ", i);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d | ", a[i]);
    }

    printf("\n");

    for(i = 1; i < n; i++){
        temp = a[i];

        for(j = i - 1; j >=0 && a[j] > temp; j--){
            a[j+1] = a[j];
        }

        a[j+1] = temp;
    }

    for(int i = 0; i < n; i++){
        printf("%d | ", a[i]);
    }

    printf("\n");
    
    return 0;
}

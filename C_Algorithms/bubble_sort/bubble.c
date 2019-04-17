#include <stdio.h>

#define MAX 10

int main(){

    int temp, n, a[MAX];

    printf("Enter the number of elements that you would like to add: \n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter element, %d :", i);
        scanf("%d", &a[i]);
    }
    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] < a[j+1]){
                temp = a[j+1];
                printf("temp: %d\n", temp);
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }

    //display array
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
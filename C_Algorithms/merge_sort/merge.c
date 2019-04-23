#include "stdio.h"

#define MAX 100

void mergeSort(int a[], int low, int up);
void merge(int a[], int temp[], int low1, int up1, int low2, int up2);
void copy(int a[], int temp[], int low, int up);

int main(){
    int i, n, a[MAX];

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter the data that you would like to store at index %d: \n", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++){
        printf("%d | ", a[i]);
    }
    printf("\n");

    mergeSort(a, 0, n-1);

    printf("The sorted list is: \n");
    for(i = 0; i < n; i++){
        printf("%d | ", a[i]);
    }
    printf("\n");

}

void mergeSort(int a[], int low, int up){
    int mid;
    int temp[MAX];

    if(low == up){
        return;
    }

    mid = (low+up)/2;
    mergeSort(a, low, mid);
    mergeSort(a, mid + 1, up);

    merge(a, temp, low, mid, mid + 1, up);

    copy(a, temp, low, up);
}

void merge(int a[], int temp[], int low1, int up1, int low2, int up2){
    int i = low1;
    int j = low2;
    int k = low1;

    while( (i <= up1) && (j<=up2) ) {
        if(a[i] <= a[j]){
            temp[k++] = a[i++];
        }
        else {
            temp[k++] = a[j++];
        }
    }

    while(i <= up1){
        temp[k++] = a[i++];
    }

    while(j <= up2){
        temp[k++] = a[j++];
    }
}

void copy(int a[], int temp[], int low, int up){
    int i;
    for(i = low; i <= up; i++){
        a[i] = temp[i];
    }
}

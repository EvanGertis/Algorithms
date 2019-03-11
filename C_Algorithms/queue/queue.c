/*
File name : queue.c
Purpose: To implement a queue using an array.
Date : 03/11/2018
Author : Evan Gertis
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int a[MAX];
int front, rear;

void initializeQueue();
int isFull();
int isEmpty();
int size();
void insert(int x);
int Delete();
int peek();
void display();

int main(){
    printf("hello");
    return 0;
}
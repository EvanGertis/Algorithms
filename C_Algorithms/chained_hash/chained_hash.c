/*
File Name: chained_hash.c
Author : Evan Gertis
Purpose : contains implementation of chained hash table.
Date : 03/28/2019
*/

#include "stdio.h"
#include "stdlib.h"

//hardcoded table size.
#define TSIZE 7

//student object: used to store student info in hash table.
struct student
{
    int studentID;
    char studentName[20];
};

//node for linked list.
struct Node
{
    struct student info;
    struct Node *link;
};

//*******************************************************
//*******************************************************
//*******************************************************
//BEGIN DEFS.

void insert(struct student emprec, struct Node *table[]);
int search(int key, struct Node *table[]);
void del(int key, struct Node *table[]);
void displayTable(struct Node *table[]);
int hash(int key);

//END DEFS.
//*******************************************************
//*******************************************************
//*******************************************************

//Initial entry point of the program.
int main(){


    printf("Hello");

    return 0;
}

//*******************************************************
//*******************************************************
//*******************************************************
//BEGIN Implementation.

//BEGIN insert.
void insert(struct student emprec, struct Node *table[]){

}//END insert.

//BEGIN search.
int search(int key, struct Node *table[]){

    return 0;
}//END search

//BEGIN del.
void del(int key, struct Node *table[]){

}//END del.

//BEGIN displayTable.
void displayTable(struct Node *table[]){

}//END displayTable

//BEGIN hash.
int hash(int key){

    return 0;
}//END hash.


//END Implementation
//*******************************************************
//*******************************************************
//*******************************************************

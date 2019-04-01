/*
File Name: chained_hash.h
Author : Evan Gertis
Purpose : contains definitions and implementations of chained hash table functions and vars.
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

//*******************************************************
//*******************************************************
//*******************************************************
//BEGIN Implementation.

//BEGIN insert.
void insert(struct student emprec, struct Node *table[]){
    //locals
    int h, key;
    struct Node *temp;

    key = emprec.studentID;

    if(search(key, table)!= -1)
    {
        printf("Duplicate key\n");
        return;
    }

    h = hash(key);

    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->info = emprec;
    temp->link = table[h];
    table[h] = temp;
}//END insert.

//BEGIN search.
int search(int key, struct Node *table[]){
    int h = hash(key);
    struct Node *p = table[h];

    while(p!=NULL){
        if(p->info.studentID == key){
            printf("%d %s \n", p->info.studentID, p->info.studentName);
            return h;
        }

        p= p->link;
    }

    return -1;
    
}//END search

//BEGIN del.
void del(int key, struct Node *table[]){
    int h;
    struct Node *temp, *p;
    h = hash(key);

    if(table[h] == NULL){
        printf("Key %d not found\n", key);
        return;
    }

    if(table[h]->info.studentID == key){
        temp = table[h];
        table[h] = table[h]->link;
        free(temp);
    }

    p = table[h];
    while(p->link != NULL){
        if(p->link->info.studentID == key){
            temp= p->link;
            p->link = temp->link;
            free(temp);
            return;
        }
        p = p->link;
    }
    printf("Key %d not found \n", key);

}//END del.

//BEGIN displayTable.
void displayTable(struct Node *table[]){
    int i;
    struct Node *p;

    for(int i = 0; i < TSIZE; i++){
        printf("\n[%d] ", i);
        if(table[i]!= NULL){
            p = table[i];
            while(p!=NULL){
                printf("%d %s\t", p->info.studentID, p->info.studentName);
                p = p->link;
            }
        }
    }
    printf("\n");
}//END displayTable

//BEGIN hash.
int hash(int key){
    //division method key generation.
    return key % TSIZE;
}//END hash.


//END Implementation
//*******************************************************
//*******************************************************
//*******************************************************

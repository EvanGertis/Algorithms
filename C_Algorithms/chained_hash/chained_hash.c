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

    //locals.
    int choice, key;
    struct node *table[TSIZE];
    struct student record;

    //loop UI.
    while(1){
        
        //show options.
        printf("1. insert a record into the table.    \n");
        printf("2. search for a record in the table.  \n");
        printf("3. delete a record from the table.    \n");
        printf("4. display all records from the table.\n");
        printf("5. exit the program.                  \n");

        //get user choice.
        scanf("%d", &choice);

        //guard if the user wants to quit.
        if(choice == 5){
            printf("Good bye.");
            break;
        }

        switch (choice)
        {
            case 1:
                printf("Please enter the student's name that you would like to insert: \n");
                scanf("%d%s", &record.studentName);
                insert(record, table);
                break;
            case 2:
                printf("Please enter the studentID that you would like to search for: \n");
                scanf("%d", &key);
                search(key, table);
            case 3:
                printf("Please enter the studentID that you would like delete: \n");
                scanf("%d", &key);
                del(key, table);
            case 4:
                displayTable(table);
            default:
                break;
        }

    }

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

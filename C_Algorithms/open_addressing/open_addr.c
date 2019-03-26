/*
File Name: open_addr.c
Author: Evan Gertis.
Purpose: implement the open addressing technique for hashing.
Date: 03/26/2019
*/

#include <stdio.h>
#include <stdlib.h>


//Constants.

//table size.
#define TSIZE 19;

//*********


//TYPE DEFINTIONS

//Used to keep track of record status.
enum type_of_record {EMPTY, DELETED, OCCUPIED};

//Stores student properties.
struct student{

    int studentId;
    char studentName[20];

};

//Stores properties for student records.
struct Record{

    struct student_info;
    enum type_of_record status;

};

//***************

//BEGIN definitions
void insert(struct student rec, struct Record table[]);
int search(int key, struct Record table[]);
void del(int key, struct Record table[]);
void display(struct Record table[]);
int hash(int key);
//END definitions

int main(){

    printf("Hello there");
    return 0;
}


//BEGIN Implimentations.

//Used to insert a new record into the table.
//BEGIN insert
void insert(struct student rec, struct Record table[]){

}
//END insert

//Used to find a record in table via key.
//BEGIN search
int search(int key, struct Record table[]){
    
    return 0;
}
//END search

//Used to delete a record in the table via key.
//BEGIN del
void del(int key, struct Record table[]){

}
//END del

//displays all records in the table.
//BEGIN display
void display(struct Record table[]){

}
//END display

//Hashing function used to generate keys.
//BEGIN hash
int hash(int key){

    return 0;
}
//END hash

//END Implementations.

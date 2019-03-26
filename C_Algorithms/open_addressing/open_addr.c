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
#define TSIZE 19 

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

    struct student student_info;
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

    struct Record table[TSIZE];

    struct student rec;

    int index = 0, key, choice;

    //Loop through table and initialize status.
    for(int i = 0; i <= TSIZE -1; i++){
        table[i].status = EMPTY;
    }

    //UI loop
    while(1){

        printf("1. Insert a record\n");
        printf("2. Search a record\n");
        printf("3. Delete a record\n");
        printf("4. Display table\n");
        printf("5. Exit\n");

        //Collect user input.
        printf("Enter your choice: \n");
        scanf("%d", &choice);

        if(choice == 5){
            break;
        }

        switch (choice)
        {
            case 1:
                printf("Enter studentId : ");
                scanf("%d", &rec.studentId);
                printf("Enter student name : ");
                scanf("%s", &rec.studentName);
                insert(rec, table);
                break;
            case 2:
                printf("Please enter the student id that you would like to search for: \n");
                scanf("%d", &key);
                index = search(key, table);
                if(index == -1){
                    printf("Key not found\n");
                }
                else{
                    printf("Key found at index %d \n", index);
                    printf("%d %s \n", table[index].student_info.studentId, table[index].student_info.studentName);
                }
                break;
            case 3:
                printf("Please enter the id that you would like to delete\n");
                scanf("%d", &key);
                del(key, table);
                break;
            case 4:
                display(table);
                break;
            default:
                break;
        }

    }

    return 0;
}


//BEGIN Implimentations.

//Used to insert a new record into the table.
//BEGIN insert
void insert(struct student rec, struct Record table[]){
    
    //locals
    int location, h;
    int key = rec.studentId;
    
    //new hash index.
    h = hash(key);

    location = h;

    //loop over the table and insert the record in an empty cell.
    for(int i = 0; i < TSIZE; i++)
    {
        //guard against overwritting existing values.
        if(table[location].status == EMPTY || table[location].status == DELETED){
            table[location].student_info = rec;
            table[location].status = OCCUPIED; //set the flag to occupied for this cell.
            printf("Record inserted \n\n");
            return;
        }
        if(table[location].student_info.studentId == key){
            printf("Duplicate key please try again \n\n");
            return;
        }
        location = (h + i ) % TSIZE; //modulate and try again.
    }
    printf("Record cannot be inserted. Not enough room\n\n");
}
//END insert

//Used to find a record in table via key.
//BEGIN search
int search(int key, struct Record table[]){
    int i, h, location;
    h = hash(key);

    location = h;

    for(i = 1; i < TSIZE; i++){
        if(table[location].status == EMPTY){
            return -1;
        }
        if(table[location].student_info.studentId == key){
            return location;
        }
        location = (h + i) % TSIZE; 
    }
    return -1;
}
//END search

//Used to delete a record in the table via key.
//BEGIN del
void del(int key, struct Record table[]){
    int location = search(key, table);
    if(location == -1){
        printf("Key not found \n");
    }
    else{
        table[location].status = DELETED;
    }
}
//END del

//displays all records in the table.
//BEGIN display
void display(struct Record table[]){
    for(int i = 0; i < TSIZE; i++)
    {
        //guard against showing invalid data.
        if(table[i].status == OCCUPIED){
            printf("Student name : %s | ", table[i].student_info.studentName);
            printf(" id : %d | ", table[i].student_info.studentId);
            printf("\n\n");
        }
        else if (table[i].status == DELETED)
        {
            printf("DELETED \n");
        }
        else{
            printf("EMPTY \n");
        }
        
    }
    return;
}
//END display

//Hashing function used to generate keys.
//BEGIN hash
int hash(int key){
    //mod hash
    return (key%TSIZE);
}
//END hash

//END Implementations.

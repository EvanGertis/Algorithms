/*
File Name: open_addr.c
Author: Evan Gertis.
Purpose: implement the open addressing technique for hashing.
Date: 03/26/2019
*/
#include "open_addr.h"


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

#include "chained_hash.h"

//Initial entry point of the program.
int main(){

    //locals.
    int choice, key;
    struct Node *table[TSIZE];
    struct student record;

    //set the head pointers to NULL.
    for(int i = 0; i <=TSIZE-1; i++){
        table[i] = NULL;
    }

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
                scanf("%s", record.studentName);
                printf("Please enter the studentId that you would like to associate with this name: \n");
				scanf("%d", &record.studentID);
                insert(record, table);
                break;
            case 2:
                printf("Please enter the studentID that you would like to search for: \n");
                scanf("%d", &key);
                int i = search(key, table);
                if(i == -1){
                    printf("Key not found \n");
                } else {
                    printf("key found in chain %d\n", i);
                }
                break;
            case 3:
                printf("Please enter the studentID that you would like delete: \n");
                scanf("%d", &key);
                del(key, table);
                break;
            case 4:
                displayTable(table);
                break;
            default:
                break;
        }

    }

    return 0;
}

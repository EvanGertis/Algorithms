/*
FIle Name : circular_queue.c
Purpose: implement a circular queue.
Author: Evan Gertis.
Date: 03/14/2019
*/
#include "circular_queue.h"

int main(){

    //locals.
    int choice, x;

    // loop ui.
    while(1){
        printf("1. Peek queue.\n");
        printf("2. Display size of queue.\n");
        printf("3. Insert a new element into the queue.\n");
        printf("4. Delete an element from the queue.\n");
        printf("5. Display all elements.\n");
        printf("6. Quit.\n");
        
        //process selection.
        scanf("%d", &choice);

        //exit the ui.
        if(choice == 6)
            break;

        //decision tree.
        switch (choice)
        {
            case 1:
                printf("Next up in queue %d \n", peek());
                break;
            case 2:
                printf("Size of the queue is %d \n", size());
                break;
            case 3:
                printf("Enter the number that you would like to insert into the queue\n");
                scanf("%d", &x);
                insert(x);
                break;
            case 4:
                printf("Deleted %d from the queue\n", Delete());
                break;
            case 5:
                display();
                break;
        
            default:
                break;
        }
    }
    return 0;
}

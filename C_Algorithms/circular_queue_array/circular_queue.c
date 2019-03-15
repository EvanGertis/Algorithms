/*
Name of file: circular_queue.c
Purpose: Implement a circular queue using an array data structure.
Author: Evan Gertis.
Date: 03/15/2019.
*/

#include "circular_queue.h"

int main(){
    int choice, x;

    //set rear and front to -1.
    initializeQueue();

    // update UI.
    while(1){
        printf("1. Get size of queue.\n");
        printf("2. Insert new element into the queue.\n");
        printf("3. Delete.\n");
        printf("4. Peek.\n");
        printf("5. Display all items.\n");
        printf("6. Exit\n");

        //get input.
        scanf("%d", &choice);

        //Exit program.
        if(choice == 6){
            break;
        }

        //decicion tree.
        switch (choice)
        {
            case 1:
                printf("The size of the queue is %d \n", size());
                break;
        
            case 2:
                printf("Please enter the element that you would like to insert into the queue\n");
                scanf("%d", &x);
                insert(x);
                break;
        
            case 3:
                printf("The element deleted was %d \n", Delete());
                break;
        
            case 4:
                printf("The next value in the queue is %d \n", peek());
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


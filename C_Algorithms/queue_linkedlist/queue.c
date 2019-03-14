#include "queue.h"

int main(){

    int choice, x;

    //Set the front and rear pointers.
    initializeQueue();

    //UI loop.
    while(1){
        printf("1.Insert an element into the queue.\n");
        printf("2.Delete an element from the queue.\n");
        printf("3.Peek the queue.\n");
        printf("4.Display all.\n");
        printf("5.Display size.\n");
        printf("6.Quit.\n");

        //get selection.
        scanf("%d", &choice);

        if(choice == 6){
            break;
        }

        //process selection.
        switch (choice)
        {
            case 1:
                printf("Please enter the value that you would like to insert\n");
                scanf("%d", &x);
                insert(x);
                break;
            case 2:
                printf("%d delete from the queue\n", Delete());
                break;
        
            case 3:
                peek();
                break;
        
            case 4:
                display();
                break;
        
            case 5:
                printf("The size of the queue is %d", size());
                break;
        
            default:
                break;
        }
    }


    return 0;
}

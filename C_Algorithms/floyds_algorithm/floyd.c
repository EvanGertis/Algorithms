#include "floyd.h"



int main(){

    struct node *head;
    int x;
    head = (struct node *)malloc(sizeof(struct node));
    head->info = 0;
    head->link = NULL;

    createList(head);
    displayList(head);

    
    struct node * cycle;
    int test;
    
    while(1){
        printf("\n Do you want to make the list into a circularly linked list enter 1 for yes 0 for no?\n");
        scanf("%d", &test);
        
        if(test == 1){
            printf("Enter the node where you want to insert a cycle:\n");
            scanf("%d", &x);
            insertCycle(head->link, x);
            // makeListCircular(head);
            break;
        }
        else if(test == 0){
            break;
        }
    }

    cycle  = findCycle(head);

    if(cycle == NULL){
        printf("NO CYCLE");
    }
    else{
        printf("CYCLE \n");
        removeCycle(head, cycle);
        printf("Cycle removed, now list is NULL terminated\n");
    }

    displayList(head);

    return 0;
}


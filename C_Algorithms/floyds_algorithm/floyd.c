#include "floyd.h"

void removeCycle(struct node * head, struct node * cycle);

int main(){

    struct node *head;
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
            makeListCircular(head);
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

void removeCycle(struct node * head, struct node * cycle){
    struct node *p, *q;
    int i, lenCycle, lenRemList, lengthList;

    printf("Node at which the cycle was detected is %d \n", cycle->info);
    p = q = cycle;
    lenCycle = 0;
    do{
        lenCycle++;
        q=q->link;
    }while(p!=q);
    printf("Length of cycle is : %d\n", lenCycle);

    lenRemList = 0;
    p = head;
    while(p != q){
        lenRemList++;
        p = p->link;
        q = q->link;
    }

    printf("Number of nodes not included in the cycle are: %d\n", lenRemList);
    lengthList = lenCycle +lenRemList;
    printf("Length of the list is : %d\n", lengthList);

    p = head;
    for(i = 1; i <= lengthList -1; i++){
        p = p->link;
    }
    p->link = NULL;

 
}
#include "floyd.h"


struct node *findCycle(struct node *start);
void makeListCircular(struct node *head);

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
        printf("\n Do you want to make the list into a circularly linked list enter 1 for yes 0 for no?");
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
        printf("CYCLE");
    }

    return 0;
}

void makeListCircular(struct node *head){
    struct node *p;

    p = head->link;
    while(p != NULL){
        p = p->link;
    }

    p = head;

}

struct node *findCycle(struct node *start){
    struct node *slowP, *fastP;

    if(start->link == NULL){
        return NULL;
    }

    slowP = fastP = start;

    while(slowP != NULL && fastP !=NULL){
        slowP = slowP->link;
        fastP = fastP->link->link;

        if(slowP == fastP){
            return slowP;
        }
    }

    return NULL;
}
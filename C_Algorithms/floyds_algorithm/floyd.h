#include "stdlib.h"
#include "stdio.h"


// struct node definition, stores data and pointer to next node.
struct node {

    int info;
    struct node *link;
};

// function definitions.
void createList(struct node *head);
void insertAtEnd(struct node * head, int data);
void displayList(struct node* head);
struct node *findCycle(struct node *start);
void makeListCircular(struct node *head);
void removeCycle(struct node * head, struct node * cycle);
void insertCycle(struct node * head, int x);


// createList prompts the user for number of nodes and data to be inserted.
void createList(struct node *head){
    int data, n;
    
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // gaurd
    if(n == 0){
        return;
    }

    // get the data for the nodes.
    for(int i =0; i< n; i++){
        printf("Enter the data that you would like to insert at node %d: ", i);
        scanf("%d", &data);
        insertAtEnd(head, data);
    }
}

// insert at end adds a node to the end of the list.
void insertAtEnd(struct node * head, int data){
    struct node * temp, * p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;

    p = head;
    while(p->link != NULL){
        p = p->link;
    }

    temp->link = p->link;
    p->link = temp;

}

// displayList just prints out the valuse stored in each node.
void displayList(struct node *head){
    struct node *p;

    p = head->link;
    while(p != NULL){
        printf("|%d | ", p->info);
        p = p->link;
    }


}

void makeListCircular(struct node *head){
    struct node *p;

    p = head->link;
    while(p->link != NULL){
        p = p->link;
    }
    p->link = head->link;

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

void insertCycle(struct node * head, int x){
    struct node *p, *px = NULL, *prev, *ptr;

    p = head;
    while(p != NULL){
        if(p->info ==x)
            px = p;
        prev = p;
        p = p->link;
    }
    if(px != NULL)
        prev->link = px;
}
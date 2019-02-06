
#include "stdio.h"
#include "stdlib.h"

struct node
{
    int info;
    struct node *link;
};

// methods
void insertAtEnd(struct node * head, int data);
void insertAtBeginning(struct node * head, int data);
void insertBetween(struct node * head, int data, int x);
void createList(struct node *head);
void displayList(struct node *head);
void deleteNode(struct node * head, int data);

// adds a node to the end of the list.
void insertAtEnd(struct node * head, int data){
    struct node * temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;

    if(head->link == NULL){
        temp->link = head->link;
        head->link = temp;
        return;
    }

    p = head;
    while(p->link != NULL){
        p = p->link;
    }

    temp->link = p->link;
    p->link = temp;
    return;

}

//inserts a node between two nodes
void insertBetween(struct node * head, int data, int x){
    
    // used to keep track of position while looping through
    // the list.
    int count;
    count = 0;

    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;

    if(x == 0){
        insertAtBeginning(head, data);
        return;
    }

    p = head;
    while(p->link != NULL){
        if(count == x)
            break;
        p = p->link;
        count++;
    }

    if(p->link == NULL){
        printf("Node not in the list \n");
        return;
    }
    else {
        temp->link = p->link;
        p->link = temp;
        return;
    }
    
}

// adds a node to the beginning of the list.
void insertAtBeginning(struct node * head, int data){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;

    temp->link = head->link;
    head->link = temp;
    return;
}


void createOrderedList(struct node *head)
{
    int n, data;

    // prompts.
    printf("Enter the number of nodes that you would like insert ");
    scanf("%d", &n);
    
    // guard.
    if(n == 0){
        return;
    }

    // get the data for the nodes.
    for(int i = 0; i < n; i++){
        
        printf("Enter the data that you would like to store at node %d :", i);
        scanf("%d", &data);
        insertAtEnd(head, data);    
    }

}

// loops through the list and shows the value at each node.
void displayList(struct node *head)
{
    struct node *p;

    p = head->link;
    while (p != NULL)
    {
        printf("%d ", p->info);
        p = p->link;
    }
    printf("\n");
}

void deleteNode(struct node * head, int data){

    struct node * p, *temp;

    // guard.
    if(head->link == NULL){
        printf("The list is empty \n");
        return;
    }
    

    p = head;
    while(p->link != NULL){

        if(p->link->info == data){
            temp = p->link;
            p->link = temp->link;
            free(temp);
            return;
        }
        p = p->link;
    }

    if(p->link->link == NULL){
        printf("\n deleting last node \n");
    }

}
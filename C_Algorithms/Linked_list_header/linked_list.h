
#include "stdio.h"
#include "stdlib.h"

struct node
{
    int info;
    struct node *link;
};

void createList(struct node *head);
void displayList(struct node *head);
void insertAtEnd(struct node *head, int data);
void insertBefore(struct node *head, int data, int x);
void insertAtPosition(struct node *head, int data, int x);
void deleteNode(struct node *head, int data);
void reverse(struct node *head);


void createList(struct node *head)
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

// inserts a node after the header node.
void insertAtEnd(struct node *head, int data)
{

    struct node *p;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;

    p = head;
    while (p->link != NULL)
    {
        p = p->link;
    }

    temp->link = p->link;
    p->link = temp;
}

// inserts a node before a specific index.
void insertBefore(struct node *head, int data, int x)
{
    struct node *p;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;

    // variable used to keep track of looped nodes.
    int count;
    count = 0;

    if(head->link == NULL){
        printf("\n list is empty \n");
        return;
    }

    p = head;

    while (p->link != NULL)
    {
        if (x == count)
        {
            break;
        }
        else
        {

            p = p->link;
            count++;
        }
    }
    printf("\n count: %d \n", count);
    temp->link = p->link;
    p->link = temp;
}

// inserts a node after a node.
void insertAtPosition(struct node * head, int data, int x){
    struct node * temp, *p;
    temp = (struct node * )malloc(sizeof(struct node));
    temp->info = data;

    // counter variable.
    int count; 
    count = 0;

    if(head->link == NULL){
        printf("\n List is empty \n");
        return;
    }

    p = head;
    while(p->link != NULL){
        printf("p->info: %d ", p->info);
        if(p->info == x){
            temp->link = p->link;
            p->link = temp;
            return;
        }
        count++;
        p = p->link;
    }

    if(p->link == NULL){
        printf("\n data was not in the list \n ");
        return;
    }
    

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
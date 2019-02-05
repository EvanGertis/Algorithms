
#include "stdio.h"
#include "stdlib.h"

struct node
{
    int info;
    struct node *link;
};



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
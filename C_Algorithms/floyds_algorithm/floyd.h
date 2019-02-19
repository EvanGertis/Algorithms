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
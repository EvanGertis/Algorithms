#include "stdlib.h"
#include "stdio.h"


// node for list.
struct node {
    int info;
    int link;
};

//-function defitions-//

void createList(struct node * head);
void insertInOrder(struct node * head, int data);

//-------------------//


// initial entry point for the program.
int main(){
    
    // declare head pointer.
    struct node *head;
    
    // set the head to null.
    head = NULL;

    createList(head);


    return 0;
}



//-function implementations-//

void createList(struct node * head){
    
    // declare locals
    int n, data;

    // get the number of nodes
    printf("Please enter the number of nodes that you would like to insert: ");
    scanf("%d", &n);

    // get the data for each node.
    for(int i = 0; i < n; i++)
    {
        printf("Enter the data that you would like to insert at %d: ", i);
        scanf("%d", &data);
        insertInOrder(head, data);
    }
    

}


void insertInOrder(struct node * head, int data){
    // declare local variables.
    // need a pointer to loop and a pointer to insert.
    struct node *p, *temp;
    
    // initialize storage pointer.
    temp = (struct node *)malloc(sizeof(struct node));

    // if we are at the first node then
    // return the list.
    if(head->link == NULL){
        return;
    }

    // else we loop through the list.

}

//-------------------//

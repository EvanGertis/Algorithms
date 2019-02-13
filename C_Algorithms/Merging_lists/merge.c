#include "stdlib.h"
#include "stdio.h"

// node for list.
struct node
{
    int info;
    struct node *link;
};

//-function defitions-//

void createList(struct node *head);
void insertInOrder(struct node *head, int data);
void displayList(struct node *head);
//-------------------//

// initial entry point for the program.
int main()
{

    // declare head pointer.
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    // set the head to null.
    head->info = 0;
    head->link = NULL;

    createList(head);
    displayList(head);

    return 0;
}

//-function implementations-//

void createList(struct node *head)
{

    // declare locals
    int n, data;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    // get the number of nodes
    printf("Please enter the number of nodes that you would like to insert: ");
    scanf("%d", &n);

    // get the data for each node.
    for (int i = 0; i < n; i++)
    {
        printf("Enter the data that you would like to insert at %d: ", i);
        scanf("%d", &data);
        insertInOrder(head, data);
    }
}

void insertInOrder(struct node *head, int data)
{
    // declare local variables.
    // need a pointer to loop and a pointer to insert.
    struct node *p, *temp;

    // initialize storage pointer.
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;

    if(head->link == NULL || data < head->info){
        temp->link = head->link;
        head->link = temp;
    }
    else
    {
        // else we loop through the list.
        p = head;
        while (p->link != NULL && p->link->info < data)
        {

            p = p->link;
        }

        temp->link = p->link;
        p->link = temp;
    }
    

}

void displayList(struct node *head)
{
    // declare local variables.
    struct node *p;
    printf("\n should display list \n");
    // gaurd if it's an empty list.
    if (head->link == NULL)
    {
        return;
    }

    p = head;
    while (p != NULL)
    {

        // display the value stored in the node.
        printf("%d | ", p->info);
        p = p->link;
    }
}

//-------------------//

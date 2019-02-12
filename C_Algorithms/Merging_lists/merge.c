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

    // set the head to null.
    head = NULL;

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

        // insert in beginning;
        if (head == NULL || data <= head->info)
        {
            temp->link = head->link;
            head = temp;
            return;
        }

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

    printf("data: %d", data);

    // else we loop through the list.
    p = head;
    while (p != NULL && p->link->info <= data)
    {
        p = p->link;
    }

    temp->link = p->link;
    p = temp;
    return;
}

void displayList(struct node *head)
{
    // declare local variables.
    struct node *p;

    // gaurd if it's an empty list.
    if (head == NULL)
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

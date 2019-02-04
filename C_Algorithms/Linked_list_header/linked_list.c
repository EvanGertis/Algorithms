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
void insertAtPosition(struct node *head, int data);
void deleteNode(struct node *head, int data);
void reverse(struct node *head);

int main()
{
    int choice, data, x, k;
    struct node *head;

    head = (struct node *)malloc(sizeof(struct node));
    head->info = 0;
    head->link = NULL;

    createList(head);

    while (1)
    {
        printf("1. Display list\n");
        printf("2. Insert a node at the end of the list\n");
        printf("3. Insert a new node before a node\n");
        printf("4. Insert at a given position\n");
        printf("5. Delete a node\n");
        printf("6. Reverse the list\n");
        printf("7. Quit\n\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            displayList(head);
            break;
        case 2:
            printf("What do you want to insert at the end of list? ");
            scanf("%d", &data);
            insertAtEnd(head, data);
            break;
        case 3:
            printf("What node do you want to insert the data before? ");
            scanf("%d", &x);
            printf("What data do you want to insert? ");
            scanf("%d", &data);
            insertBefore(head, data, x);
            break;

        case 7:
            return 0;
            break;

        default:
            break;
        }
    };

    return 0;
}

void createList(struct node *head)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = 1;
    temp->link = head->link;
    head->link = temp;
}

void displayList(struct node *head)
{
    struct node *p;

    p = head;
    while (p != NULL)
    {
        printf("%d ", p->info);
        p = p->link;
    }
    printf("\n");
}

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

void insertBefore(struct node *head, int data, int x)
{
    struct node *p;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;

    //counter variable to keep track of node position.
    //starts at zero because we have to include the head node.
    int count = -1;
    p = head;

    while (p->link != NULL)
    {

        if (x == 0)
            return;

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

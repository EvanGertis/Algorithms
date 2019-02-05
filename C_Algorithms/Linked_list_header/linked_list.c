#include "linked_list.h"

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

        case 4:
            printf("Enter the data value that you want to insert data the data after ");
            scanf("%d", &x);
            printf("Enter the data that you wish to insert ");
            scanf("%d", &data);            
            insertAtPosition(head, data, x);
            break;
        
        case 5:
            printf("Enter the data of the node that you want to delete ");
            scanf("%d", &data);
            deleteNode(head, data);
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

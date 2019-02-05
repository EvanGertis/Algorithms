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
        printf("2. Quit\n\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            displayList(head);
            break;

        case 2:
            return 0;
            break;

        default:
            break;
        }
    };

    return 0;
}

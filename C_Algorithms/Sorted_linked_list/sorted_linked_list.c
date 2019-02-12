#include "sorted_linked_list.h"


__declspec(dllexport) int __stdcall main()
{
    int choice, data, x, k;
    struct node *head;

    head = (struct node *)malloc(sizeof(struct node));
    head->info = 0;
    head->link = NULL;

    createOrderedList(head);

    while (1)
    {
        printf("1. Display list\n");
        printf("2. Insert between nodes.\n");
        printf("3. Quit\n\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            displayList(head);
            break;
        case 2:
            printf("Enter the data that you want to insert: ");
            scanf("%d", &data);
            printf("Enter the position that you want to insert the node: ");
            scanf("%d", &x);
            insertBetween(head, data, x);
            break;

        case 3:
            return 0;
            break;

        default:
            break;
        }
    };

    return 0;
}
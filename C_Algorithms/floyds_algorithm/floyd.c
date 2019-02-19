#include "floyd.h"


int main(){

    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->info = 0;
    head->link = NULL;

    createList(head);
    displayList(head);

    return 0;
}
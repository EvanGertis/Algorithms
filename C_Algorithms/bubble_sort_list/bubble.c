#include "bubble.h"


// main entry point.
int main(){
    struct node * head;
    head = (struct node *)malloc(sizeof(struct node));
    head->info = 0;
    head->link = NULL;

    struct node *start;
    start = NULL; 

    createList(head);
    sortByExchangingData(head);
    displayList(head);

    createList(head);
    start = sortByExchangingLinks(head->link);
    displayList(head);

    return 0;
}


#include "bubble.h"


void sortByExchangingData(struct node *start);

// main entry point.
int main(){
    struct node * head;
    head = (struct node *)malloc(sizeof(struct node));
    head->info = 0;
    head->link = NULL;

    createList(head);
    sortByExchangingData(head);
    displayList(head);

    return 0;
}

void sortByExchangingData(struct node *start){
    struct node *end, *p, *q;
    int temp;

    for(end = NULL; end != start->link; end = p){
        for(p = start; p->link!=end; p = p->link){
            q = p->link;
            if(p->info > q->info){
                temp = p->info;
                p->info = q->info;
                q->info = temp;
            }
        }
    }

}
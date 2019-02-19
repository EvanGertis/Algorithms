#include "bubble.h"


void sortByExchangingData(struct node *start);
struct node *sortByExchangingLinks(struct node *start);

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

struct node  *sortByExchangingLinks(struct node *start){
    struct node *end, *r, *p, *q, *temp;
    
    for(end = NULL; end != start->link; end = p){
        for(r=p=start; p->link!=end; r = p, p=p->link){
            q = p->link;
            if(p->info > q->info){
                p->link = q->link;
                q->link = p;
                if(p!=start){
                    r->link = q;
                } else {
                    start = q;
                }
                temp = p;
                p = q;
                q = temp;
            }
        }
    }

    return start;
}
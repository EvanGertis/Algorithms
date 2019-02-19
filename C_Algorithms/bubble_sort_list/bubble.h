#include "stdlib.h"
#include "stdio.h"

struct node
{
    int info;
    struct node *link;
};

// function definitions.
void createList(struct node *head);
void insertAtEnd(struct node *head, int data);
void displayList(struct node *head);
void sortByExchangingData(struct node *start);
struct node *sortByExchangingLinks(struct node *start);



void createList(struct node *head)
{
    int n, data;

    // prompts.
    printf("Enter the number of nodes that you would like insert ");
    scanf("%d", &n);

    // guard.
    if(n == 0){
        return;
    }

    // get the data for the nodes.
    for(int i = 0; i < n; i++){
        
        printf("Enter the data that you would like to store at node %d :", i);
        scanf("%d", &data);
        insertAtEnd(head, data);

    }

}

// inserts a node after the header node.
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

// loops through the list and shows the value at each node.
void displayList(struct node *head)
{
    struct node *p;

    p = head->link;
    while (p != NULL)
    {
        printf("%d ", p->info);
        p = p->link;
    }
    printf("\n");
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
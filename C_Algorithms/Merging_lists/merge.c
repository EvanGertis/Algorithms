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
struct node * mergeList(struct node *listOne, struct node *listTwo);
//-------------------//

// initial entry point for the program.
int main()
{

    // declare listOne pointer.
    struct node *listOne;
    listOne = (struct node *)malloc(sizeof(struct node));
    // set the list head to null.
    listOne->info = 0;
    listOne->link = NULL;

    // declare listTwo pointer.
    struct node *listTwo;
    listTwo = (struct node *)malloc(sizeof(struct node));
    // set the list head to null.
    listTwo->info = 0;
    listTwo->link = NULL;

    // declare merge list pointer.
    struct node *startM;

    // generate lists
    createList(listOne);
    displayList(listOne);
    
    printf("\n");

    createList(listTwo);
    displayList(listTwo);

    printf("\n");

    startM = mergeList(listOne->link, listTwo->link);
    displayList(startM);

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

    if(head->link == NULL || data < head->info){

        // inserts a temp node at the beginning of the list.
        temp->link = head->link;
        head->link = temp;
    }
    else
    {
        // else we loop through the list.
        p = head;
        while (p->link != NULL && p->link->info < data)
        {

            p = p->link;
        }
        
        // inserts a temp node at the end of the list. 
        temp->link = p->link;
        p->link = temp;
    }
    

}

void displayList(struct node *head)
{
    // declare local variables.
    struct node *p;
    // gaurd if it's an empty list.
    if (head->link == NULL)
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

struct node * mergeList(struct node * listOne, struct node * listTwo){

    struct node *temp, *pM, *startM;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->link = NULL;
    startM = temp;

    if(listOne->info <= listTwo->info){
        temp->info = listOne->info;
        listOne = listOne->link;
    }
    else{
        temp->info = listTwo->info;
        listTwo = listTwo->link;
    }

    pM = startM;
    while(listOne != NULL && listTwo != NULL){

        temp = (struct node *)malloc(sizeof(struct node));
        if(listOne->info <= listTwo->info){
            temp->info = listOne->info;
            listOne = listOne->link;
        }
        else{
            temp->info = listTwo->info;
            listTwo = listTwo->link;
        }
        temp->link = NULL;
        pM->link = temp;
        pM = temp;
    }

    while(listOne != NULL){
        temp = (struct node *)malloc(sizeof(struct node));
        temp->info = listOne->info;
        temp->link = NULL;
        pM->link = temp;
        pM = temp;
        listOne = listOne->link;
    }
    
    while(listTwo != NULL){
        temp = (struct node *)malloc(sizeof(struct node));
        temp->info = listTwo->info;
        temp->link = NULL;
        pM->link = temp;
        pM = temp;
        listTwo = listTwo->link;
    }
      
    return startM;    
}

//-------------------//

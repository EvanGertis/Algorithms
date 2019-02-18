#include "merge.h"

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

    startM = merge(listOne->link, listTwo->link);
    displayList(startM);

    return 0;
}



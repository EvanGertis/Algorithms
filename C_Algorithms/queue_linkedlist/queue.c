#include "stdlib.h"
#include "stdio.h"

struct node{
    struct node *link;
    int info;
};

struct node *front, *rear;

//Begin definitions.
void initializeQueue();
int isEmpty();
int size();
void insert(int x);
int Delete();
int peek();
void display();
//End definitions.

int main(){

    int choice, x;

    //Set the front and rear pointers.
    initializeQueue();

    //UI loop.
    while(1){
        printf("1.Insert an element into the queue.\n");
        printf("2.Delete an element from the queue.\n");
        printf("3.Peek the queue.\n");
        printf("4.Display all.\n");
        printf("5.Display size.\n");
        printf("6.Quit.\n");

        //get selection.
        scanf("%d", &choice);

        if(choice == 6){
            break;
        }

        //process selection.
        switch (choice)
        {
            case 1:
                printf("Please enter the value that you would like to insert\n");
                scanf("%d", &x);
                insert(x);
                break;
            case 2:
                printf("%d delete from the queue\n", Delete());
                break;
        
            case 3:
                peek();
                break;
        
            case 4:
                display();
                break;
        
            case 5:
                printf("The size of the queue is %d", size());
                break;
        
            default:
                break;
        }
    }


    return 0;
}

//Begin implementations.

//This function simply sets the front
//and rear pointer of the quueue to NULL.
//BEGIN initializeQueue.
void initializeQueue(){
    front = NULL;
    rear = NULL;
}
//END initializeQueue.

//BEGIN  isEmpty.
int isEmpty(){
    if(front == NULL){
        return 1;
    } else {
        return 0;
    }
}
//END isEmpty.

//BEGIN size.
int size(){
    struct node *p;
    int c = 0;

    if(isEmpty()){
        printf("List is empty\n");
        return 0;
    }
    
    p = front;
    while(p != NULL){
        c++;
        p= p->link;
    }

    return c;
}
//END size.

//BEGIN insert.
void insert(int x){
    struct node *p, *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    //gaurd.
    if(temp == NULL){
        printf("memory not avail");
        return;
    }

    temp->info = x;
    temp->link = NULL;

    if(front == NULL){
        front = temp;
    }
    else {
        rear->link = temp;
    }
    rear = temp;
}
//END insert.

//BEGIN Delete.
int Delete(){
    struct node *temp;
    int x;
    if(isEmpty()){
        printf("list is empty\n");
        exit(1);
    }
    temp = front;
    x= temp->info;
    front= front->link;
    free(temp);
    return x;
}
//END Delete.

//BEGIN peek.
int peek(){
    if(isEmpty()){
        printf("list is empty\n");
        exit(1);
    }

    return front->info;
}
//END peek.

//BEGIN 
void display(){
    struct node *p;
    
    if(isEmpty()){
        printf("list is empty\n");
        return;
    }

    p = front;
    while(p != NULL){
        printf("|%d| ", p->info);
        p= p->link;
    }
    printf("\n");

}
//END
//End implementations.

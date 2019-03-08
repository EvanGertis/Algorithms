/*
File Name: stack.c
Purpose : To implement a stack using linked list.
Date : 03/08/2019
Author :  Evan Gertis
*/

#include "stack.h" 

int main(){
    //locals.
    int choice, x;
    initializeStack();

    //interface.
    while(1){
        printf("1.Push an element on the stack\n");
        printf("2.Pop and element from the stack\n");
        printf("3.Display the top element\n");
        printf("4.Display all stack elements\n");
        printf("5.Display the size of the stack\n");
        printf("6. Quit\n");
        printf("Enter you choice :\n");
        scanf("%d", &choice);
        
        //exit.
        if(choice == 6){
            break;
        }

        //parse the selection.
        switch (choice)
        {
            case 1:
                printf("Please enter the number that you want to push \n");
                scanf("%d", &x);
                push(x);
                break;
        
            case 2:
                printf("The element popped off was %d \n", pop());
                break;
        
            case 3:
                peek();
                break;
        
            case 4:
                display();
                break;
        
            case 5:
                printf("The size is %d \n", size());
                break;
            
            default:
                break;
        }
    }
    return 0;
}


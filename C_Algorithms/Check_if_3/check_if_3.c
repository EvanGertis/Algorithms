#include "stdio.h"
#include "stdlib.h"
#include "check_if_3.h"


int main()
{
    // struct object that could be modified for tests. 
    struct Test test;

    // user prompt.
    printf("Please enter a number that you would like to test:");

    scanf("%d", &test.num);

    // check the user input. 
    int check = check3(test.num);

    if (check)
    {
        printf("The number that you've entered is a multiple of three.");
    }
    else
    {
        printf("The number that you've entered is not multiple of three");
    }

    return 0;
}
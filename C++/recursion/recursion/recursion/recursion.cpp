// recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void tail(int n) {
	if (n == 0) return;

	printf("Tail function called with n= %d \n", n);
	
	// call the function recursively, the stack will not store the previous calls.
	tail(n - 1);
}

int main()
{
	tail(3);
}

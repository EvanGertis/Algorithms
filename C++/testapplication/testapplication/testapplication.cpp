// testapplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	Rec rec;

	int sum = rec.sumN(4);
	
	// 1, 1, 2, 3, 5, 8
	int n = 6;
	int fn = rec.fib(n);
	int nFac = rec.fac(n);

	std::printf("The sum is %d \n", sum);
	std::printf("The %d th fibonacci number is: %d \n", n, fn);
	std::printf("%d! is: %d\n", n, nFac);

	//binary search testing.
	std::printf("\n************************\n");
	int nums[] = { 1, 2,3, 4, 5, 6 };
	
	// display elements.
	int size = sizeof(nums) / sizeof(nums[0]);
	for (int i = 0; i < size; i++)
	{
		std::printf("%d | ", nums[i]);
	}

	// new line.
	printf("\n");

	int result = rec.binarySearch(nums, nums[0], nums[size - 1], 4);

	printf("result from binary search: %d", result);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

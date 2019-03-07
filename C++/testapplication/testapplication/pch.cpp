// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"
#include <iostream>

// returns the sum of 1 to n.
int Rec::sumN(int n)
{
	if (n == 1) { 
		return 1; 
	}

	return n + sumN(n - 1);
}

// returns nth fibonacci number.
int Rec::fib(int n) {
	
	if (n <= 0 ) {
		return 1;
	}

	return fib(n-1) + fib(n -2);
}

// returns nth factorial.
int Rec::fac(int n)
{
	if (n == 1)
		return 1;
	
	int m = fac(n - 1);

	return n*m;
}


int Rec::binarySearch(int nums[], int low, int high, int num)
{	
	//base case.
	if (low > high) {
		return -1;
	}

	int middle = low + (high - low) / 2;

	// if our number is the middle index.
	if (nums[middle] == num) {
		return nums[middle];
	}

	if (num < nums[middle]) {
		return binarySearch(nums, low, middle - 1, num);
	}
	else {
		return binarySearch(nums, middle + 1, high, num);
	}


	return 0;
}

//solve the towers of hanoi implementation.
void Rec::solveTowerHanoi(int n, char rodFrom, char middleRod, char rodTo) {
	
	if (n == 1) {
		std::cout << "moving 1 from " << rodFrom << " to " << rodTo << std::endl;
		return;
	}

	solveTowerHanoi(n - 1, rodFrom, rodTo, middleRod);
	std::cout << "plate " << n << " from " << rodFrom << " to " << middleRod << std::endl;
	solveTowerHanoi(n - 1, rodFrom, middleRod, rodTo);

}





// default constructor.
Rec::Rec()
{
}

// default deconstructor.
Rec::~Rec()
{
}
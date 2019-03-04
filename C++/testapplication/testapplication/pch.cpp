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



// default constructor.
Rec::Rec()
{
}

// default deconstructor.
Rec::~Rec()
{
}
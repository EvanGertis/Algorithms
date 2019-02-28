// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"
#include <iostream>

int Rec::sumN(int n)
{
	if (n == 1) { 
		return 1; 
	}

	return n + sumN(n - 1);
}

int Rec::fib(int n) {
	
	if (n <= 0 ) {
		return 1;
	}

	return fib(n-1) + fib(n -2);
}

Rec::Rec()
{
}

Rec::~Rec()
{
}
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

Rec::Rec()
{
}

Rec::~Rec()
{
}
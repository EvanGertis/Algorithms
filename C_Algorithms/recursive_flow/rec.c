/*
File Name: rec.c
Author: Evan Gertis
Purpose: Show examples of recursive function flow.
Date: 04/02/2019
*/

#include "stdlib.h"
#include "stdio.h"
#include "math.h"

//************************************************
//************************************************
//************************************************
//Begin definitions.

//returns factorial.
int nFactorial(int n);

//returns sum from n to 1.
int nSumNtoOne(int n);

//returns the sum of digits.
int nSumOfDigits(int n);

//converts decimal into binary
void decimalToBinary(int n);

//returns n th power.
float nNthPower(float x, int n);

//returns the gcd for two numbers.
int nGCD(int a, int b);

//End definitions.
//************************************************
//************************************************
//************************************************


int main(){
    int nResult;
    nResult = nGCD(6, 12);

    printf("result: %d", nResult);


    return 0;
}

//************************************************
//************************************************
//************************************************
//Begin implementations.

//returns factorial.
int nFactorial(int n){

    //base case.
    if(n == 0){
        return 1;
    }

    return n * nFactorial(n - 1);

}

//returns sum from n to 1.
int nSumNtoOne(int n){
    //locals.
    int nSum;
    
    //base case.
    if(n == 1){
        printf("1 + ");
        return 1;
    }
    printf("%d + ", n);
    nSum = n + nSumNtoOne(n - 1);
    
    return nSum;
}

//returns sum of digits.
int nSumOfDigits(int n){
    if(n/10 == 0){
        return n;
    }

    return nSumOfDigits(n/10) + n%10;
}

//prints binary representation of decimal number.
void decimalToBinary(int n){

    //base case.
    if(n == 0){
        return;
    }

    decimalToBinary(n/2);
    printf("%d ", n % 2);
}

//returns nth power
float nNthPower(float x, int n){

    if(n == 0){
        return 1;
    }

    return x * nNthPower(x, n - 1);
}

//returns gcd.
int nGCD(int a, int b){
    
    //base case.
    if(b == 0){
        return a;
    }

    return nGCD(b, a%b);
}

//End implementations.
//************************************************
//************************************************
//************************************************

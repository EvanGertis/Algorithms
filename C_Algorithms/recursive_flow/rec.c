/*
File Name: rec.c
Author: Evan Gertis
Purpose: Show examples of recursive function flow.
Date: 04/02/2019
*/

#include "stdlib.h"
#include "stdio.h"

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

//End definitions.
//************************************************
//************************************************
//************************************************


int main(){
    int nResult;
    nResult = nSumOfDigits(123);

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

//End implementations.
//************************************************
//************************************************
//************************************************

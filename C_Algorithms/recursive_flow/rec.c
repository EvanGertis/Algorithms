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

//converts decimal into binary
void decimalToBinary(int n);

//End definitions.
//************************************************
//************************************************
//************************************************


int main(){
    // int nResult;
    // nResult = nSumOfDigits(123);

    // printf("result: %d", nResult);

    for(int i = 0; i < 15; i++){

        decimalToBinary(i);
        printf("\n");
    }

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

//End implementations.
//************************************************
//************************************************
//************************************************

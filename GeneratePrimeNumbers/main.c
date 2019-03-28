#include <stdio.h>
#include <stdlib.h>

/*******************************************
* Name:     Balwinder Singh
* Purpose:  Program that calculates and displays prime numbers
*******************************************/


int main()
{
    /*Variable Declarations*/
    int primes[100] = {2,3}; //Holds prime numbers
    int arrayIndexer = 2; //Tracks the next index that is free in Primes Array (above)

    /*Identify Prime Number Definition*/
    for(int i = 4; i < 100; i++)
    {
        /*Check if even number*/
        if((i % 2) == 0) //If current loop index is even
        {
            continue; //Go to next loop cycle
        }

    }


    /*Output Primes array*/
    return 0;
}

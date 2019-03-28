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
    int arrayIndexer = 2; //Tracks the next index that is free and ready to be used in Primes Array (above)
    int isPrime = 1;


    /*Identify Prime Numbers*/
    //Iterate through odd numbers as even values will not be primes
    for(int i = 3; i < 100; i = i + 2)
    {
        //Reset isPrime boolean for every next value we will test against
        isPrime = 1;

        //Access all elements in primes array
        for(int j = 0; j < arrayIndexer; j++)
        {
            //If the current value from outer loop is evenly divisible (value is not a prime number)
            if((i % primes[j]) == 0)
            {
                //Set boolean to false and escape inner loop
                isPrime = 0;
                break;
            }
        }

        //If the current value is a prime number
        if(isPrime == 1)
        {
            //Store current value in primes array
            primes[arrayIndexer] = i;

            //Increment arrayIndexer for next loop iteration
            arrayIndexer++;
        }

    }


    /*Output Primes array*/
    for(int i = 0; i < arrayIndexer; i++)
    {
        printf("%d  ",primes[i]);
    }

    return 0;
}

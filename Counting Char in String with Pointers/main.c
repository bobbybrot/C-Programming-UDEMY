#include <stdio.h>
#include <stdlib.h>

/***************************************
* Name:     Balwinder Singh
* Purpose:  Program that tests my understanding of pointer
*           arithmetric and const modifier
***************************************/

/*
* Function Prototypes
*/

//Function which manually calculates length of a string
//and returns number of characters present in string
//using only pointer arithmetric
int stringFunction(const char *);

int main()
{
    /*
    * Variable declarations
    */
    printf("%d\n", stringFunction("stringLength test"));
    printf("%d\n", stringFunction(""));
    printf("%d\n", stringFunction("Jason"));

    return 0;
}

int stringFunction(const char *startString)
{
    /*
    * Variable Declarations
    */
    const char *endPointer = startString;

    /*
    * Find last element and record its memory address
    */
    //null terminator is 0 in int, while loop run until 0
    //This function will iterate each element of string
    //Until we reach null terminator, where it will record
    //the memory address to last pointer.
    while(*endPointer)
    {
        //Navigate to next memory location in string sequence
        endPointer++;
    }

    return endPointer - startString;
}

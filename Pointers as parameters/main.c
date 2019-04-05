#include <stdio.h>
#include <stdlib.h>

/**********************************
* Name:     Balwinder Singh
* Purpose:  Program that tests my understanding of passing
*           data by reference to functions
**********************************/

/*
* Function Prototypes
*/

void squareFunction(int *);

int main()
{

    int intTest = 5;

    printf("Variable before squared: %d\n", intTest);

    squareFunction(&intTest);

    printf("Variable after squared: %d", intTest);

    return 0;
}

void squareFunction(int *input)
{
    *input *= *input;
}

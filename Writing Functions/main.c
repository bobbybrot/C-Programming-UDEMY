#include <stdio.h>
#include <stdlib.h>

/*****************************
* Name:     Balwinder Singh
* Purpose:  Get familiar with C functions and understand it's
*           advantages
*****************************/

/*Function Prototypes*/
float gcd(int, int); //Calculate greatest Common divisor
float absVal(float); //Calculates Absolute Value of number
float squareRoot(float); //Compute square root of a number


int main()
{
    /*Variable Declarations*/
    int inputOne, inputTwo;
    float GCD;

    /*User Input Handler*/
    printf("Input 2 values: \n");
    scanf("%d %d", &inputOne, &inputTwo);

    /*Function Calls*/
    GCD = gcd(inputOne, inputTwo);
    printf("\n\nGCD = %.2f",GCD);

    return 0;
}

/*Function Definitions*/
float gcd(int inputOne, int inputTwo)
{
    /*Variable Declarations*/
    int GCD = 0;
    int inputOneR; //Holds remainder
    int inputTwoR; //Holds remainder
    int lowestValue;


    /*Find Greatest Common Divisor*/
    //Tenary if statement that records lowest value from user input
    lowestValue = inputOne < inputTwo ? inputOne : inputTwo;

    for(int i = 1; i < lowestValue; i++)
    {
        inputOneR = inputOne % i;
        inputTwoR = inputTwo % i;

        if(inputOneR == 0 && inputTwoR == 0)
        {
            GCD = i;
        }

    }

    return GCD;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
    float squareRInput, squareRResult;
    float GCD;

    /*User Input Handler for GCD*/
//    printf("Input 2 values: \n");
//    scanf("%d %d", &inputOne, &inputTwo);

    /*Greater Common Divisor*/
//    GCD = gcd(inputOne, inputTwo);
//    printf("\nGCD = %.2f",GCD);


    /*Square Root*/
    printf("\n\nPlease input value to find Square Root for: ");
    scanf("%f",&squareRInput);
    squareRResult =squareRoot(squareRInput);
    printf("\nSquare Root Result: %f",squareRResult);

    return 0;
}

/*Function Definitions*/
float squareRoot(float input)
{
    /*Variable Declarations*/
    float   squareR;
    float   temp = 1; //Aid with square root calculation
    int     unitsChecker = 0; //0 = unit, 1 = uniths, 2 = tenths
    bool    squareRFound = false;


    //Get Absolute Value from helper function
    float absInput = absVal(input);

    /*Square root calculation accurate to 2 decimal places*/
    while(!squareRFound)
    {
        temp = squareR * squareR; //Calculate squared of value

        if(temp == absInput) //If value of temp matches target value
        {
            squareRFound = true;
        }
        else if (temp < absInput) //If less than value
        {
            if(unitsChecker == 0)
                squareR++; //Increment temp normally
            else if(unitsChecker == 1)
                squareR = squareR + .1; //Increment uniths part
            else if(unitsChecker == 2)
                squareR = squareR + .01; //Increment tenths part
        }
        else if (temp > absInput) //If target value is not evenly squared
        {
            if(unitsChecker == 0)
            {
                unitsChecker++;
                squareR--;
            }
            else if(unitsChecker == 1)
            {
                unitsChecker++;
                squareR = squareR - .1;
            }
            else if(unitsChecker == 2)
            {
                squareRFound = true;
                squareR -= .01;
            }
        }
    }

    return squareR;
}


float absVal(float value)
{
    return abs(value);
}


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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/***************************
* Name:     Balwinder Singh
* Purpose:  Test my ability to use common string functions
*           to perform certain tasks
***************************/

/*
* Function Prototypes
*/
//Challenge 1: Prints a string in reverse order
void reverseString();

//Challenge 2: Sort array
void arrayBubbleSort();


int main()
{

    //reverseString();
    arrayBubbleSort();
    return 0;
}

/*
*Function Definitions
*/

void arrayBubbleSort()
{
    /*
    * Variable Declarations
    */
    int noOfStrings;
    int **stringArray;

    /*
    * User input handler
    */
    printf("Input number of strings: ");
    scanf("%d",&noOfStrings);

    /*
    * STOPED HERE BECAUSE UNSURE OF WHAT TO DO
    */


}

void reverseString()
{
    /*
    * Variable Definitions
    */
    char input[100];

    /*
    * User input handler
    */
    printf("Input < 100 characters: ");
    scanf("%[^\n]s",input); //Reads until newline char encountered

    /*
    * Reverse Order Algorithm
    */

    //Print out original input
    printf("User Output: %s\nReverse: ",input);

    for(int i = strlen(input); i >= 0; --i)
    {
        printf("%c",input[i]);
    }
}

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
//Prints a string in reverse order
void reverseString();


void arrayBubbleSort();


int main()
{
    reverseString();
    return 0;
}

/*
*Function Definitions
*/
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

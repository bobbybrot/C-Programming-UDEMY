#include <stdio.h>
#include <stdlib.h>
/******************************
* Name:     Balwinder Singh
* Purpose:  Program that tests my understanding of using dynamic
            memory allocation (Malloc) and pointers
******************************/

int main()
{
    /*
    * Variable Declarations
    */
    int stringLength = 0;
    char* stringPtr = NULL;

    /*
    * User Input handler
    */
    printf("How long is string: ");
    scanf("%d",&stringLength);

    /*
    *Allocate memory from Heap and store user input in memory
    */
    stringPtr = (char *) malloc(stringLength * sizeof(char));
    if(!stringPtr) //If memory could not be allocated
    {
        printf("!!!! MEMORY COULD NOT BE ALLOCATED !!!!");
        exit(1); //Exit immediately
    }

    //Retrieve input from user
    scanf("%s[^\n]",stringPtr);

    //Output string to user
    printf("\nString output: %s",stringPtr);

    /*
    * Release pointer
    */
    free(stringPtr);
    stringPtr = NULL;

    return 0;
}

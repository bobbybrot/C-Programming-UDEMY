#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/****************************
* Name:     Balwinder Singh
* Purpose:  Program to get me familiar with pointers in C
****************************/


int main()
{
    /*
    * Variable Declarations
    */
    int *ptr = NULL;
    int intVariable = 50;

    //Assign address of int variable to pointer
    ptr = &intVariable;


    //Print out address of pointer, value of pointer, value
    //of what pointer is pointing too
    printf("Address of Pointer: %p\nValue of Pointer: %p\nValue being pointed at by pointer: %d\nLocal Variable address %p"
           ,&ptr,ptr,*ptr, &intVariable);

    return 0;
}

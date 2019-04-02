#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/***********************************
* Name:     Balwinder Singh
* Purpose:  Program that tests my understanding of Char Arrays
***********************************/

/*Function Prototypes*/
//Counts the number of strings in an array
int arrayLength(char []);

//Concatenates two arrays of type char into one
void arrayConcatenate(char[],char[],char[]);

//Checks whether passed in strings are equal
bool arrayEqual(char[],char[]);

int main()
{
    /*
    * Variable Declarations
    */
    char arr1[] = {"This is a test"};
    char arr2[] = {"Which has succeeded successfully"};

    char notEqual1[] = {"I am true"};
    char notEqual2[] = {"I am false"};
    char equal1[] = {"We are Equal"};
    char equal2[] = {"We are Equal"};

    char result[100];
    int counter;

    /*
    * Code that obtains length of arr1
    */
    counter = arrayLength(arr1);
    printf("Length of /'%s/' is: %d\n\n",arr1,counter);

    /*
    * Code that concatenates 2 arrays
    */
    arrayConcatenate(result, arr1, arr2);
    printf("%s\n\n",result);


    /*
    * Code that compares 2 strings to see if equal
    */
    printf("%s\n\n",arrayEqual(notEqual1, notEqual2) ? "true" : "false");
    printf("%s",arrayEqual(equal1, equal2) ? "true" : "false");

    return 0;
}

/*Function Definitions*/

bool arrayEqual(char arr1[],char arr2[])
{
    for(int i = 0; arr1[i] != '\0'; ++i)
    {
        if(arr1[i] != arr2[i])
        {
            return false;
        }
    }

    return true;
}

void arrayConcatenate(char result[], char arr1[], char arr2[])
{
    /*
    * Variable Declarations
    */
    int i;

    for(i = 0; arr1[i] != '\0' ; ++i)
    {
        result[i] = arr1[i];
    }

    //Create a space between the 2 string using Anscii value for
    //spaces
    result[i] = 32;
    ++i;

    for(int j = 0; arr2[j] != '\0'; ++j, ++i)
    {
        result[i] = arr2[j];
    }

    //Put terminator character at the end of data
    result[i] = '\0';

}

int arrayLength(char arr[])
{
    /*
    * Variable declarations
    */
    int counter = 0;

    /*
    * Loop to count how long an element is
    */
    for(int i = 0; arr[i] != '\0'; ++i)
    {
        ++counter;
    }

    return counter;
}

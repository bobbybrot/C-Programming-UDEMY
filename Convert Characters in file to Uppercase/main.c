#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*****************************
* Name:     Balwinder Singh
* Purpose:  Convert char in file from lowercase to uppercase
*           into temp file, then replace old file with temp file
*****************************/


int main()
{
    char c;
    FILE *original = NULL;
    FILE *temp = NULL;

    //Open files
    original = fopen("original.txt","r");
    temp = fopen("temp.txt","w+");

    //Check that files have been opened successfully
    if(original == NULL || temp == NULL)
    {
        printf("FILE FAILED TO BE LOADED");
        return -1;
    }

    while((c = fgetc(original)) != -1)
    {
        //Print contents from original file
        printf("%c",c);

        //If character is lowercase
        if(islower(c))
        {
            //Get uppercase character from Ascii table
            c = c - 32;

            //Write converted character to temp file
            fputc(c,temp);
        }
        else
        {
            //Write to temp file
            fputc(c,temp);
        }
    }

    //Close files
    fclose(original);
    fclose(temp);

    //Remove original file and rename temp file to be original file
    remove("original.txt");
    rename("temp.txt","original.txt");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/******************************
* Name:     Balwinder Singh
* Purpose:  Program that finds number of lines in a created file
******************************/


int main()
{
    FILE *file;
    char c;
    int counter = 0;

    //Open File to read only
    file = fopen("file.txt","r+");
    if(file == NULL) //Check that file opened successfully
    {
        printf("ERROR FILE DOES NOT EXIST");
        return(-1);
    }

    //Read character until not equal to EOF (End of File)
    while((c = fgetc(file)) != -1)
    {
        //If it is a line feed (next line)
        //Increment counter
        if(c == '\n')
        {
            counter++;
        }
    }
    counter++; //Increment when EOF to account for last line

    //Close file
    fclose(file);
    file = NULL;

    //Output total number of lines
    printf("Total Lines: %d",counter);

    return 0;
}

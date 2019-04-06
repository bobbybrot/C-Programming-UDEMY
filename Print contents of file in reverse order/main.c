#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/*****************************
* Name:     Balwinder Singh
* Purpose:  Print contents from a file in reverse order
*****************************/


int main()
{
    FILE *file = NULL;
    char c;
    int len;

    //Open file and check if opened successfully
    file = fopen("file.txt","r");
    if(file == NULL)
    {
        printf("ERROR, UNABLE TO OPEN FILE");
        return -1;
    }

    //Point to end of file
    fseek(file, 0, SEEK_END);

    //Get current position of file pointer in bytes
    //So we have total no of bytes between beginning and end
    len = ftell(file);

    //While Len is above or equal 0
    while(len >= 0)
    {
        //Navigate to position from beginning, offset by
        //len
        fseek(file,len,SEEK_SET);

        //Get character from current file position
        c = getc(file);

        //Print out character to screen
        printf("%c",c);

        //Decrement and repeat process
        len--;
    }

    //Close file
    fclose(file);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*********************************
* Name:     Balwinder Singh
* Purpose:  Tic Tac Toe game, 2 player
*********************************/

/*Define Statements*/
#define BOARDSIZE 9

/*Function Declarations*/
void drawDisplay(char[]); //Clear and draw board status to console window

int main()
{
    /*Variable declarations*/

    //Declare boardArray with N characters to represent empty pieces
    char boardArray[BOARDSIZE] = {'n','n','n','n','n','n','n','n','n'}; //Holds player entries


    /*Function calls*/
    drawDisplay(boardArray);

    return 0;
}


void drawDisplay(char boardArray[])
{
    //Clear screen before proceeding
    system("cls");

    /*Variable Declarations*/

    int arrayCounter = 0;

    /*Print grid to display*/

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%c\t", boardArray[arrayCounter]);
            arrayCounter++;
        }

        printf("\n\n");
    }

}

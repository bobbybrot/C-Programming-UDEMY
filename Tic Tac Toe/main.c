#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*********************************
* Name:     Balwinder Singh
* Purpose:  Tic Tac Toe game, 2 player
*********************************/

/*Define Statements*/
#define BOARDSIZE 9

/*Function Prototype*/
//Redraws output to display
void drawDisplay(char[]);

void playerInputHandler(unsigned int, char[]);

int main()
{
    /*Variable declarations*/
    //Declare boardArray with + characters to represent empty pieces
    char boardArray[BOARDSIZE] = {'1','2','3','4','5','6','7','8','9'};

    //Bool that controls main game loop
    bool gameOver = false;

    //Counter that determine whose go it is
    //0 = Player1, 1 = Player2
    unsigned int playerTurn = 0;


    /*Main game loop*/
    while(!gameOver)
    {
        drawDisplay(boardArray);

        playerInputHandler(playerTurn, boardArray);

        //Bitwise operation to change who goes next
        playerTurn = abs(~playerTurn);

    }
    return 0;
}

/*Function Declarations*/

void playerInputHandler(unsigned int playerTurn,char boardArray[])
{
    /*Variable Declarations*/
    //Holds user input for where they would like to place their piece
    int piecePosition;

    /*Input Handler*/
    printf("Player %d, Input area to place your piece: ", playerTurn + 1);
    scanf("%d",&piecePosition);

    /*Place piece on board depending on whose turn it is*/
    //If player 1
    if(playerTurn == 0)
    {
        boardArray[piecePosition-1] = 'X';
    }
    else
    {
        boardArray[piecePosition-1] = 'O';
    }

}

void drawDisplay(char boardArray[])
{

    /*Variable Declarations*/
    int arrayCounter = 0;

    /*Clear screen*/
    system("cls");

    /*Print standard output to console window*/
    printf("Tic Tac Toe\n\nPlayer 1 (X)  -  Player 2 (O)\n\n");

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

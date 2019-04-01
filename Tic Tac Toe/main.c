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

//Handles user input (validated input) and
//updates board array to hold user's piece
void playerInputHandler(unsigned int, char[]);

//Helper function that checks user input is valid
int inputValidation(char[]);

//Function that checks whether a draw or win condition has been met
bool winCheck(char[], int);

int main()
{
    /*Variable declarations*/
    //Declare boardArray with + characters to represent empty pieces
    char boardArray[BOARDSIZE] = {'1','2','3','4','5','6','7','8','9'};

    //Bool that controls main loop
    bool gameOver = false;

    //Counter that determine whose go it is
    //0 = Player1, 1 = Player2
    bool playerTurn = 0;

    //Keeps track of how many times the game loop has repeated
    //Used to check whether a draw has been reached
    int tries = 0;

    /*Main game loop*/
    drawDisplay(boardArray);

    while(!gameOver && tries < 9)
    {
        //Request user input and update boardArray
        playerInputHandler(playerTurn, boardArray);

        //Clear and update console window
        drawDisplay(boardArray);

        //Check if player has won game
        gameOver = winCheck(boardArray, playerTurn);

        //Change player turn
        if(!gameOver)
            playerTurn = !playerTurn;

        //Increment tries as current player has used their turn
        tries++;

    }
    if(gameOver)
        printf("PLAYER %d WON :D",playerTurn + 1);
    else if(tries == 9)
        printf("DRAW :|");

    return 0;
}

/*Function Declarations*/

bool winCheck(char arr[], int playerTurn)
{
    //Check for X layer
    if(playerTurn == 0)
    {
        /*Diagonal check*/
        if(arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X')
            return true;
        else if(arr[0] == 'X' && arr[4] == 'X' && arr[8] == 'X')
            return true;
        else if(arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X')
            return true;
        else if(arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X')
            return true;

        /*Vertical & horizontal check*/
        if(arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X')
            return true;
        else if(arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X')
            return true;
        else if(arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X')
            return true;
        else if(arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X')
            return true;
    }
    else //Check for O layer
    {
        /*Diagonal check*/
        if(arr[3] == 'O' && arr[4] == 'O' && arr[5] == 'O')
            return true;
        else if(arr[0] == 'O' && arr[4] == 'O' && arr[8] == 'O')
            return true;
        else if(arr[1] == 'O' && arr[4] == 'O' && arr[7] == 'O')
            return true;
        else if(arr[2] == 'O' && arr[4] == 'O' && arr[6] == 'O')
            return true;

        /*Vertical & horizontal check*/
        if(arr[0] == 'O' && arr[1] == 'O' && arr[2] == 'O')
            return true;
        else if(arr[6] == 'O' && arr[7] == 'O' && arr[8] == 'O')
            return true;
        else if(arr[0] == 'O' && arr[3] == 'O' && arr[6] == 'O')
            return true;
        else if(arr[2] == 'O' && arr[5] == 'O' && arr[8] == 'O')
            return true;
    }

    //Return false if no one has won yet
    return false;
}

int inputValidation(char boardArray[])
{
    /*Variable Declarations*/
    int userInput;
    bool validValue = false;

    /*Input Validation Procecdure*/
    while(!validValue)
    {
        scanf("%d", &userInput);

        //First validation that checks that input is between
        //1 to 9
        if(userInput < 1 || userInput > 9)
        {
            printf("\nINVALID INPUT, TRY AGAIN (1 - 9): ");
        }
        else
        {
            //Second validation which checks that tile being selected
            //by user has not already been reserved
            if(boardArray[userInput-1] == 'X' || boardArray[userInput-1] == 'O')
            {
                printf("\nTILE TAKEN, TRY AGAIN:");
                validValue = false;
            }
            else
            {
                validValue = true;
            }
        }
    }

    return userInput;
}

void playerInputHandler(unsigned int playerTurn,char boardArray[])
{
    /*Variable Declarations*/
    //Holds user input for where they would like to place their piece
    int piecePosition;

    /*Input Handler*/
    printf("Player %d, Input area to place your piece: ", playerTurn + 1);
    piecePosition = inputValidation(boardArray);

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

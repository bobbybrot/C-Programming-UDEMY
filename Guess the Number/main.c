#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*************************************
* Name: Balwinder Singh
* Purpose: Program that runs a guessing game
*************************************/



int main()
{
    time_t t;
    int randomNumber;
    int userGuess;

    /*Generate random number*/
    //Initialise random number generator
    srand((unsigned)time(&t));

    //Get random number between 0 and 20
    randomNumber = rand() % 21;


    printf("This is a guessing game.\nI have chosen a number between 0 and 20 which you must guess.");

    /*Game Loop and input handlers*/
    for(int tries = 5; tries > 0; tries--)
    {
        printf("\n\nYou have %d tr%s left\n",tries, tries == 1 ? "y":"ies");
        printf("Enter a guess: ");
        scanf("%d", &userGuess);

        //If user guesses correctly
        if (userGuess < 0 || userGuess > 20)
        {
            printf("I said the number is between 0 and 20.");
        }
        else if(userGuess == randomNumber)
        {
            printf("\nCongratulations. You guessed it!");

            //Escape loop as user has guessed the correct value
            break;
        }
        else if(userGuess < randomNumber) //If user guess is less than target value
        {
            printf("Sorry, %d is wrong. My number is more than that.", userGuess);
        }
        else if(userGuess > randomNumber)
        {
            printf("Sorry, %d is wrong. My number is less than that", userGuess);
        }

    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/********************************
*  Author:  Balwinder Singh
* Purpose:  Program that tests my understanding of 2D
            arrays by calculating and displaying the
            yearly rainfall, and averages for year and
            month
********************************/

/*Defined Constants*/
#define YEARS 5
#define MONTHS 12

int main()
{
    /*Variable Declarations*/
    float rainFall[YEARS][MONTHS];
    float decVal = 0;
    time_t t;

    /*Initialise rainFall array*/
    srand((unsigned)time(&t));
    for(int i = 0; i < YEARS; i++)
    {
        for(int j = 0; j < MONTHS; j++)
        {
            //Generate random number
            rainFall[i][j] = rand() % (1000 - j);

            //Chance decimal number & assign to randomly
            //generated number
            if(j > 0)
            {
                decVal += 0.05;
            }
            rainFall[i][j] += decVal;

            printf("%.2f  ",rainFall[i][j]);
        }
        printf("\n");
    }



    return 0;
}

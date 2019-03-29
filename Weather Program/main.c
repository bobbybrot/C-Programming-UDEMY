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
    int yearCounter = 2010;
    time_t t;

    const char *monthNames[MONTHS] = {"Jan","Feb","Mar","Apr","Mar","Jun","Jul","Aug","Sept","Oct","Nov","Dec"};

    float totalYearRainfall[YEARS] = {0};
    float yearAverages = 0;
    float monthAverages[MONTHS] = {0};

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
        }
    }

    /*Calculation*/

    //Calculate total rainfall for each year
    for(int i = 0; i < YEARS; i++)
    {
        for(int j = 0; j < MONTHS; j++)
        {
            totalYearRainfall[i] += rainFall[i][j];
        }
    }

    //Calculate yearly average
    for(int i = 0; i < YEARS; i++)
    {
        //Add up total rainfall from each year
        yearAverages += totalYearRainfall[i];
    }
    //Divide by number of years to get average
    yearAverages /= YEARS;


    //Calculate monthly averages
    for(int i = 0; i < YEARS; i++)
    {
        for(int j = 0; j < MONTHS; j++)
        {
            //Add data for each month in each year
            monthAverages[j] += rainFall[i][j];
        }
    }

    for(int i = 0; i < MONTHS; i++)
    {
        //Once all data has been added
        //Divide each month by 25 days
        //to get average for each month
        monthAverages[i] /= 25;
    }


    /*Display results to screen*/
    //Display total rainfall for each year
    printf("Year \t\tRainfall\n");
    for(int i = 0; i < YEARS; i++)
    {
        printf("%d\t\t%.2f\n",yearCounter,totalYearRainfall[i]);
        yearCounter++;
    }
    printf("\n");

    //Display Yearly Average Rainfall
    printf("\nThe yearly average is %.2f inches\n",yearAverages);

    printf("\nMONTHLY AVERAGES:\n\n");

    //Print off month names to screen
    for(int i = 0; i < MONTHS; i++)
    {
        printf("%s    ",monthNames[i]);
    }
    printf("\n");

    //Print off month average data to screen
    for(int i = 0; i < MONTHS; i++)
    {
        printf("%.2f  ",monthAverages[i]);
    }
    printf("\n");

    return 0;
}

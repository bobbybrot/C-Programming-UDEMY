#include <stdio.h>
#include <stdlib.h>

/*********************************
Name:    Balwinder Singh
Purpose: Program that takes in user input (minutes)
         and converts into months and years
*********************************/

int main()
{
    /*Variable declarations*/
    int userMinutes;
    double minutesInYear;
    double years;
    double days;

    /*User Input handler*/
    printf("Input number of minutes: ");
    scanf("%d", &userMinutes);

    /*Conversion calculations*/
    minutesInYear = 60 * 24 * 365;
    years = userMinutes / minutesInYear;
    days = ((double)userMinutes / 60) / 24;

    /*Print calculations to Display*/
    printf("Days: %f\n", days);
    printf("Years: %f\n",years);

    return 0;
}

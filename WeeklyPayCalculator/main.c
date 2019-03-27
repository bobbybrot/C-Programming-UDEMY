#include <stdio.h>
#include <stdlib.h>

/*************************************
* Author:   Balwinder Singh
* Purpose:  Program that calculates weekly pay via Control Flow statements
* Date:     26/03/2019
*************************************/

/*Constant definitions*/
//DEFINES SHOULD ALL BE CAPITALS FOR READABILITY
#define bPayRate 12.00//Constant that stores basic pay rate value
#define oPayRate 18.00//Constant that stores overtime pay rate value

int main()
{
    /*Variable declarations*/
    float userWeeklyPay;
    float grossPay;
    float tax;
    float netPay;

    /*User Input handler*/
    printf("Input number of hours worked in a week: ");
    scanf("%f", &userWeeklyPay);


    /*Grosspay Calculation*/

    //If employee has worked overtime
    if(userWeeklyPay >= 40)
    {
        //Calculate basePay and overtime
        grossPay = (40 * bPayRate) + ((userWeeklyPay - 40) * oPayRate);
    }
    else //Else if employee has no overtime
    {
        grossPay = (userWeeklyPay * bPayRate);
    }

    /*Tax calculation*/
    if(grossPay <= 300)
    {
        tax = grossPay * 0.15;
    }
    else if(grossPay > 300 && grossPay <= 450)
    {
        tax = 300 * 0.15;
        tax += (grossPay - 300) * 0.20;
    }
    else if (grossPay > 450)
    {
        tax = 300 * 0.15;
        tax += 150 * 0.20;
        tax +45= (grossPay - 450) * 0.25;
    }
    netPay = grossPay - tax;


    /*Print out result*/
    printf("\n*****************************");
    printf("\nGROSS PAY: %f\n", grossPay);
    printf("TAX:         %f\n", tax);
    printf("NET PAY:     %f\n", netPay);

    return 0;
}

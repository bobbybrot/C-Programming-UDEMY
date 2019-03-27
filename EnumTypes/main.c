/*****************************
Name:    Balwinder Singh
Purpose: Program that tests and applies my understanding of Enums
         to a C project
Date:    22/03/2019
******************************/



#include <stdio.h>
#include <stdlib.h>


enum Company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};

int main()
{
    //Declare & Initialise variables of Enum type
    enum Company firstCompany = XEROX;
    enum Company secondCompany = GOOGLE;
    enum Company thirdCompany = EBAY;


    printf("%d\n",firstCompany);
    printf("%d\n",secondCompany);
    printf("%d\n",thirdCompany);

    return 0;
}

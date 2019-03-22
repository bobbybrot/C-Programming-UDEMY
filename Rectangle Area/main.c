#include <stdio.h>
#include <stdlib.h>

/*************************
Author: Balwinder Singh
Purpose: Program that tests my understanding of data types
         by outputting properties of a rectangle to console window

Date:    21/03/2019

**************************/


int main(int argc, char* argv[])
{
    double width;
    double height;
    double perimeter = 0.0;
    double area = 0.0;

    width = *argv[1] - '0'; //Obtains Char equivalent which is 2 if value is 50
    height = *argv[2] - '0'; //Obtains Char equivalent which is 5 if value is 53

    perimeter = 2.0 * (height+width);
    area = width*height;

    printf("Width = %f\n", width);
    printf("Height = %f\n", height);
    printf("Perimeter = %f\n", perimeter);
    printf("Area = %f\n", area);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/************************
* Name:     Balwinder Singh
* Purpose:  Practice basics with structures in C
************************/

struct employee
{
    char name[100];
    int hireDate;
    float salary;

};

int main()
{
    struct employee eOne[2] = {{"Balwinder", 8, 25000}};;

    printf("E2 Name:");
    scanf("%[^\n]s", &eOne[1].name);

    printf("E2 hireDate: ");
    scanf("%d",&eOne[1].hireDate);

    printf("E2 Salary:");
    scanf("%f",&eOne[1].salary);
    printf("\n");


    for(int i = 0; i < 2; i++)
    {
        printf("\n");
        printf("Employee %d\n",i);
        printf("Employee name: %s\n",&eOne[i].name);
        printf("Employee hireDate: %d\n",eOne[i].hireDate);
        printf("Employee salary: %.2f\n",eOne[i].salary);
        printf("\n");
    }



    return 0;
}

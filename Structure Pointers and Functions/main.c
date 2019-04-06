#include <stdio.h>
#include <stdlib.h>
/***********************************
* Name:     Balwinder Singh
* Purpose:  Program that uses structures and pointers to pass
*           structure data into functions
***********************************/

struct item
{
    char*   itemName;
    int     quantity;
    float   price;
    float   amount; //Quantity * Price
};


void readItem(struct item *);
void printItem(struct item *);

int main()
{

    //Allocates memory and stores into ptr
    struct item *ptr = (struct item*)malloc(sizeof(struct item));

    //Allocate memory for pointer in structure
    ptr->itemName = (char*)malloc(50 *sizeof(char));
    if(!ptr || !ptr->itemName) //Check memory has been allocated successfully
    {
        printf("MEMORY COULD NOT BE ASSIGNED");
        return 1;
    }

    readItem(ptr);

    return 0;
}

void printItem(struct item *ptr)
{
    printf("\n'''PRODUCT INFORMATION'''\n");

    printf("Item Name:  %s\n",ptr->itemName);
    printf("Quantity:   %d\n",ptr->quantity);
    printf("Price:      %.2f\n",ptr->price);
    printf("Amount:     %.2f",ptr->amount);

}

void readItem(struct item *ptr)
{
    printf("Item Name: ");
    scanf("%[^\n]s",ptr->itemName);

    printf("Quantity: ");
    scanf("%d",&ptr->quantity);

    printf("Price: ");
    scanf("%f",&ptr->price);

    ptr->amount = ptr->quantity * ptr->price;

    printItem(ptr);

}

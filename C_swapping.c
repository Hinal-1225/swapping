//C program to swap two numbers without using third variable.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    //initializing variable
    int no1,no2;
    //entering number from user
    printf("\nEnter number 1: ");
    scanf("%d",&no1);
    printf("\nEnter number 2: ");
    scanf("%d",&no2);
    //Swapping two numbers
    no1=no1+no2;
    no2=no1-no2;
    no1=no1-no2;
    //printing(Displaying) the swapped numbers
    printf("\nNumber 1 = %d ",no1);
    printf("\nNumber 2 = %d ",no2);
    system("pause");
	return 10;
}

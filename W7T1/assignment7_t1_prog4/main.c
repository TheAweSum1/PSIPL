/**
*@brief Program to swap two numbers using call by reference
*@author Chinmay Mhaskar
*@date 17-11-2025
*@param a First integer
*@param b Second integer
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//function to swap two numbers
void swap(int *a, int *b)
{
    int t = 0;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    int n1,n2;
    //ask user to input 2 numbs
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    //print values of a and b before and after swap
    printf("Before swap: a=%d b=%d\n",n1,n2);
    //call function swap with address of n1 and n2
    swap(&n1,&n2);
    printf("After swap: a=%d b=%d",n1,n2);

    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}


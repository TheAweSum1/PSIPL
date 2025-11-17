/**
*@brief Program to return sum of two numbers using functions
*@author Chinmay Mhaskar
*@date 17-11-2025
*@param a First integer
*@param b Second integer
*@return sum of a and b
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//function to add two numbers
int add(int a, int b)
{
    int sum = 0;
    sum = a + b;
    return sum;
}
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    int n1,n2;
    //ask user to input 2 numbs
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    //print sum
    printf("Sum = %d",add(n1,n2));

    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}


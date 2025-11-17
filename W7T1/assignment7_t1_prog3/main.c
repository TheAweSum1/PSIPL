/**
*@brief Program to return factorial of number entered
*@author Chinmay Mhaskar
*@date 17-11-2025
*@param n First integer
*@return factorial of n
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//function to return factorial of number
int factorial(int n)
{
    long fac = 1,i = 0;
    for(i=1;i<=n;i++)
    {
        fac *= i;
    }
    return fac;
}
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    int n1;
    //ask user to input a number
    printf("Enter a number: ");
    scanf("%d",&n1);
    //print factorial
    printf("Factorial = %d",factorial(n1));

    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}



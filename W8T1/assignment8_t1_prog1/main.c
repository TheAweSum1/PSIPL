/**
*@brief Program to calculate and return factorial of a number using recursion
*@author Chinmay Mhaskar
*@date 25-11-2025
*@param n number entered by user
*@return factorial of the number
*/
#include <stdio.h>
#include <stdlib.h>
int factorial (int n)
{   //if n is 0 or 1, return number itself
    if(n == 0 || n == 1)
        return 1;
    //recursively call factorial until base case is reached
    return (n * factorial(n-1));
}
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    int n = 0;
    //ask user to input number
    printf("Enter a number:");
    scanf("%d",&n);
    //store result of factorial function in res
    int res = factorial(n);
    //print result
    printf("Factorial = %d",res);
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

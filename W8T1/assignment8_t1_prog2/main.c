/**
*@brief Program to calculate and return nth fibonacci number
*@author Chinmay Mhaskar
*@date 25-11-2025
*@param n number entered by user
*@return nth fibonacci number
*/
#include <stdio.h>
#include <stdlib.h>
int fibonacci (int n)
{   //if n is 0 or 1, return number itself
    if(n == 0 || n == 1)
        return n;
    //recursively call factorial until base case is reached
    return (fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    int n = 0;
    //ask user to input number
    printf("Enter number of terms:");
    scanf("%d",&n);
    //store result of factorial function in res
    int res = fibonacci(n);
    //print result
    printf("Fibonacci series: %d",res);
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

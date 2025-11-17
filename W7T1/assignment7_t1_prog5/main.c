/**
*@brief Program to check if number is prime using functions
*@author Chinmay Mhaskar
*@date 17-11-2025
*@param n First integer
*@return Return flag 0 or 1 if number is prime or not respectively
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int isPrime(int n)
{
    //if n is divisible any number other than 1 or n itself, it is not prime
    int i =0;
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
            return 0;
    }
    //else it is prime
    return 1;
}

int main()
{   int n = 0;
    printf("Chinmay_Mhaskar_2025300145\n");
    //take number input
    printf("Enter a number: ");
    scanf("%d",&n);
    //call isprime function, and display appropriate output
    if(isPrime(n))
        printf("%d is Prime",n);
    else
        printf("%d is Not Prime",n);

    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

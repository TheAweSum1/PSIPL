#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //declare flag isprime to true, i for running for loop and n to store number
    bool isprime = true;
    int i = 0, n = 0;
    //ask user to input number
    printf("Enter a number to check if it is prime or not:");
    scanf("%d" , &n);
    //using for loop to go through each number from 2 to n-1 and check if its a factor of n
    for(i = 2; i<=n-1;i++)
    {
        if(n%i == 0)
        {
            isprime = false;
        }
    }
    //if isprime is set to true, it is a prime number
    if(isprime)
    {
        printf("%d is a prime number!",n);
    }
    //else it is not a prime number
    else
    {
        printf("%d is not a prime number!",n);
    }
    printf("\n2025300145_Chinmay_Mhaskar\n");
    return 0;
}

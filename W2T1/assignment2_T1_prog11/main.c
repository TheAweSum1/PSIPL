#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    bool isprime = true;
    int i = 0, n = 0;
    printf("Enter a number to check if it is prime or not:");
    scanf("%d" , &n);

    for(i = 2; i<n;i++)
    {
        if(n%i == 0)
        {
            isprime = false;
        }
    }
    if(isprime)
    {
        printf("%d is a prime number!",n);
    }
    else
    {
        printf("%d is not a prime number!",n);
    }
    printf("2025300145_Chinmay_Mhaskar\n");
    return 0;
}

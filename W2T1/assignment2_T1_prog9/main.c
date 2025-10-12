#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //declare n to store number, t as temporary variable, fac to store multiplier
    int n,t;
    long fac = 1;
    //ask user to input number who's factorial is to be found
    printf("Enter a number to calculte its factorial:");
    scanf("%d", &n);
    //store value of n in temporary variable t
    t = n;
    //use while loop to store factorial while decrementing n (used as a counter)
    while(n>1)
    {
        fac *= n;
        n--;
    }
    //print factorial

    printf("Factorial of %d is =  (%d!) = %d", t, t, fac);
    printf("2025300145_Chinmay_Mhaskar\n");
    return 0;
}

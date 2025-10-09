#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t;
    long fac = 1;

    printf("Enter a number to calculte its factorial:");
    scanf("%d", &n);
    t = n;
    while(n>1)
    {
        fac *= n;
        n--;
    }

    printf("Factorial of %d is =  (%d!) = %d", t, t, fac);
    return 0;
}

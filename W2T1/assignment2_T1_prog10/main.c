#include <stdio.h>
#include <stdlib.h>

int main()
{   int s = 0, r, n = 0;
    printf("Enter an integer to find the sum of its digits:");
    scanf("%d" , &n);
    do
    {
        r = n%10;
        s = s+r;
        n = n/10;
    }while(n>0);
    printf("Sum of digits: %d", s);
    return 0;
}

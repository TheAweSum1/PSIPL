#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    int s = 0, r, n = 0;
    printf("Enter an integer to find the sum of its digits:");
    scanf("%d" , &n);
    do
    {
        r = n%10;
        s = s+r;
        n = n/10;
    }while(n>0);
    printf("Sum of digits: %d\n", s);
    printf("2025300145_Chinmay_Mhaskar\n");
    return 0;
}

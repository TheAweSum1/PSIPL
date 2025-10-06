#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a = 1;
    printf("Enter a number (n) to print natural numbers from 1 to n:");
    scanf("%d", &n);
    while(n>0)
    {
        printf("%d\n",a++);
        n--;
    }
}

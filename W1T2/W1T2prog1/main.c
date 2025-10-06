#include <stdio.h>
#include <stdlib.h>

int main()
{   int num = 0;
    printf("Enter a number:");
    scanf("%d" , &num);
    if(num > 0)
    {
        printf("%d is positive number");
    }
    if(num<0)
    {
        printf("%d is negative number");
    }
}

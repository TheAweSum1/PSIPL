#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    int num1, num2, num3;
    printf("Enter 3 Numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("%d is largest number in %d, %d and %d",num1,num1,num2,num3 );
        }
        else
        {
            printf("%d is largest number in %d, %d and %d",num3,num1,num2,num3 );
        }
    }
    else if(num2>num3)
    {
        printf("%d is largest number in %d, %d and %d",num2,num1,num2,num3 );
    }
    else
    {
        printf("%d is largest number in %d, %d and %d\n",num3,num1,num2,num3 );

    }
    printf("2025300145_Chinmay_Mhaskar\n");
}

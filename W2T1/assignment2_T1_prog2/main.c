#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //initialize number variable
    int num = 0;
    //ask user to input the number
    printf("Enter a number:");
    scanf("%d", &num);
    //check and print if number is even, else it is odd
    if(num%2==0)
    {
        printf("%d is an even number" , num);
    }
    else
        printf("%d is an odd number" , num);

    printf("2025300145_Chinmay_Mhaskar\n");
    return 0;
}

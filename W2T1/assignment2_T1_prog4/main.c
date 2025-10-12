#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //declare variables to store 3 numbers
    int num1, num2, num3;
    //ask user to input the three numbers
    printf("Enter 3 Numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    //check if num1>num2
    if(num1>num2)
    {
        //if num2 is smaller we ignore num2 and then compare num1 and num3 to determine largest number
        if(num1>num3)
        {
            printf("%d is largest number in %d, %d and %d",num1,num1,num2,num3 );
        }
        else
        {
            printf("%d is largest number in %d, %d and %d",num3,num1,num2,num3 );
        }
    }
    //check if num2>num3
    else if(num2>num3)
    {   //since num1<num2 and num2>num3, it is the greatest number
        printf("%d is largest number in %d, %d and %d",num2,num1,num2,num3 );
    }
    else
    {   //since num1<num2 but num2<num3 , thus num3 is greatest number
        printf("%d is largest number in %d, %d and %d\n",num3,num1,num2,num3 );

    }

    printf("2025300145_Chinmay_Mhaskar\n");
}

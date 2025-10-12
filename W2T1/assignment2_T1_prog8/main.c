#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //declare i to run for loop, num to store number input
    int i,num;
    //ask user to input number
    printf("Enter a number to display its multiplication table:");
    scanf("%d" ,&num);
    /*
    using for loop where i goes from 1 to 10 and prints its multiplication with original
    number thus printing entire multiplication table. exits from for loop once i becomes 11
    */
    for(i=1;i<=10;i++)
    {
        printf("%d*%d = %d\n", num, i, (num*i));
    }
    printf("\n2025300145_Chinmay_Mhaskar\n");
    return 0;
}

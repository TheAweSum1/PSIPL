#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //declare s for sum r for remainder and n for number who's digits to be found
    int s = 0, r, n = 0;
    //ask user to input the integer
    printf("Enter an integer to find the sum of its digits:");
    scanf("%d" , &n);
    /*using do while to find last digit and store it in r, add it with and
     store it back into sum s and dividing n by 10 to get rid of last digit
     until n eventually becomes zero
    */
    do
    {
        r = n%10;
        s = s+r;
        n = n/10;
    }while(n!=0);
    if(s<0)
        s = (-s);
    printf("Sum of digits: %d\n", s);
    printf("2025300145_Chinmay_Mhaskar\n");
    return 0;
}

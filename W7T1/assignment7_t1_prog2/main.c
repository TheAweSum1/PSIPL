/**
*@brief Program to return maximum of three numbers using functions
*@author Chinmay Mhaskar
*@date 17-11-2025
*@param a First integer
*@param b Second integer
*@param c Third integer
*@return maximum of a b and c
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//function prototype to find max of 3 numbers
int max(int, int, int);

int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    int n1,n2,n3;
    //ask user to input 3 numbs
    printf("Enter three numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    //print maximum
    printf("Maximum = %d",max(n1,n2,n3));

    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}
//function maximum to return maximum of three numbers
int max(int a, int b, int c)
{
    int max = a;
    if(a<b)
    {
        if(b>c)
            max = b;
        else
            max = c;
    }
    else
    {
        if(a<c)
            max = c;
    }
    return max;
}


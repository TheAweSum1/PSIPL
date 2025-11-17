/**
*@brief Program to return sum of two numbers using functions
*@author Chinmay Mhaskar
*@date 17-11-2025
*@param a First integer
*@param b Second integer
*@return sum of a and b
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//function to add two numbers
int arraySum(int arr[], int n)
{
    int i = 0,sum = 0;
    for(i=0;i<n;i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    int n1,n2,size,i;
//var s to store size
    //ask user to input 2 numbs
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arrr[size];
    printf("Enter %d elements",s);

    for(i=0;i<size;i++)
        scanf("%d",&arrr[i]);
    printf("Sum of array elements = %d",arraySum(arrr,s));
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

/**
*@brief Program to calculate and return sum of array elements using functions
*@author Chinmay Mhaskar
*@date 17-11-2025
*@param arr[] pass by reference an array
*@param n length of array
*@return sum of all elements of array
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//function to add all elements of the array
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
    //ask user to input size of array
    printf("Enter size of array: ");
    scanf("%d",&size);
    //define arrr size
    int arrr[size];
    printf("Enter %d elements",s);
    //take input of all elements
    for(i=0;i<size;i++)
        scanf("%d",&arrr[i]);
    //call function arraySum to print sum of all elements
    printf("Sum of array elements = %d",arraySum(arrr,s));
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

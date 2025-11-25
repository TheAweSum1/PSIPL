/**
*@brief Program to calculate and return factorial of a number using recursion
*@author Chinmay Mhaskar
*@date 25-11-2025
*@param arr to store array input by user
*@param n to store length of array
*@return sum store sum of all elements
*/
#include <stdio.h>
#include <stdlib.h>
int sumArray (int arr[],int n)
{   //if n is 1, return only element in array (arr[0])
    if(n==1)
        return (arr[0]);
    //initialize sum to arr[n-1]
    int sum = arr[n-1];
    sum = sum + sumArray(arr, (n-1));
    //recursively call sumArray until base case is reached
    return sum;
}
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    int n = 0;
    //ask user to input number
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    // ask user to input elements of array, define array arr of length n
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //store result of sumArray function in res
    int res = sumArray(arr,n);
    //print result
    printf("Sum = %d",res);
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

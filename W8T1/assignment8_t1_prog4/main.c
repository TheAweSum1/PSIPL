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
int maxArray (int arr[],int n)
{   //if n is 1, return only element in array (arr[0])
    if(n==1)
        return (arr[0]);
    int max = arr[n-1];
    //initialize sum to arr[n-1]
    if(arr[n-1] > arr[n-2])
        arr[n-2] = arr[n-1];

    return (maxArray(arr,n-1));
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

    //store result of maxArray function in res
    int res = maxArray(arr,n);
    //print result
    printf("Maximum = %d",res);
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

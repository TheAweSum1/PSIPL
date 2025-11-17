/**
*@brief Program to return sum of two numbers using functions
*@author Chinmay Mhaskar
*@date 17-11-2025
*@param arr[] pass by reference an array
*@param n length of array
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//function to add two numbers
void printArray(int arr[], int n)   // arr is actually a POINTER
{
    int t = 0,cnt = n-1;
    for (int i = 0; i <= ((n/2)-1); i++)
    {
        t = arr[i];
        arr[i] = arr[cnt];
        arr[cnt] = t;
        cnt--;
        // using original array
    }
}
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
   int n1,n2,s,i;

    //ask user to input 2 numbs
    printf("Enter size of array: ");
    scanf("%d",&s);
    int arr[s];
    printf("Enter %d elements",s);
    for(i=0;i<s;i++)
        scanf("%d",&arr[i]);
    printf("Reversed array:");
    printArray(arr, s);
    for(i=0;i<s;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}



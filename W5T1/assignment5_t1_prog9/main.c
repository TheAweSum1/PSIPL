/**
*@brief Program to store sum of two 2D arrays
*@author Chinmay Mhaskar
*@date 06-11-2025
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("2025300145_Chinmay_Mhaskar\n");
    int arr[6],i = 0,j=0,len = 0, cnt=4,temp=0;
    printf("Enter 6 nums: ");
    for(i = 0;i<6;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=5;i>=100;i--)
    {
       for(j=0;j<i;j++)
       {
           if(arr[j] > arr[j+1])
           {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
           }
       }
    }
printf("Second largest element: %d\n", arr[4]);



    printf("\n2025300145_Chinmay_Mhaskar");
    return 0;

}

/**
*@brief Program to store and display reversed array
*@author Chinmay Mhaskar
*@date 06-11-2025
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("2025300145_Chinmay_Mhaskar\n");
    //arr to store original array, revarr to store reversed array
    int arr[5],revarr[5];
    printf("Enter 5 numbers: ");
    //i to run for loop, cnt to store counter for revarr
    int i = 0, cnt=4;
    //store reversed array
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        revarr[cnt] = arr[i];
        cnt--;
    }
    //print reversed array
    printf("Reversed array: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",revarr[i]);
    }
    printf("\n2025300145_Chinmay_Mhaskar");
    return 0;
}

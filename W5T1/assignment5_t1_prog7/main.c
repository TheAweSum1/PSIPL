/**
*@brief Program to display frequency of each digit from 0 to 9 entered
*@author Chinmay Mhaskar
*@date 06-11-2025
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //arr to store numbers, freq to store frequency of each digit
    int arr[10],freq[] = {0,0,0,0,0,0,0,0,0,0};
    printf("Enter 10 numbers (0 to 9): ");
    //i to run for loop
    int i = 0;
    //take input of all numbers, increment corr index as the number entered in freq
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        freq[(arr[i]-1)]++;
    }
    //print frequencies of all digits that aren't 0
    printf("Frequencies: \n");
    for(i=0;i<10;i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n",(i+1),freq[i]);
        }
    }
    printf("\n2025300145_Chinmay_Mhaskar");
    return 0;
}

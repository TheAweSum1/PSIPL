/**
*@brief Program to iterate through all elements of array using pointer
*@author Chinmay Mhaskar
*@date 17-11-2025
*@param arr[] pass by reference an array
*@param n length of array
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//function to print all elements of the array
void printArray(int *p, int n)   // arr is actually a POINTER
{
    //for loop to iterate n number of times
    for(int i = 0; i<n;i++)
    {
        //prints value the array points to, and post increments it at the same time
        printf("%d ",*p++);
    }
}
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    int s,i;
    //ask user to input size of array
    printf("Enter size of array: ");
    scanf("%d",&s);
    //create array of size s
    int arr[s];
    //ask user to input elements
    printf("Enter %d elements: ",s);
    for(i=0;i<s;i++)
        scanf("%d",&arr[i]);
    //call function printArray ,passing arr and s respectively
    printArray(arr, s);
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}


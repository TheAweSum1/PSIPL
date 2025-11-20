#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
*@brief function to return total marks
*@author Chinmay Mhaskar
*@date 20-11-2025
*@param arr[] Array of marks entered
*@param n Length of array entered
*@return ttl sum of all marks
*/
int totalMarks(int arr[],int n)
{
    //find total of all elements in arr by iterating through for loop
    int i = 0,ttl=0;
    for(i=0;i<n;i++)
    {
        ttl += arr[i];
    }
    return ttl;
}
/**
*@brief function to return average marks
*@author Chinmay Mhaskar
*@date 20-11-2025
*@param total sum of all marks
*@param n Length of array entered
*@return avg average of all students
*/
float averageMarks(int total,int n)
{
    //find and return average of all marks by dividing total by no. of students
    float avg;
    avg = ((float)total/n);
    return avg;
}
/**
*@brief function to print minimum and maximum of all marks
*@author Chinmay Mhaskar
*@date 20-11-2025
*@param arr[] Array of all students marks
*@param n Length of array entered
*@param *min pointer initialized to first element of array, will later store minimum marks
*@param *max pointer initialized to first element of array, will later store maximum marks
*/
void findMinMax(int arr[], int n, int *min, int *max)
{
    //use pointer initialized to first element
    int i = 0;
    for(i=0;i<n;i++)
    {
        //if arr[i] is greater than max, point the pointer to arr[i]
        if(arr[i] > *max)
            max = &(arr[i]);
        //if arr[i] is smaller than min, point the pointer to arr[i]
        if(arr[i] < *min)
            min = &(arr[i]);
    }

}
/**
*@brief Program to analyze marks of students
*@author Chinmay Mhaskar
*@date 20-11-2025
*/
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    int n,i;
    //ask user to input number of students
    printf("Enter number of students: ");
    scanf("%d",&n);
    //define array marks of size n
    int mks[n];
    //ask user to input marks
    printf("Enter marks of %d students ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&mks[i]);
    }
    //call function totalMarks and store value returned in total, and print total
    int total = totalMarks(mks,n);
    printf("Total marks = %d\n",total);
    //call function averageMarks and store value returned in average, and print average
    float average = averageMarks(total,n);
    printf("Average Marks = %.2f\n",average);
    //call function findMinMax
    int min = &mks[0];

    findMinMax(mks,n, &mks[0], &mks[0]);
    printf("Lowest marks = %d\n",*min);
    printf("Highest marks = %d\n",*max);
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

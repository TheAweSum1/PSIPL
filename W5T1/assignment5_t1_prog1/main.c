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
    //declare 3 2d arrays arr1 to store first matrix arr2 to store second matrix and sum to store sum of the matrices
    int arr1[3][3],arr2[3][3],sum[3][3];
    //ask user to input 1st 3x3 matrix
    printf("Enter 1st 3x3 matrix:\n");
    int i = 0, j = 0;
    //using nested for loops to iterate each element in the row and column
    for(i = 0; i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    //ask user to input 2nd 3x3 matrix
    printf("Enter 2nd 3x3 matrix:\n");
     for(i = 0; i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    //print sum of the two matrices
    printf("Sum of matrices\n");
    for(i = 0; i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    printf("\n2025300145_Chinmay_Mhaskar");
    return 0;
}

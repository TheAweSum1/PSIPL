/**
*@brief Program to input a 3x3 matrix and print its transpose
*@author Chinmay Mhaskar
*@date 06-11-2025
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //declare 2 2d arrays arr1 to store first matrix arrT to store transpose of the matrix
    int arr1[3][3], arrt[3][3];
    //ask user to input 3x3 matrix
    printf("Enter a 3x3 Matrix\n");

    int i = 0, j = 0;
    //using nested for loops to iterate each element in the row and column
    for(i = 0; i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
            arrt[j][i] = arr1[i][j];
        }
    }
    //print transpose of matrix using for loop
    printf("Transpose of matrix\n");
    for(i = 0; i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arrt[i][j]);
        }
        printf("\n");
    }
    printf("\n2025300145_Chinmay_Mhaskar");
    return 0;
}

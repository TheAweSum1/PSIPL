/**
*@brief Program to multiply two matrices of compatible sizes using nested loops
*@author Chinmay Mhaskar
*@date 06-11-2025
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("2025300145_Chinmay_Mhaskar\n");
    //declare 2 2d arrays to store first and second matrix, prod to store their product
    int arr1[2][2],arr2[2][2], prod[2][2];


    int i = 0, j = 0;
    //ask user to input two 2x2 matrix using nested for loop
    printf("Enter first 2x2 matrix\n");
    for(i = 0; i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr1[i][j]);

        }
    }
     printf("Enter second 2x2 matrix\n");
    for(i = 0; i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    //calculate each element in prod using the following formula
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            prod[i][j] = arr1[i][0] * arr2[0][j] + arr1[i][1] * arr2[1][j];
        }
    }
    //print each element in array prod
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%2d ",prod[i][j]);
        }
        printf("\n");
    }

    printf("\n2025300145_Chinmay_Mhaskar");
    return 0;
}

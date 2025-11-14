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
    int arr[6],i = 0,j=0,rows = 0, cols=0,temp=0;
    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter matrix: \n");
    int mat[1024];

    for(i=0; i<(rows*cols); i++)
    {
        scanf("%d", &mat[i]);
    }
    printf("\nSparse matrix (row col value): \n");
    int t = 0;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            if(mat[t] == 0)
                continue;
            printf("%d %d %2d\n",i,j,mat[t]);
            t++;
        }
    }


    printf("\n2025300145_Chinmay_Mhaskar");
    return 0;
}

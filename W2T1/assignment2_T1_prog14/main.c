#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //declare i and j to run nested for loops, n to store number of rows
    int i,j,n;
    //ask user to input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);
    //using outer for loop for each row(i.e. new line), and inner for loop for each * in each row
    for(i = 1; i<=n; i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("2025300145_Chinmay_Mhaskar\n");
    return 0;
}

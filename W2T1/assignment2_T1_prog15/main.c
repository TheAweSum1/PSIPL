#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //declare i and j to run for loop
    int i,j;
    //using outer for loop for new line and inner for loop to print each row
    for(i = 1; i<=10; i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%3d ",(i*j));
        }
        printf("\n");
    }
    printf("2025300145_Chinmay_Mhaskar\n");
    return 0;
}

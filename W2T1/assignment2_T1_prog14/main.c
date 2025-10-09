#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
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

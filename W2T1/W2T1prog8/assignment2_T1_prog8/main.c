#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,num;
    printf("Enter a number to display its multiplication table:");
    scanf("%d" ,&num);

    for(i=1;i<=10;i++)
    {
        printf("%d*%d = %d\n", num, i, (num*i));
    }
    return 0;
}

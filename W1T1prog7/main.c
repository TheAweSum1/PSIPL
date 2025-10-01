#include <stdio.h>
#include <stdlib.h>

int main()
{   int a;
    printf("Original value:");
    scanf("%d", &a);
    printf("Post-Increment: %d \n", a++);
    printf("After post-increment %d\n", a);
    printf("Pre-increment %d\n", ++a);
    printf("Post-decrement %d\n", a--);
    printf("After post-decrement %d\n", a);
    printf("Pre-decrement %d\n", --a);

}

#include <stdio.h>
#include <stdbool.h>

int main()
{   int n;
    while(true)
    {
        printf("Enter an integer (enter -1 to stop):");
        scanf("%d",&n);
        if(n==(-1))
            break;
    }
    printf("You entered -1. Exiting the program.");
    return 0;
}

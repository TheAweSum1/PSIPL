#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do
    {
      printf("Enter a positive number:");
      scanf("%d", &n);

    }while(n>0);
    printf("Sorry! You entered a negative number. Exiting the program.");
    return 0;
}

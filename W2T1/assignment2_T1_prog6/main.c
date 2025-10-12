#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //declare and initialize number n, and set a = 1
    int n, a = 1;
    // ask user to input how man natural numbers user wants to print
    printf("Enter a number (n) to print natural numbers from 1 to n:");
    scanf("%d", &n);
    //using while loop to print the number which is post incremented while the counter is post decremented
    while(n>0)
    {
        printf("%d\n",a++);
        n--;
    }
    printf("\n2025300145_Chinmay_Mhaskar\n");
}

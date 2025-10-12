#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //declare variable n to store a number
    int n;
    //using do while loop to keep asking for a positive number until user enters a negative number
    do
    {
      printf("Enter a positive number:");
      scanf("%d", &n);

    }while(n>0);
    //inform user that negative number has been input
    printf("Sorry! You entered a negative number. Exiting the program.\n");

    printf("2025300145_Chinmay_Mhaskar\n");
    return 0;
}

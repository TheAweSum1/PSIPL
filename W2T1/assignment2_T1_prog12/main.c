#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //initialize n to store number input
    int n;
    //use infinite loop to ask user to input a number until user inputs -1 after which program will exit
    while(true)
    {
        printf("Enter an integer (enter -1 to stop):");
        scanf("%d",&n);
        if(n==(-1))
            break;
    }
    //inform user program is exiting
    printf("You entered -1. Exiting the program.");
    printf("2025300145_Chinmay_Mhaskar\n");

    return 0;
}

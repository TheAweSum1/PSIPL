#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //initialize variable storing marks to 0
    int mks = 0;
    //ask user to input marks
    printf("Enter your Marks in PSIPL:");
    scanf("%d" ,&mks);
    //use if else if to print appropriate grade on basis of marks entered
    if(mks >= 75)
        printf("Distinction");
    else if(mks >=60)
        printf("First class");
    else if(mks >=50)
        printf("Second class");
    else if(mks >=40)
        printf("Pass");
    else
        printf("Fail");

    printf("\n 2025300145_Chinmay_Mhaskar\n");

    return 0;
}

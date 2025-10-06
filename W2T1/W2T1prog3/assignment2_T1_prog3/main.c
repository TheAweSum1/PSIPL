#include <stdio.h>
#include <stdlib.h>

int main()
{   int mks = 0;
    printf("Enter your Marks in PSIPL:");
    scanf("%d" ,&mks);

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
    return 0;
}

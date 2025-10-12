#include <stdio.h>
#include <stdlib.h>

int main()
{   printf("2025300145_Chinmay_Mhaskar\n");
    //initialize i to 0 for running for loop
    int i = 0;
    //for loop runs frmo i = 1 to 20 , and doesn't print numbers divisible by 3
    for(i = 1; i<=20; i++)
    {
        if(i%3 == 0)
        {
            continue;
        }
        printf("%d\n",i);
    }
    printf("2025300145_Chinmay_Mhaskar\n");
    return 0;
}

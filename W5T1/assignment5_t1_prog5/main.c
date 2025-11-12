#include <stdio.h>
#include <stdbool.h>

int main()
{   bool isPalin = true;
    printf("2025300145_Chinmay_Mhaskar\n");
    char str[100];
    printf("Enter a string: ");
    scanf("%s",&str);
    int i = 0,len = 0, nlen;
    for(i=0;i<100;i++)
    {
        if(str[i] != '\0' && str[i] != '\n')
        {
            len++;
        }
        else
            break;
    }
    nlen = len/2;
    for(i=0;i<nlen;i++)
    {
        if(str[i] != str[len-(i+1)])
                isPalin = false;
    }
    if(isPalin)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    printf("\n2025300145_Chinmay_Mhaskar");
    return 0;
}

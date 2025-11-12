#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("2025300145_Chinmay_Mhaskar\n");
    char str[100];
    printf("Enter a string: ");
    scanf("%s",&str);
    int i = 0,len = 0;
    for(i=0;i<100;i++)
    {
        if(str[i] != '\0' && str[i] != '\n')
        {
            len++;
        }
        else
            break;
    }
    printf("Length of string: %d",len);
    printf("\n2025300145_Chinmay_Mhaskar");
    return 0;
}

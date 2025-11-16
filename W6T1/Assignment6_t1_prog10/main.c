/**
*@brief Program to remove whitespaces from the string
*@author Chinmay Mhaskar
*@date 15-11-2025
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    //char array to store string
    char str[100];
    //i to run for loop
    int i=0;
    //ask user to input string
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("String without spaces: ");
    //until end of string is reached, print every non whitespace character
    for(i=0;i<100;i++)
    {   if(str[i] == '\n')
            break;
        if(str[i] != ' ')
            printf("%c",str[i]);
    }
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

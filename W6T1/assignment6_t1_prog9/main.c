/**
*@brief Program to count number of words in string
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
    int i=0,cnt = 1;
    //ask user to input string
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    //until end of string is reached, increment number of words by checking whitespaces
    for(i=0;i<100;i++)
    {   if(str[i] == '\n')
            break;
        if(str[i] == ' ')
            cnt++;
    }
    printf("Number of words: %d",cnt);
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

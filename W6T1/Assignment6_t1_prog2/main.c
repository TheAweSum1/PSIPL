/**
*@brief Program to copy one string into another
*@author Chinmay Mhaskar
*@date 10-11-2025
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    //char array to store string
     char str[100],str2[100];

    //len to store length of string i to run for loop
    int len=0,i=0;

    //ask user to input string using fgets
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    //using for loop to check if each character is \0
    for(i=0;i<100;i++)
    {
        //increase length only if character is neither \0 nor \n
        if(str[i] != '\0' && str[i] != '\n')
        {
            len++;
        }
        //if either \0 or \n is found, break
        else
            break;
    }
    printf("Copied string: ");
    //for loop to copy each element into second string
    for(i=0;i<len;i++)
    {
        str2[i] = str[i];
        printf("%c",str2[i]);
    }
    //display length of string to user
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

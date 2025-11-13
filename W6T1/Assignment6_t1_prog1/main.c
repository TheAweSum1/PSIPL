/**
*@brief Program to find length of string entered by user
*@author Chinmay Mhaskar
*@date 10-11-2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
      printf("Chinmay_Mhaskar_2025300145\n");

    char str[100];
    //char array to store string
    int len=0,i=0;
    //len to store length of string i to run for loop

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    //ask user to input string using fgets
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
    //display length of string to user
    printf("Length of string: %d",len);
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

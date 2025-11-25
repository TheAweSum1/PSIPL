/**
*@brief Program to return length of string entered
*@author Chinmay Mhaskar
*@date 17-11-2025
*@param str[] pass by reference an array
*@return return len, which stores length of the array
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//function to calculate length of string
int strLength(char str[])
{
    int i = 0, len = 0;
    //increments counter len until it reaches end of string
     for(i=0;i<100;i++)
    {
        if(str[i] != '\0' && str[i] != '\n')
            len++;

        else
            break;
    }
    //return length
    return len;
}
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    char str[100];
    //ask user to input a string
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    //call function strLength which calculates length of string, whose result is stored in variable length
    int length = strLength(str);
    //display length of string to user
    printf("Length = %d",length);
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

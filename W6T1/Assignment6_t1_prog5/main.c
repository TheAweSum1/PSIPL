/**
*@brief Program to reverse a string
*@author Chinmay Mhaskar
*@date 10-11-2025
*/
#include <stdio.h>
#include <stdlib.h>

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
    //define string with length the same as that of string entered
    char str2[len];
    //counter for storing reversed in second string
    int cnt = len-1;
    //for loop to store reversed in second string
    for(i=0;i<len;i++)
    {
        str2[cnt] = str[i];
        cnt--;
    }
    //print reversed string
    printf("Reversed string: ");
    for(i=0;i<len;i++)
    {
        printf("%c",str2[i]);
    }
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

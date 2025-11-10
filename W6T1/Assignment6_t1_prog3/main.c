/**
*@brief Program to concat two strings together
*@author Chinmay Mhaskar
*@date 10-11-2025
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    char str[100],str2[100];
    //two char arrays to store string1 and string2
    int len=0,len2=0,i=0;
    //len to store length of string i to run for loop

    printf("Enter first string: ");
    scanf("%s",str);
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
    printf("Enter second string: ");
    scanf("%s",str2);
    //ask user to input string using fgets
    //using for loop to check if each character is \0
    for(i=0;i<100;i++)
    {
        //increase length only if character is neither \0 nor \n
        if(str2[i] != '\0' && str2[i] != '\n')
        {
            len2++;
        }
        //if either \0 or \n is found, break
        else
            break;
    }
    //define second string with total length addition of first and second length
    char str3[(len+len2)];
    for(i=0;i<(len+len2);i++)
    {
        if(i<len)
        {
            str3[i] = str[i];
        }
        else
            str3[i] = str2[i-len];

    }
    //print concatted string
    printf("%s",str3);
    printf("\nChinmay_Mhaskar_2025300145\n");
    return 0;
}

/**
*@brief Program to check if two strings are equal or not
*@author Chinmay Mhaskar
*@date 10-11-2025
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    //bool isEqual to store if strings are equal or not
    bool isEqual = true;
    char str1[100],str2[100];
    //char array to store string
    int len=0,i=0;
    //len to store length of string i to run for loop
    //ask user to input first and second string
    printf("Enter first string: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter second string: ");
    fgets(str2,sizeof(str2),stdin);
     for(i=0;i<100;i++)
    {
        //increase length only if character is neither \0 nor \n
        if(str1[i] != '\0' && str1[i] != '\n')
        {
            len++;
        }
        //if either \0 or \n is found, break
        else
            break;
    }
    //ask user to input string using fgets
    //using for loop to check if each character is equal or not
    for(i=0;i<len;i++)
    {
        if(str1[i] != str2[i])
        {
            isEqual = false;
            break;
        }
    }
    //if isEqual is true print strings are equal and if not print strings are not equal
    if(isEqual)
        printf("\nStrings are equal");
    else
        printf("\nStrings are not equal");
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

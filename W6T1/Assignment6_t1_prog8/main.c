/**
*@brief Program to convert upper case to lower case and vice versa
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
    //print converted string
    printf("Converted string: ");
    //for loop to check if upper or lower case, and print the opposite case by changing ascii value
    for(i=0;i<100;i++)
    {   if(str[i] == '\n')
            break;
        if((int)str[i] >= 65 && (int)str[i] <= 90)
            printf("%c",((char)str[i]+32));
        else if((int)str[i] >= 97 && (int)str[i] <= 122)
            printf("%c",((char)str[i]-32));
        else
            printf("%c",((char)str[i]));
    }
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

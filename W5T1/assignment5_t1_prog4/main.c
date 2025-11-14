/**
*@brief Program to display length of string
*@author Chinmay Mhaskar
*@date 06-11-2025
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("2025300145_Chinmay_Mhaskar\n");
    //declare char array of size 100
    char str[100];
    //ask user to input string
    printf("Enter a string: ");
    scanf("%s",&str);
    //initialize i for running for loop, len to store length of array
    int i = 0,len = 0;
    //for loop increases counter until it reaches end of string
    for(i=0;i<100;i++)
    {
        if(str[i] != '\0' && str[i] != '\n')
        {
            len++;
        }
        else
            break;
    }
    //print lenght of string
    printf("Length of string: %d",len);
    printf("\n2025300145_Chinmay_Mhaskar");
    return 0;
}

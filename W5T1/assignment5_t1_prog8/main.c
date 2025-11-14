/**
*@brief Program to display character frequency histogram
*@author Chinmay Mhaskar
*@date 06-11-2025
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //arr to store string entered by user
    char arr[100];
    //freq to store frequency of each char
    int freq[256] = {0};
    //ask user to input a string
    printf("Enter a string: ");
    scanf("%s", &arr);
    //i to run for loop, len to store length
        int i = 0,len = 0;
    for(i=0;i<100;i++)
    {
        //increase length only if character is neither \0 nor \n
        if(arr[i] != '\0' && arr[i] != '\n')
        {
            len++;
        }
        //if either \0 or \n is found, break
        else
            break;
    }
    //increment frequency of each character found
    for(i=0;i<len;i++)
    {
        freq[arr[i] - '\0']++;
    }
    //display count of each uppercase letter that was entered
    for(i=65;i<=90;i++)
    {
        if(freq[i] != 0)
            printf("%c: %d \n",((char)i),freq[i]);
    }
    //display count of each lowercase letter that was entered
    for(i=97;i<=122;i++)
    {
        if(freq[i] != 0)
             printf("%c: %d \n",((char)i),freq[i]);
    }


    printf("\n2025300145_Chinmay_Mhaskar");
    return 0;
}

/**
*@brief Program to check palindrome
*@author Chinmay Mhaskar
*@date 15-11-2025
*/
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool isPalin = true;
    //flag to store if palindrome
    printf("2025300145_Chinmay_Mhaskar\n");
    //char string to store string input
    char str[100];
    //ask user to input string
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    //i for running for loop, len to store length of string, nlen for storing length by 2
    int i = 0,len = 0, nlen;
    //calculate length of string
    for(i=0;i<100;i++)
    {
        if(str[i] != '\0' && str[i] != '\n')
            len++;

        else
            break;
    }
    //calc nlen
    nlen = len/2;
    //if first and last, second and second last etc dont match, set palind flag to false else keep it true
    for(i=0;i<nlen;i++)
    {
        if(str[i] != str[len-(i+1)])
                isPalin = false;}
    //display appropriate message
    if(isPalin)
        printf("String is a Palindrome");
    else
        printf("String is not a Palindrome");
    printf("\n2025300145_Chinmay_Mhaskar");
    return 0;
}

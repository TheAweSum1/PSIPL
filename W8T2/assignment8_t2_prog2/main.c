/**
*@brief Program to calculate and return factorial of a number using recursion
*@author Chinmay Mhaskar
*@date 25-11-2025
*@param arr to store array input by user
*@param n to store length of array
*@return sum store sum of all elements
*/
#include <stdio.h>
#include <string.h>
void reverseString (char str[], int start, int end)
{   //if n is 1, return only element in array (arr[0])
    if(!(start >= end))
        {
       // printf("here2");
        char c = str[start];
        str[start] = str[end];
        str[end] = c;
        reverseString(str,start+1,end-1);
        }

}
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    int n = 0;
    //ask user to input number

    printf("Enter a sentence:");

    // ask user to input elements of array, define array arr of length n
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i = 0,start = 0, end = 0;
    char strcopy[100];
    for(i=0;i<strlen(str);i++)
    {
        strcopy[i] = str[i];

    }

    for(i=0;i<strlen(str);i++)
    {
        if(strcopy[i] == 32 )
        {
       //     printf("here1");
            reverseString(str,start,n-1);
            start = i+1;
        }
        if(strcopy[i] == 10)
            {
                reverseString(str,start,n-1);
                continue;
            }
        n++;
    }

    //print result
    printf("Reversed string:%s",str);
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

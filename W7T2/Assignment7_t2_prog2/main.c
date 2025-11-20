#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
*@brief Program to return length of string
*@author Chinmay Mhaskar
*@date 17-11-2025
*@param str to store string entered by user
*@return length of string
*/
int checkLength(char str[])
{
    int i = 0,len = 0;
    for(i=0; i<100; i++)
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
    return len;
}
/**
*@brief Program to check if password is strong or not
*@author Chinmay Mhaskar
*@date 17-11-2025
*@param str to store string entered by user
*@return 1 if password is strong, 0 if password isnt strong
*/
int isStrong(char str[])
{
    int ln = checkLength(str),i=0;

    bool isUpper = false, isLower = false, isDigit = false;
    //check if an uppercase, lowercase character and digit is present in the password
    for(i=0; i<ln; i++)
    {
        if((int)str[i] >= 65 && (int)str[i] <= 90)
        {
            isUpper = true;
            continue;
        }
        else if((int)str[i] >= 97 && (int)str[i] <= 122)
        {
            isLower = true;
            continue;
        }
        else if( (int)str[i] >= 48 && (int)str[i] <= 57 )
        {
            isDigit = true;
            continue;
        }
    }
    //if all three are present, return 1 else 0
    if(isDigit && isUpper && isLower)
        return 1;
    else
        return 0;

}
/**
*@brief Program to check if password is strong or not
*@author Chinmay Mhaskar
*@date 17-11-2025
*@param str to store string entered by user
*/
void toLowerCase(char str[])
{
    int i = 0;
    //if character is Uppercase, convert to lowercase
    for(i=0; i<100; i++)
    {
        if(str[i] == '\n')
            break;
        if((int)str[i] >= 65 && (int)str[i] <= 90)
            str[i] = ((char)str[i]+32);

    }
}
/**
*@brief Program for library password system
*@author Chinmay Mhaskar
*@date 17-11-2025
*/
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    char str[100];
    //ask user to input password
    printf("Enter a password: ");
    fgets(str,sizeof(str),stdin);
    //call function checkLength and store length returned in variable length
    int length = checkLength(str);
    //call function isStrong and store 1 if it is strong 0 if it is weak
    int strng = isStrong(str);
    //print password length
    printf("Password Length = %d\n",length);
    //print if password is strong or not
    if(strng != 0)
        printf("Strong Password\n");
    else
        printf("Weak Password (must contain uppercase, lowercase and digit)\n");
    //convert password to lowercase by calling funciton toLowerCase and printing password
    toLowerCase(str);
    printf("Password in lowercase: %s",str);
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

/**
*@brief Program to check if username entered by user is valid or not
*@author Chinmay Mhaskar
*@date 13-11-2025
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");

    char user[100];
    bool userisvalid = true;
    //char array to store string
    int len=0,i=0;
    //len to store length of string i to run for loop
    //ask user to input username
    printf("Enter a username: ");
    fgets(user,sizeof(user),stdin);
    //using for loop to check if each character is \0
    for(i=0;i<100;i++)
    {

        //increase length only if character is neither \0 nor \n
        if(user[i] != '\0' && user[i] != '\n')
        {
            len++;
        }
        //if either \0 or \n is found, break
        else
            break;
        //if input character is a lower case character or digit, continue
        if(((int)user[i] >= 48 && (int)user[i] <= 57) ||((int)user[i] >= 97 && (int)user[i] <= 122))
            continue;
        //if input character is an upper case character, convert to lowercase
        else if( ((int)user[i] >= 65 && (int)user[i] <= 90))
            user[i] = (int) user[i] + 32;
        //if neither upper lower case or a digit, must be a special character which is not allowed, set flag to false
        else
            userisvalid = false;

    }
    //if length is less than 6 or more than 15 set flag to false
    if(len<6 || len>15)
        userisvalid = false;
    //print processed username
    printf("Processed username: %s",user);
    //print if username is valid or not
    if(userisvalid)
        printf("Username is valid");
    else
        printf("Username is invalid");
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

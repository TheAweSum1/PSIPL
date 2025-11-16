/**
*@brief Program to count vowels and consonants
*@author Chinmay Mhaskar
*@date 13-11-2025
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
   printf("Chinmay_Mhaskar_2025300145\n");

    char user[100],revuser[100],clean[100];
    bool userisvalid = true;
    //char array to store string
    int len=0,i=0;
    bool ispace = 0;
    //len to store length of string i to run for loop
    //ask user to input username
    printf("Enter a string: ");
    int  cntvo = 0, cntco = 0, cntdi = 0, cntsp = 0;
    char temp = ' ';

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
        //increment digit counter if its a digit
        if(user[i] >= '0' && user[i] <= '9')
            cntdi++;
        //increment space counter if its a whitespace
        else if(user[i] == ' ')
            {
                cntsp++;
                continue;
            }
        //if its a capital letter convert to lowercase and store in temp variable, check if a vowel or consonant
        else if(((int)user[i] >= 65 && (int)user[i] <= 90))
        {
            temp = user[i] + 32;
        }
        //if its lowercase keep as lowercase store in temp variable and check if vowel or consonant
        else if(((int)user[i] >= 97 && (int)user[i] <= 122))
        {
            temp = user[i];
        }
        if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u')
                cntvo++;
        else if(temp != ' ')
                cntco++;
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d",cntvo,cntco,cntdi,cntsp);
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

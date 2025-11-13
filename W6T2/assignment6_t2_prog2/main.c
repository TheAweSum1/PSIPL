/**
*@brief Program to analyze text input by user
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
    printf("Enter a message: ");
    int cntwo = 1, cntvo = 0, cntco = 0, cntdi = 0, cntsp = 0;
    char temp;

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
            cntsp++;
        //if its a capital letter convert to lowercase and store in temp variable, check if a vowel or consonant
        else if(((int)user[i] >= 65 && (int)user[i] <= 90))
        {
            temp = user[i] + 32;
            if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u')
                cntvo++;
            else
                cntco++;
        }
        //if its lowercase keep as lowercase store in temp variable and check if vowel or consonant
        else if(((int)user[i] >= 97 && (int)user[i] <= 122))
        {
            temp = user[i];
            if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u')
                cntvo++;
            else
                cntco++;
        }
    }
    //cnt for reversing array
    int cnt = len-1;
    //reversing array
    for(i=0;i<len;i++)
    {
        revuser[cnt] = user[i];
        cnt--;
    }
    //new user for cnt as counter in cleaned up string
    cnt = 0;
    //set ispace to true once whitespace found, continue as long as spaces keep coming
    //once end of all spaces reached, set ispace to false, increment number of words,
    //and append a space and non whitespace character to array clean, and if neither
    //ispace nor whitespace simply store character in clean
    for(i=0;i<len;i++)
    {
        if(user[i] == ' ')
        {
            ispace = true;
            continue;
        }
        else if(ispace)
        {
            ispace = false;
            cntwo++;
            clean[cnt] = ' ';
            cnt++;
            clean[cnt] = user[i];
            cnt++;
            continue;
        }
        clean[cnt] = user[i];
        cnt++;
    }
    //display all output
    printf("Message in reverse: %s\n",revuser);
    printf("\n Message Analysis\nWords:%d\nVowels:%d\nConsonants:%d\nDigits:%d\nSpaces:%d\n",cntwo,cntvo,cntco,cntdi,cntsp);
    printf("Cleaned message (extra spaces removed): %s",clean);
    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

/**
*@brief Program to implement a Text and Data Analyzer
*@author Chinmay Mhaskar
*@date 15-11-2025
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //str1 to store string of characters, num to store 10 numbers, rev to store reversed 10 numbers
    char str1[100];
    int num[10],rev[10];
    //array freq to store frequency of each character in string, numfreq to store frequency of each number from 0 to 100
    int freq[256] = {0};
    int numfreq[100] = {0};
    //arr1 and arr2 to store 2 3x3 2D arrays, sum to store their sum, arrt to store their transpose and prod to store their product
    int arr1[3][3],arr2[3][3],sum[3][3],arrt[3][3],prod[3][3];
    //ask user to input string
    printf("Enter a string: ");
    fgets(str1,sizeof(str1),stdin);
    //len for storing length of string i and j to run for loop
    int len=0,i=0,j=0;
    //using for loop to check if each character is \0
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
    //print length of string
    printf("Length of string = %d\n",len);
    //isPalind flag to check if word is palindrome or not
    bool isPalind = true;
    //nlen to store len/2 , for checking palindrome
    int nlen = len/2;
    //check if palindrome using for loop
    for(i=0;i<nlen;i++)
    {
        if(str1[i] != str1[len-(i+1)])
                isPalind = false;
    }
    //print if palindrome or not
    if(isPalind)
        printf("String is palindrome");
    else
        printf("String is not palindrome");
    printf("\nCharacter frequencies:\n");
    //increment frequency of each character found
    for(i=0;i<len;i++)
    {
        freq[str1[i] - '\0']++;
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
    //take input of 10 numbers, ask user to only input numbers less than 100
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        if(num[i] >= 100)
        {
            printf("\n please enter a number less than 100");
            i--;
            continue;
        }
    }
    //store reversed array, followed by printing it
    printf("Reversed array: ");
    for(i=9;i>=0;i--)
    {
        rev[i] = num[9-i];
    }
    for(i=0;i<10;i++)
        printf("%d ",rev[i]);
    int temp = 0;
    //sorting array num to find second largest element
     for(i=9;i>=0;i--)
    {
       for(j=0;j<i;j++)
       {
           if(num[j] > num[j+1])
           {
               temp = num[j];
               num[j] = num[j+1];
               num[j+1] = temp;
           }
       }
    }
    printf("\nSecond largest element = %d\n", num[8]);
    //storing frequencies of each number, then printing them
    printf("Frequencies:\n");
    for(i=0;i<10;i++)
    {
        numfreq[num[i] - '\0']++;
    }
    for(i=0;i<100;i++)
    {
        if(numfreq[i] != 0)
             printf("%d occurs %d times\n",(i),numfreq[i]);
    }
    //ask user to input 1st 3x3 matrix
    printf("Enter 1st 3x3 matrix:\n");
    for(i = 0; i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
     //ask user to input 2nd 3x3 matrix
    printf("Enter 2nd 3x3 matrix:\n");
     for(i = 0; i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    //print sum of the two matrices
    printf("Matrix Addition\n");
    for(i = 0; i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of first matrix\n");
    //print transpose of matrix using for loop
    for(i = 0; i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arrt[i][j] = arr1[j][i];
            printf("%d ",arrt[i][j]);
        }
        printf("\n");
    }
    printf("Matrix Multiplication: \n");
    //calculate each element in prod using the following formula
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            prod[i][j] = arr1[i][0] * arr2[0][j] + arr1[i][1] * arr2[1][j] +  arr1[i][2] * arr2[2][j];
        }
    }
    //print each element in array prod
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%2d ",prod[i][j]);
        }
        printf("\n");
    }
    //print sparse matrix with row and col value
    printf("\nSparse Matrix (row col value):\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d %d %d\n",i,j,sum[i][j]);
        }
    }
    printf("\n2025300145_Chinmay_Mhaskar");
    return 0;
}

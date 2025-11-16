/**
*@brief Program to implement a student marks analysis system
*@author Chinmay Mhaskar
*@date 15-11-2025
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{   printf("2025300145_Chinmay_Mhaskar\n");
    //rlno to store 10 roll numbers,
    char rlno[10];
    //mks1 and mks2 to store two 3x2 2D arrays, sum to store their sum, trans to store its transpose, total to store total of each student
    int mks1[3][2],mks2[3][2],sum[3][2],trans[2][3],total[3];
    //array hist initialized to 0 to show histogram
    int hist[]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    //ispalind flag to store if palindrome or not
    bool isPalind = true;
    //i and j to run for loop, nlen to check palindrome, cnt initialized to -1 to show histogram, temp as a temporary variable
    int i = 0,j=0,len,nlen = 0,cnt = -1,temp = 0;
    //take roll number input
    printf("Enter roll number:");
    scanf("%s",&rlno);
    //calc length
    for(i=0;i<10;i++)
    {
        if(rlno[i] == '\0')
            break;
        len++;

    }
    //nlen for palindrome
    nlen = len/2;
    //check if palindrome if not set flag to false
    for(i=0;i<nlen;i++)
    {
        if(rlno[i] != rlno[len-(i+1)])
                isPalind = false;
    }
    //print if palindrome or not
    if(isPalind)
        printf("Roll Number %s is Palindrome",rlno);
    else
        printf("Roll Number %s is not Palindrome",rlno);
    //ask user to input marks
    printf("\nEnter marks for 3 students (2 subjects each):\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mks1[i][j]);
        }
    }
    //ask user to input second set of marks
    printf("\nEnter another set of marks (to add)\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mks2[i][j]);
            sum[i][j] = mks1[i][j] + mks2[i][j];
        }
    }
    //print sum of marks
    printf("\nSum of marks:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    //store and print transpose of sum matrix
    printf("\nTranspose of sum matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            trans[i][j] = sum[j][i];
            printf("%d ",trans[i][j]);

        }
        printf("\n");
    }
    //calculate total of each student
    for(i=0;i<3;i++)
    {
            total[i] = trans[0][i] + trans[1][i];
    }
    //print reversed totals of all students
    printf("\nReversed totals:");
    for(i=2;i>=0;i--)
    {
        printf("%d ",total[i]);

    }
    //print second largest total
    printf("\nSecond largest total=");
    if(total[0]>total[1])
    {
        if(total[1]>total[2])
            printf("%d",total[1]);
        else
            printf("%d",total[2]);
    }
    else
    {
        if(total[0]>total[2])
            printf("%d",total[0]);
        else
            printf("%d",total[2]);
    }
    //calculate and show histogram of totals
    printf("\n\nHistogram of Totals:\n");
    for(i=0;i<3;i++)
    {   temp = total[i];
        do
        {
            temp = temp-10;
            cnt++;
        }
        while(temp>0);
        hist[cnt] += 1;
        cnt = -1;
    }
    for(i=0;i<20;i++)
    {
        if(hist[i]!=0)
        {
            printf("%d-%d: %d\n",(i*10),((i*10)+9),hist[i]);
        }
    }
    //print sparse matrix with row col value
    printf("\nSparse Matrix (row col value)\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d %d %d\n",i,j,sum[i][j]);
        }
    }

        printf("\n2025300145_Chinmay_Mhaskar");
    return 0;
}

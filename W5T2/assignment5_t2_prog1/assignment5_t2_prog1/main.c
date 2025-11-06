#include <stdio.h>
#include <stdbool.h>

int main()
{   printf("2025300145_Chinmay_Mhaskar\n");
    char rlno[10];
    int mks1[3][2],mks2[3][2],sum[3][2],trans[2][3],total[3];
    int hist[]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    bool isPalind = true;
    int i = 0,j=0,len,nlen = 0,seclar = 0,cnt = -1,temp = 0;
    printf("Enter roll number:");
    scanf("%s",&rlno);

    for(i=0;i<10;i++)
    {
        if(rlno[i] == '\0')
            break;
        len++;
        printf("%c",rlno[i]);
    }
    nlen = len/2;
    for(i=0;i<nlen;i++)
    {
        if(rlno[i] != rlno[len-(i+1)])
                isPalind = false;
    }
    if(isPalind)
        printf("Roll Number %s is Palindrome",rlno);
    else
        printf("Roll Number %s is not Palindrome",rlno);

    printf("\nEnter marks for 3 students (2 subjects each):\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mks1[i][j]);
        }
    }
    printf("\nEnter another set of marks (to add)\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mks2[i][j]);
            sum[i][j] = mks1[i][j] + mks2[i][j];
        }
    }
    printf("Sum of marks:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

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
    for(i=0;i<3;i++)
    {
            total[i] = trans[0][i] + trans[1][i];
    }
    printf("Reversed totals:");
    for(i=2;i>=0;i--)
    {
        printf("%d ",total[i]);

    }
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
    printf("\nHistogram of Totals:\n");
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

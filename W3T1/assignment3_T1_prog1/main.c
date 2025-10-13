/**
*@brief Program to perform various operations on a number input, like checking even odd, checking if prime, finding factorial,
reversing the number and facility to edit the number as well
*@author Chinmay Mhaskar
*@date 13-10-2025
*/


#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int main()
{
    bool notExit = true, isprime = false;
    int num = 0,t=0,uid;
    printf("Welcome Chinmay Mhaskar,\n\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    int choice = 0, i = 0;
    printf("=======Number Operation Menu=======\n1. Check Even/Odd\n2. Check Prime\n3. Find Factorial\n4. Reverse the Number\n5. Enter New Number\n6. Exit");
    printf("\n--------------------\n");

    while(notExit)
    {
        printf("Enter your choice(1 to 6):");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            if(num%2==0)
                printf("%d is Even\n",num);
            else
                printf("%d is Odd\n",num);
            break;
        case 2:
            for(i = 2; i<num; i++)
            {
                if(num%i == 0)
                    isprime = true;

            }
            if(isprime)
                printf("%d is not prime\n",num);
            else
                printf("%d is prime\n",num);
            break;
        case 3:
            long fac = 1;
            //store value of n in temporary variable t
            t = num;
            //use while loop to store factorial while decrementing n (used as a counter)
            while(t>1)
            {
                fac *= t;
                t--;
            }

            printf("Factorial of %d is = %ld\n", num, fac);
            break;
        case 4:
            t = num;
            int r = 0,s=0;
            int cnt = 0, cntrev = 0;
            while(t>0)
            {
                t = t/10;
                cnt++;
            }
            t = num;
            while(t>0)
            {
                r = t % 10;
                s = s* 10 + r;
                t = t/10;
            }
            t=s;
            while(t>0)
            {
                t = t/10;
                cntrev++;
            }
            if(cnt!=cntrev)
                printf("Reverse of %d is %0*d\n",num,cnt,s);
            else
                printf("Reverse of %d is %d\n",num,s);

            break;
        case 5:
            printf("Enter new number:");
            scanf("%d",&num);
            break;
        case 6:
            printf("Chinmay Mhaskar, Please enter your UID to Exit:");
            scanf("%d",&uid);
            printf("Exiting Program...");
            notExit = false;
            break;

        }
    }

    return 0;
}

/**
*@brief Program to perform various operations on a number input, like checking even odd, checking if prime, finding factorial,
reversing the number and facility to edit the number as well
*@author Chinmay Mhaskar
*@date 13-10-2025
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{   //declare variables notExit to run while loop, isprime to store if number is prime or not
    bool notExit = true, isprime = false;

    //initialize num to store number input by user, t as temp variable, uid to store UID of user
    int num = 0,t=0,uid;

    //ask user to enter a number
    printf("Welcome Chinmay Mhaskar,\n\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    //initialize choice (1-5) and i to run for loop(s)
    int choice = 0, i = 0;

    //print number operation menu in proper format
    printf("\n=======Number Operation Menu=======\n1. Check Even/Odd\n2. Check Prime\n3. Find Factorial\n4. Reverse the Number\n5. Enter New Number\n6. Exit");
    printf("\n--------------------");

    //while loop keeps looping until flag notExit is set to false
    while(notExit)
    {   //ask user to input choice
        printf("\nEnter your choice(1 to 6):");
        scanf("%d",&choice);
        //based on choice entered, perform appropriate work in appropriate case
        switch(choice)
        {
        case 1:
            //checks if number is even or odd
            if(num%2==0)
                printf("%d is Even\n",num);
            else
                printf("%d is Odd\n",num);
            break;
        case 2:
            //checks if number is prime or not using for loop, sets flag to true if it is prime
            for(i = 2; i<num; i++)
            {
                if(num%i == 0)
                    isprime = true;

            }
            //prints if number is prime or not
            if(isprime)
                printf("%d is not prime\n",num);
            else
                printf("%d is prime\n",num);
            break;
        case 3:
            //initialize variable to store factorial
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
            //using t as a temporary variable
            t = num;
            //initialize r for extracting units digit of the number, s for storing reversed number
            int r = 0,s=0;
            //initialize cnt to store number of digits in original number, cntrev to store number of digits in reversed number
            int cnt = 0, cntrev = 0;
            //using while loop to count digits in num
            while(t>0)
            {
                t = t/10;
                cnt++;
            }
            //restoring temporary variable
            t = num;
            //using while loop to reverse number and store in s
            while(t>0)
            {
                r = t % 10;
                s = s* 10 + r;
                t = t/10;
            }
            //storing s in temporary variable
            t=s;
            //using while loop to count digits in reversed num
            while(t>0)
            {
                t = t/10;
                cntrev++;
            }
            //if no. of digits in original and reversed number aren't same, replaces remaining spaces with zeroes
            if(cnt!=cntrev)
                printf("Reverse of %d is %0*d\n",num,cnt,s);
            else
                printf("Reverse of %d is %d\n",num,s);

            break;
        case 5:
            //asks user to enter new number
            printf("Enter new number:");
            scanf("%d",&num);
            break;
        case 6:
            //program exit protocol
            printf("Chinmay Mhaskar, Please enter your UID to Exit:");
            scanf("%d",&uid);
            printf("\nExiting Program...");
            notExit = false;
            break;

        }
    }

    return 0;
}

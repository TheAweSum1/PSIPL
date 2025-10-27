/**
*@brief A menu driven program that allows user to deposit and withdraw money , show last 5 transactins using array and check the balance in the account
*@author Chinmay Mhaskar
*@date 27-10-25
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{

    printf("2025300145_Chinmay_Mhaskar\n");
     //declare currchoice for choice in switch case, notExit for running while loop
     /*initialize accbal to store balance of account, i for running for loop, chararr a character array to store last 5 withdraw/deposits
     balarr to store last 5 amounts withdrawn or deposited
     */
    float accbal = 10000.0f;
    int currchoice = 0,cntr = 0,i=0;
    bool notExit = true;
    char chararr[5];
    float balarr[5];
    float depamt, witamt;
    //while loop iterates until flag notExit is set to false by user entering 5
    while(notExit)
    {   //ask user to input choice (1-5) according to menu
        printf("===== ATM Menu =====\n1. Check balance\n2. Deposit Money\n3. Withdraw Money\n4. Print Last 5 Transactions\n5. Exit\n");
        printf("\nEnter choice: ");
        scanf("%d", &currchoice);
        //use switch case to select correct case according to number input by user
        switch(currchoice)
        {
        case 1:
            //print current balance
            printf("Current Balance = %.2f\n",accbal);
            break;

        case 2:
            //ask user to input amount to be deposited
            printf("Enter amount to deposit:");
            scanf("%f",&depamt);
            //check if amount to be deposited is positive or not
            if(depamt<=0)
                printf("Invalid amount. Deposit must be positive.");
            else
            {
                //if counter is greater than 5, using for loop to shift each element
                if(cntr>=5)
                {   for(i=0;i<4;i++)
                    {
                        chararr[i] = chararr[i+1];
                        balarr[i] = balarr[i+1];
                    }
                    //storing new data in newly freed up array element
                    balarr[4] = depamt;
                    chararr[4] = 'D';

                }
                else
                {
                    //if not greater than 5, store at location cntr and increment counter
                    chararr[cntr] = 'D';
                    balarr[cntr] = depamt;
                    cntr++;
                }
                //update account balance and inform user about new balance
                accbal += depamt;
                printf("Deposited %.2f. New Balance = %.2f\n", depamt, accbal);
            }
            break;

        case 3:
            //ask user to input amount to be withdrawn
            printf("Enter amount to withdraw:");
            scanf("%f",&witamt);
            //check if account has enough balance
            if(witamt>accbal)
                printf("Insufficient balance\n");
            else if(witamt<=0)
                printf("Enter a positive number to withdraw\n");
            else
            {   //if counter is greater than 5, using for loop to shift each element
                if(cntr>=5)
                {   for(i=0;i<4;i++)
                    {
                        chararr[i] = chararr[i+1];
                        balarr[i] = balarr[i+1];
                    }
                    //storing new data in newly freed up array element
                    balarr[4] = witamt;
                    chararr[4] = 'W';

                }
                else
                {
                    //if not greater than 5, store at location cntr and increment counter
                    chararr[cntr] = 'W';
                    balarr[cntr] = witamt;
                    cntr++;
                }
                //update account balance and inform user about new balance
                accbal -= witamt;
                printf("Withdrawn %.2f. New Balance = %.2f\n", witamt, accbal);
            }
            break;

        case 4:
            printf("Last 5 Transactions (most recent first):\n");
            if(cntr>=5)
               //print last 5 transactions
                printf("Type\tAmount\n");
                for(i=(cntr-1);i>=0;i--)
                {
                    printf("%c\t%.2f\n",chararr[i],balarr[i]);
                }

            break;
        case 5:
            //Inform user exiting the program
            printf("Thank you for using ATM. Goodbye!\n");
            notExit = false;
            break;
        default:
            //default case for error handling
            printf("Invalid Choice! Please select from 1-5.\n");
            continue;
        }
    }
      printf("2025300145_Chinmay_Mhaskar\n");
      return 0;
}

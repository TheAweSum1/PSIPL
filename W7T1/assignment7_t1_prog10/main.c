/**
*@brief A menu driven program that stimulates a simple bank account using functions
*@author Chinmay Mhaskar
*@date 27-10-25
*/
#include <stdio.h>
#include <stdbool.h>
/**
*@brief function to deposit money using pointer
*@author Chinmay Mhaskar
*@date 23-11-25
*@param *currbal pointer pointing to current balance
*@param tobedep used to store amount to be deposited
*/
void depositmoney(int *currbal, int tobedep)
{
    //add value to be deposited to pointer pointing to currbal
    *currbal = *currbal + tobedep;
    //print amount deposited and new balance
    printf("Deposited %d. New Balance = %d\n",tobedep,*currbal);

}
/**
*@brief function to withdraw money using pointer
*@author Chinmay Mhaskar
*@date 23-11-25
*@param *currbal pointer pointing to current balance
*@param tobewit used to store amount to be withdrawn
*/
void withdrawmoney(int *currbal, int tobewit)
{
    //subtract value to be withdrawn from pointer pointing to currbal
    *currbal = *currbal - tobewit;
    //print amount withdrawn and new balance
    printf("Withdrawn %d. New Balance = %d\n",tobewit,*currbal);

}
int main()
{

    printf("2025300145_Chinmay_Mhaskar\n");
     //declare currchoice for choice in switch case, notExit for running while loop
    int currchoice = 0,i=0, depamt = 0, witamt = 0;
    //initialize depamt and witamt to store amount to be deposited and withdrawn respectively
    bool notExit = true;
    //initialize balance to 1000
    int balance = 1000;

    //while loop iterates until flag notExit is set to false by user entering 5
    while(notExit)
    {   //ask user to input choice (1-5) according to menu
        printf("Bank Menu\n1. Deposit\n2. Withdraw\n3.Exit\n");
        printf("\nEnter choice: ");
        scanf("%d", &currchoice);
        //use switch case to select correct case according to number input by user
        switch(currchoice)
        {
        case 1:
            //ask user to enter amount to be deposited
            printf("Enter amount");
            scanf("%d",&depamt);
            //call function depositmoney passing address of balance, and value of depamt
            depositmoney(&balance,depamt);
            break;

        case 2:
            printf("Enter amount");
            scanf("%d",&witamt);
            if(witamt > balance)
            {
                printf("Insufficient balance. Enter amount less than %d",balance);
                break;
            }
            //call function withdrawmoney passing address of balance, and value of witamt
            withdrawmoney(&balance,witamt);
            break;

        case 3:
            //set notExit to false, and break
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

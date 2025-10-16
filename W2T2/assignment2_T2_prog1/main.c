#include <stdio.h>
#include <stdbool.h>

int main()
{
    //declare variable uid to store UID, currchoice for choice in switch case, notExit for while loop
    long uid;
    int currchoice = 0;
    bool notExit = true;
    //declare pencount notecount etc to store quantity of item bought by user, declare notetotal erasertotal etc to store total cost of each item
    //initialize grandtotal for final price that needs to be paid
    int penCount = 0, noteCount = 0, eraserCount = 0, pentotal = 0, notetotal = 0, erasertotal = 0,grandtotal;
    //asking user to input UID
    printf("Kindly enter your password(UID) to begin shopping: ");
    scanf("%ld",&uid);
    printf("\nWelcome Chinmay Mhaskar, \n\n");
    //describing all items available, their index number and price of each item
    printf("------- Menu ------ \n");
    printf("1. Buy Pen (Rs. 10) \n2. Buy Notebook (Rs.40) \n3. Eraser (Rs.5) \n4. Generate Bill \n5. Exit \n\n");
    //while loop iterates until flag notExit is set to false by user
    while(notExit)
    {   //ask user to input choice (1-5)
        printf("Enter your choice (1-5) based on the menu options: ");
        scanf("%d", &currchoice);
        //use switch case to select correct case according to number input by user
        switch(currchoice)
        {
        case 1:
            //inform user that a pen has been bought, increase pencount by one
            printf("You bought a Pen\n\n");
            penCount++;
            break;

        case 2:
            //inform user that a notebook has been bought, increase notebookcount by one
            printf("You bought a Notebook\n\n");
            noteCount++;
            break;

        case 3:
            //inform user that an eraser has been bought, increase erasercount by one
            printf("You bought a Eraser\n\n");
            eraserCount++;
            break;

        case 4:
            //calculate price of each item, and grandtotal
            pentotal = penCount * 10;
            erasertotal = eraserCount * 5;
            notetotal = noteCount * 40;
            grandtotal = erasertotal + notetotal + pentotal;
            //print bill and show quantity price and grandtotal of all items
            printf("\n\n===========================Bill===========================\n");
            printf("Item \t\t Qty \t\t Price \t\t Total \n");
            printf("Pen\t\t %d \t\t 10 \t\t %d \n",penCount,pentotal);
            printf("Notebook\t %d \t\t 10 \t\t %d \n",noteCount,notetotal);
            printf("Eraser\t\t %d \t\t 10 \t\t %d \n",eraserCount,erasertotal);
            printf("----------------------------------------------------------\n");
            printf("Grand Total = %d \n",grandtotal);
            printf("==========================================================\n\n");
            break;
        case 5:
            //Thank the user for shopping, set flag notExit to false and hence exit while loop
            printf("\n\t *****Thank you for shopping, Chinmay. We look forward to your next visit!***** \n\n");
            notExit = false;
            break;
        default:
            //
            printf("Invalid Choice! \nPlease enter choice (1-3) to add item, 4 to Gererate bill & 5 to exit\n \n");
            break;
        }

    }
}

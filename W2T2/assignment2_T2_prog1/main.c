#include <stdio.h>
#include <stdbool.h>

int main()
{   long uid;
    int currchoice = 0;
    bool notExit = true;
    int penCount = 0, noteCount = 0, eraserCount = 0, pentotal = 0, notetotal = 0, erasertotal = 0,grandtotal;
    printf("Kindly enter your password(UID) to begin shopping: ");
    scanf("%ld",&uid);
    printf("%d\n",uid);
    printf("Chinmay Mhaskar \n");

    printf("------- Menu ------ \n");
    printf("1. Buy Pen (Rs. 10) \n2. Buy Notebook (Rs.40) \n3. Eraser (Rs.5) \n4. Generate Bill \n5. Exit \n");

    while(notExit)
    {
        printf("Enter your choice (1-5) based on the menu options: ");
        scanf("%d", &currchoice);
        switch(currchoice)
        {
        case 1:
            printf("You bought a Pen\n");
            penCount++;
            break;

        case 2:
            printf("You bought a Notebook\n");
            noteCount++;
            break;

        case 3:
            printf("You bought a Eraser\n");
            eraserCount++;
            break;

        case 4:
            pentotal = penCount * 10;
            erasertotal = eraserCount * 5;
            notetotal = noteCount * 40;
            grandtotal = erasertotal + notetotal + pentotal;
            printf("===========================Bill===========================\n");
            printf("Item \t\t Qty \t\t Price \t\t Total \n");
            printf("Pen\t\t %d \t\t 10 \t\t %d \n",penCount,pentotal);
            printf("Notebook\t %d \t\t 10 \t\t %d \n",noteCount,notetotal);
            printf("Eraser\t\t %d \t\t 10 \t\t %d \n",eraserCount,erasertotal);
            printf("----------------------------------------------------------\n");
            printf("Grand Total = %d \n",grandtotal);
            printf("==========================================================\n");
            break;
        case 5:
            printf("\t *****Thank you for shopping, Chinmay. We look forward to your next visit!***** \n\n");
            notExit = false;
            break;
        default:
            printf("Invalid Choice! \nPlease enter choice (1-3) to add item, 4 to Gererate bill & 5 to exit\n \n");
            break;
        }

    }
}

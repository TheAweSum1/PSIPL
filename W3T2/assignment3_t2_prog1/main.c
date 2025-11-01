#include <stdio.h>
#include <stdbool.h>
/**
*@brief This program performs operations on temperature entered in celsius, as well as checking water state at that temperature
*@author Chinmay Mhaskar
*@date 16-10-25
*/
int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //declare currchoice for choice in switch case, notExit for running while loop
    int currchoice = 0;
    bool notExit = true;

    //declare cels fahr and kelv to store temperature in celsius, Fahrenheit and kelvin respectively
    float cels = 0, fahr = 0, kelv = 0;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cels);
    //while loop iterates until flag notExit is set to false by user entering 5
    while(notExit)
    {   //ask user to input choice (1-5) according to menu
        printf("\n===== Temperature Menu =====\n");
        printf("1. Convert to Fahrenheit\n2. Convert to Kelvin\n3. Check water state\n4. Enter New Temperature\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &currchoice);
        //use switch case to select correct case according to number input by user
        switch(currchoice)
        {
        case 1:
            //calculate and store value of temperature in Fahrenheit, display it
            fahr = ((cels * 9.0)/5.0)+ 32.0;
            printf("%.2f%cC = %.2f%cF\n", cels , 0xF8,fahr, 0xF8);
            break;

        case 2:
            //calculate and store value of temperature in Kelvin, display it
            kelv = cels + 273.15;
            printf("%.2f%cC = %.2f K\n", cels , 0xF8,kelv);
            break;

        case 3:
            //Using if else if to check if water at that temperature in solid, liquid or gaseous phase
            if(cels > 100)
                printf("At %.2f%cC, water is in Gaseous State\n", cels, 0xF8);
            else if(cels < 0)
                printf("At %.2f%cC, water is in Solid State\n", cels, 0xF8);
            else
                printf("At %.2f%cC, water is in Liquid State\n", cels, 0xF8);
            break;

        case 4:
            //ask user to input new temperature in celsius
            printf("Enter new temperature in Celsius: ");
            scanf("%f",&cels);
            break;

        case 5:
            //Inform user exiting the program
            printf("Exiting program... Goodbye!\n");
            notExit = false;
            break;

        default:
            //default case for error handling
            printf("Invalid Choice! \nPlease enter choice (1-2) to convert temp, 3 to check water state, 4 to enter new temperature & 5 to exit\n \n");
            break;
        }
    }
      printf("2025300145_Chinmay_Mhaskar\n");
    return 0;
}



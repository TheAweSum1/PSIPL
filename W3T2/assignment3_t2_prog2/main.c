#include <stdio.h>
#include <stdbool.h>

int main()
{   bool notExit = true;
    float power = 0, temp = 0;
    int priority = 0;
    while(notExit)
    {
    printf("Enter power consumption (kW): ");
    scanf("%f", &power);
    printf("Enter temperature (%cC): ",0xF8);
    scanf("%f", &temp);
    printf("Enter machine priority (1=High, 2=Medium, 3=Low, or 0 to exit): ");
    scanf("%d", &priority);
    printf("\n\t--------------------------------------------------------\n\t|\t\t  Machine Report\t\t\t|\n\t--------------------------------------------------------\n");
    printf("\t|Power:   \t\t %.2f kW\t\t\t|\n",power);
    printf("\t|Temperature:   \t %.2f %cC\t\t\t|\n",temp, 0xF8);
    if(priority == 1)
        printf("\t|Priority: \t\t High\t\t\t\t|\n");
    else if(priority == 2)
        printf("\t|Priority: \t\t Medium  \t\t\t|\n");
    else if(priority == 3)
        printf("\t|Priority: \t\t Low     \t\t\t|\n");
    else if(priority == 0)
        notExit = false;
    else
        printf("Enter 1 2 3 for priority or 0 to exit program only");
    printf("\t|Action:        \t \tX");




    }
    return 0;
}

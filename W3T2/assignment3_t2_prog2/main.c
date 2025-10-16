#include <stdio.h>
#include <stdbool.h>

int main()
{   bool notExit = true;
    float power = 0, temp = 0;
    int priority = 0, flag = 0;
    while(notExit)
    {
    printf("Enter power consumption (kW): ");
    scanf("%f", &power);
    printf("Enter temperature (%cC): ",0xF8);
    scanf("%f", &temp);
    printf("Enter machine priority (1=High, 2=Medium, 3=Low, or 0 to exit): ");
    scanf("%d", &priority);
    if(temp>100)
        flag = 0;
    else if(priority == 1)
        flag = 2;
    else if(priority == 2 && power > 80)
        flag = 1;
    else if(priority ==2 && power <= 80)
        flag = 2;
    else if(priority == 3 && power > 60)
        flag = 1;
    else
        flag = 2;
    printf("\n\t---------------------------------------------------------\n\t|\t\t  Machine Report\t\t\t|\n\t---------------------------------------------------------\n");
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
    printf("\t|Action:       \t\t ");
    if(flag == 0)
        printf("SHUTDOWN (Overheat detected)   |\n");
    else if(flag == 1)
        printf("STANDBY (High Power Load)      |\n");
    else
        printf("RUNNING (Normal Operation)     |\n");
    printf("\t---------------------------------------------------------\n");
    }
    return 0;
}

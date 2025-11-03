#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool notExit = true;
    int currchoice = 0,vehtype, vregno,vexityp,vregexit,totfees=0,cnt=0;
    float pc;
    printf("Enter total parking capacity: ");
    scanf("%f",&pc);
    int t = pc*2;
    int vtype[t],vregnum[t];
    printf("===== Parking Lot Menu =====\n1. Vehicle Entry\n2. Vehicle Exit\n3. Show Current Status\n4. Show Total Collection\n5. End of Day Summary and Exit\n");
    while(notExit)
    {

        printf("Enter your choice:");
        scanf("%d",&currchoice);

        switch(currchoice)
        {
        case 1:
            if(pc<=0)
            {
                printf("Parking Full! Entry Denied.\n");
                break;
            }
            printf("Enter vehicle type (1-Car, 2-Bike):");
            scanf("%d",&vtype[cnt]);
            if((pc-1)<0)
            {
                printf("Parking Full! Entry Denied.\n");
                break;
            }
            if(vtype[cnt] == 1)
                {
                    pc = pc - 1.0;
                    totfees += 50;
                    printf("Enter vehicle Registration Number:");
                    scanf("%d",vregnum[cnt]);
                    printf("Car Parked successfully. Fee Rs.50 collected.\n");
                }
            else if(vtype[cnt] == 2)
                {
                    totfees += 20;
                    pc = pc - 0.5;
                    printf("Enter vehicle Registration Number:");
                    scanf("%d",vregnum[cnt]);
                    printf("Bike Parked successfully. Fee Rs.20 collected.\n");
                }
            else
            {
                printf("Invalid vehicle type! Please choose 1 for Car or 2 for Bike to Park the vehicle.");
                break;
            }

            printf("Enter vehicle Registration Number:");
            scanf("%d",&vregnum[cnt]);
            printf("Car Parked successfully. Fee Rs.50 collected.\n");
            cnt++;
            break;
        case 2:
            printf("Enter vehicle type you want to exit (1-Car, 2-Bike):");
            scanf("%d",&vexityp);
            printf("Enter vehicle Number you want to exit: ");
            scanf("%d",vregexit);
            if(vregexit == vregno)
                printf("Car exited successfully.\n");
            else
                printf("Vehicle %d not found in the parking lot.",vregexit);
        default:
            break;
        }
    }
    return 0;
}

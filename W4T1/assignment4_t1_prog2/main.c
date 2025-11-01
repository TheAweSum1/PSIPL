#include <stdio.h>
#include <stdbool.h>

int main()
{   bool notExit = true;
    int nstud = 0,cnt = 0,numsrch=0,cnt2=0,i=0,currchoice=0;
    float avg = 0,pcnt = 0;
    printf("Enter number of students (max 50):");
    scanf("%d",&nstud);
    int rlno[nstud],marks[nstud];
    float total[nstud];
    char name[1024];
    char grade[nstud];
    int marksall[nstud*5];
    while(cnt<nstud)
    {
        printf("Enter details for Student %d:\n",cnt+1);
        printf("Roll Number:");
        scanf("%d",&rlno[cnt]);
        printf("Name:");
        scanf("%s", &name);

        for(i=0;i<5;i++)
        {
            printf("Enter marks of Subject %d:",(i+1));
            scanf("%d",&marksall[cnt2]);
            total[cnt] += (float)marksall[cnt2];
            cnt2++;

        }
        pcnt = (float)(total[cnt]/5);
        if(pcnt>=75)
            grade[cnt] = 'A';
        else if(pcnt>=60)
            grade[cnt] = 'B';
        else if(pcnt>=50)
            grade[cnt] = 'C';
        else if(pcnt>=40)
            grade[cnt] = 'D';
        else
            grade[cnt] = 'F';
        cnt++;
    }

    while(notExit)
    {
        printf("==== STUDENT REPORT MENU ====\n1. Display All Student Details\n2. Search Student by Roll Number\n3. Display Topper of the Class\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&currchoice);
        switch(currchoice)
        {
        case 1:
                printf("Roll   Total   Percent  Grade\n");
                for(i=0;i<nstud;i++)
                {
                    printf("%d\t%.2f  %.2f  %c\n",(i+1),total[i],(total[i]/5),grade[i]);
                }
                break;
        case 2:
                printf("Enter your choice:");
                scanf("%d",&numsrch);

                break;
        case 3:
                break;
        case 4:
                break;
        default:
                break;
        }

    }

    return 0;
}

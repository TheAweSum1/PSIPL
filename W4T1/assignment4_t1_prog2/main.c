/**
*@brief Program for Student Report card system which shows topper, all student details, and can search for a user
*@author Chinmay Mhaskar
*@date 02-11-2025
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    /* Initializing notExit for running while loop, nstud for no. of students, numsrch to store num to be searched,
    topperindex to store index position of topper, i and j to run for loops, currchoice to take user input, topper
    to store marks of the topper, pcnt to store percentage of marks of the user*/
    bool notExit = true;
    int nstud = 0,numsrch=0,topperindex = 0,j=0,i=0,currchoice=0,topper=0;
    float pcnt = 0;
    printf("2025300145 Chinmay Mhaskar\n");
    printf("Enter number of students (max 50):");
    scanf("%d",&nstud);
    /*Declaring array rlno to store rollnumbers of each student, total to store total marks of each student, name to store student name,
    grade to store grade of each student, marksall to temporarily store marks of 5 subjects*/
    int rlno[nstud];
    float total[nstud];
    char name[1024];
    char grade[nstud];
    int marksall[5];
    /*for loop to take input of marks and number of students*/
    for(i =0;i<nstud;i++)
    {
        printf("\nEnter details for Student %d:\n",i+1);
        printf("Roll Number:");
        scanf("%d",&rlno[i]);
        printf("Name:");
        scanf("%s", &name);
        total[i] = 0;
        for(j=0;j<5;j++)
        {
            printf("Enter marks of Subject %d: ",(j+1));
            scanf("%d",&marksall[j]);
            total[i] += (float)marksall[j];
        }
        pcnt = (float)(total[i]/5);
        /*assign appropriate grade according to percentage marks*/
        if(pcnt>=75)
            grade[i] = 'A';
        else if(pcnt>=60)
            grade[i] = 'B';
        else if(pcnt>=50)
            grade[i] = 'C';
        else if(pcnt>=40)
            grade[i] = 'D';
        else
            grade[i] = 'F';

    }
    /*while loop to display menu till user exits*/
    while(notExit)
    {   /*Display user menu and take input of user choice*/
        printf("\n==== STUDENT REPORT MENU ====\n1. Display All Student Details\n2. Search Student by Roll Number\n3. Display Topper of the Class\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&currchoice);
        /*switch case based on user choice*/
        switch(currchoice)
        {
        case 1:
                /*print all student details*/
                printf("Roll\tTotal\tPercent\tGrade\n");
                for(i=0;i<nstud;i++)
                {
                    printf("%d\t%.2f\t%.2f\t%c\n",(i+1),total[i],((float)total[i]/5),grade[i]);
                }
                break;
        case 2:
                /*Search student by roll number*/
                printf("Enter Roll Number to Search: ");
                scanf("%d",&numsrch);
                bool isfound=false;
                for(i=0;i<nstud;i++)
                {
                    if(numsrch == rlno[i])
                    {
                        isfound = true;
                        break;
                    }
                }
                if(isfound)
                     printf("\nStudent Found!\nRoll: %d\nTotal: %.2f\nPercentage: %.2f\nGrade: %c\n",rlno[i],total[i],((float)total[i]/5),grade[i]);
                else
                    printf("\nStudent with roll no. %d not found\n",numsrch);

                break;
        case 3:
                /*Find topper of the class*/
                for(i=0;i<nstud;i++)
                {
                    if(topper<total[i])
                    {
                        topperindex = i;
                        topper = total[i];
                    }
                }
                /*Print topper of the class with percentage grade and roll no*/
                printf("Topper of the Class:\nRoll:%d\nPercentage: %.2f\nGrade: %c\n",rlno[topperindex],(total[topperindex]/5),grade[topperindex]);

                break;
        case 4:
                /*inform user about exiting program*/
                printf("Exiting program...\n");
                notExit = false;
                break;
        default:
                /*error handling*/
                printf("Invalid choice! Try again.\n");
                break;
        }

    }
    printf("\n2025300145 Chinmay Mhaskar");

    return 0;
}

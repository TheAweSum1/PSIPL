#include <stdio.h>
#include <stdlib.h>

int main()
{   int rollno, sub1, sub2, sub3, nstud = 0;
    printf("Enter Roll Number: ");
    scanf("%d" , &rollno);
    printf("Enter marks in 3 subjects: ");
    scanf("%d %d %d",&sub1, &sub2, &sub3);
    float total = 1.00*(sub1 + sub2 + sub3);
    float avg = total/3;
    float prcnt = avg;
    char grade = ' ';
    printf("\n --- Result --- \n");
    printf("Roll No: %d",rollno);
    if(rollno % 2 != 0)
        printf(" (Odd)\n");
    else
        printf(" (Even)\n");
    if(prcnt >= 75.00)
        grade = 'A';
    else if(prcnt >= 60.00)
        grade = 'B';
    else if(prcnt >= 50.00)
        grade = 'C';
    else if(prcnt >= 40.00)
        grade = 'D';
    else
        grade = 'F';

    printf("Marks: %d, %d, %d\n", sub1 , sub2 , sub3);
    printf("Total: %.2f\n",total);
    printf("Average: %.2f\n",avg);
    printf("Percentage: %.2f%%\n", prcnt);
    printf("Grade: %c \n",grade);
    printf("No. of students processed %d" , ++nstud);

    return 0;
}

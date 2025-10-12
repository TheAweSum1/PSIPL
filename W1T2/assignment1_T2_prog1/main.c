#include <stdio.h>
int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    // declare rollno, subject 1 2 and 3, and count of no. of students processed
    int rollno, sub1, sub2, sub3, nstud = 0;
    //initialize grade given to student
    char grade = ' ';

    //ask user to input roll number and marks in 3 subjects
    printf("Enter Roll Number: ");
    scanf("%d" , &rollno);
    printf("Enter marks in 3 subjects: ");
    scanf("%d %d %d",&sub1, &sub2, &sub3);

    //calculate total marks, average, and percentage of marks
    float total = 1.00*(sub1 + sub2 + sub3);
    float avg = total/3;
    float prcnt = avg;
    //print the result with Roll no.
    printf("\n --- Result --- \n");
    printf("Roll No: %d",rollno);
    if(rollno % 2 != 0)
        printf(" (Odd)\n");
    else
        printf(" (Even)\n");
    //allot grade A to E on the basis of percentage of marks
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
    //print marks, total marks, average, percentage, grade alloted, & total number of students processed
    printf("Marks: %d, %d, %d\n", sub1 , sub2 , sub3);
    printf("Total: %.2f\n",total);
    printf("Average: %.2f\n",avg);
    printf("Percentage: %.2f%%\n", prcnt);
    printf("Grade: %c \n",grade);
    printf("No. of students processed %d \n" , ++nstud);

    printf("2025300145_Chinmay_Mhaskar\n");
    return 0;
}

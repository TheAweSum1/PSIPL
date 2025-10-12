#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Declaring integer variables for ID and employee count, initializing character variable for grade
    char grade = ' ';
    int empid = 0, nemployee = 0;
    // Initializing HRA, DA and tax rate, as well as basic salary.
    float HRA_RATE = 0.20, DA_RATE = 0.10, basic = 0.00, taxrate = 0.00;
    // ask user to input employee id and basic salary
    printf("Enter Employee ID: ");
    scanf("%d", &empid);
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
    //calculating HRA, DA and Gross salary
    float hra = basic * HRA_RATE;
    float da = basic * DA_RATE;
    float gross = basic + hra + da;

    //checking if gross salary is greater than 50000 for taxation
    if(gross>50000)
        taxrate = 10.00;
    //calculating gross salary after tax
    gross = gross - (taxrate*gross*0.01);

    //assigning grade to employee based on salary using ternary operator
    grade = (gross>=60000) ? 'A' : ((gross >= 50000) ? 'B' : ((gross>= 40000) ? 'C' : 'D'));

    //print employee id, basic salary, HRA, DA, Tax, Gross Salary, Grade, and Total Employees Processed
    printf("\n--- Payroll Slip ---\n");
    printf("Employee ID: %d", empid);
    if(empid%2==0) // Check if the Employee ID is even or odd.
        printf(" (Even) \n");
    else
        printf(" (Odd) \n");
    printf("Basic Salary: %.2f \n", basic);
    printf("HRA: %.2f \n",hra);
    printf("DA: %.2f \n", da);
    printf("Tax: %.2f \n", taxrate);
    printf("Gross Salary: %.2f \n", gross);
    printf("Grade: %c \n", grade);
    printf("Total Employees Processed: %d \n", ++nemployee);

    return 0;
}

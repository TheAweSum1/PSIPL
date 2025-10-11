#include <stdio.h>
#include <stdlib.h>

int main()
{
    int empid = 0;
    float HRA_RATE = 0.20;
    float DA_RATE = 0.10;
    float basic = 0.00;
    printf("Enter Employee ID:");
    scanf("%d", &empid);
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
    float hra = basic * HRA_RATE;
    float da = basic * DA_RATE;
    float gross = basic + hra + da;

    printf("\n--- Payroll Slip ---\n");
    printf("Employee ID: %d", empid);
    printf("Basic Salary: %.2f", basic);
    printf("HRA: %.2f",hra);
    printf("DA: %.2f", da);
    printf("Gross Salary: %.2f", gross);




    return 0;
}

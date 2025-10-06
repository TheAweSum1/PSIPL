/*
 * 5. Write a C program to input marks of three subjects and check
 *    whether the student has passed (all marks >= 40) using
 *    logical operators (&&, ||, !).
 */
#include <stdio.h>
#include <stdbool.h>
int main()
{
    // Ask user to input marks of 3 subjects and take input of them one by one, followed by storing them in variables sub1 2 and 3 respectively
    int sub1, sub2, sub3;
    printf("Enter marks of 3 subjects:");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    
    //Use if statement to ensure marks in every subject are atleast greater than or equal to 40 to pass
    if(sub1 >= 40 && sub2 >=40 && sub3 >= 40)
    {
         printf("Passed");
    }
        
    //If not, person will have failed
    else
    {
         printf("Failed");
    }
    return 0;
}

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int sub1, sub2, sub3;
    printf("Enter marks of 3 subjects:");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    // Ask user to input marks of 3 subjects and take input of them one by one, followed by storing them in variables sub1 2 and 3 respectively
    if(sub1 >= 40 && sub2 >=40 && sub3 >= 40)
    {
         printf("Passed");
    }
    //Use if statement to ensure marks in every subject are atleast greater than or equal to 40 to pass
    else
    {
         printf("Failed");
    }
    //If not, person will have failed
    return 0;
}

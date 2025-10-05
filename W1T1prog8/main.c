/*
 * 8. Write a C program to input a number and check whether it is even or odd
 *    using the conditional operator (?:).
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{   //declare an integer
    int a;
    //take input from user
    printf("Enter a number: ");
    scanf("%d", &a);

    //check and print if its odd or even
    printf(
    (a % 2 == 1)
    ?
    "Odd\n"
    :
    "Even\n");

    return 0;
}

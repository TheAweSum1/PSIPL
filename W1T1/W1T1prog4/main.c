/*
 * 4. Write a C program to input two numbers and check which one is greateror if they are equal using ternary operator.
 */
#include <stdio.h>
#include <stdbool.h>
int main()
{

    printf("2025300145_Chinmay_Mhaskar\n");
    //declare two numbers
    int num1, num2;

    //taking input of two numbers
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);

    // use ternary operator to store the greater of the two numbers in greaternum
    int greaternum = (num1>num2) ? num1 :num2;

    //use ternary operator to check if num1 is equal to num 2. If it is, then the fact is printed to the console, else the greater of the two is specified
    (num1 == num2) ?
    (printf("%d is equal to %d", num1, num2))
    :
    (printf("%d is greater than %d", greaternum, (num1 + num2 - greaternum)));

    printf("\n2025300145_Chinmay_Mhaskar\n");
    return 0;

}


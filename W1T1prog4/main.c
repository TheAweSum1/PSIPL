#include <stdio.h>
#include <stdbool.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2); //Ask for two numbers and take two numbers num1 and num2 as input

    int greaternum = (num1>num2) ? num1 :num2; // use ternary operator to store the greater of the two numbers in greaternum
    (num1 == num2) ? (printf("%d is equal to %d", num1, num2)) :(printf("%d is greater than %d", greaternum, (num1 + num2 - greaternum)));
    //use ternary operator to check if num1 is equal to num 2. If it is, then the fact is printed to the console, else the greater of the two is specified

    return 0;

}


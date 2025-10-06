/* 
 * 7. Write a C program to demonstrate increment (++) and decrement (--)
 *    operators in both prefix and postfix forms. Start with a variable
 *    'a' initialized to value 5.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{   int a;
    // take input of original value
    printf("Original value:");
    scanf("%d", &a);
    //print all increment and decrement values according to instruction
    printf("Post-Increment: %d \n", a++);
    printf("After post-increment %d\n", a);
    printf("Pre-increment %d\n", ++a);
    printf("Post-decrement %d\n", a--);
    printf("After post-decrement %d\n", a);
    printf("Pre-decrement %d\n", --a);

}

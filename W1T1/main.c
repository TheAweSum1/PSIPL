/*
 * 6. Write a C program that demonstrates compound assignment operators
 *    (i.e. +=, -=, *=, /=, %=) with an integer variable. Consider a
 *    variable 'a' initialised to value 10.
 */
#include <stdio.h>
#include <stdbool.h>

int main()
{   //declare a
    int a = 0;
    //Take input of a from user
    printf("Initial value: ");
    scanf("%d", &a);
    //use of ternary operator like +=, -=, %= etc to add , subtract, modulus respectively the given value to a and store it back into a
    printf("After += 5: %d \n", (a+=5));
    printf("After -= 3: %d \n", (a-=3));
    printf("After *= 2: %d \n", (a*=2));
    printf("After /= 4: %d \n", (a/=4));
    printf("After %= 3: %d \n", (a%=3));

    return 0;
}

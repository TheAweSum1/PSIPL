#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 0;
    printf("Initial value: ");
    scanf("%d", &a);
    //Take input of initial value from user
    printf("After += 5: %d", (a+=5));
    printf("After -= 3: %d", (a-=3));
    printf("After = 2: %d", (a=2));
    printf("After /= 4: %d", (a/=4));
    printf("After %= 3: %d", (a%=3));
    //use of ternary operator like +=, -=, %= etc to add , subtract, modulus respectively the given value to a and store it back into a
    return 0;
}

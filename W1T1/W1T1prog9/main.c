#include <stdio.h>
#include <stdlib.h>

int main()
{   int num1, num2;
    //take input of the two numbers
    printf("Enter two integers:");
    scanf("%d%d", &num1, &num2);
    //print each bitwise operation and shift respectively
    printf("Bitwise AND: %d \n",(num1 & num2));
    printf("Bitwise OR: %d \n",(num1| num2));
    printf("Bitwise XOR: %d \n",(num1 ^ num2));
    printf("Left Shift a<<1: %d \n",(num1<<1));
    printf("Right Shift a>>1: %d \n",(num1>>1));

    return 0;
}

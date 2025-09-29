#include <stdio.h>

int main()
{
    int num1 , num2;
    printf("Enter two integers:");
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    int sub = num1 - num2;
    double div = (1.0 * num1/num2);
    int prod = num1 * num2;
    int modu = num1 % num2;
    printf("Addition: %d \n", sum);
    printf("Subtraction: %d \n", sub);
    printf("Multiplication: %d \n", prod);
    printf("Division: %f \n", div);
    printf("Modulus: %d \n", modu);



    return 0;
}

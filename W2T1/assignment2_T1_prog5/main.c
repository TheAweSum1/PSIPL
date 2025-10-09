#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    char op;
    int num1,num2;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("Choose the arithmetic operation to perform (+,-,*,/): ");
    scanf(" %c", &op);

    switch(op)
    {
    case '+':
        printf("Addition of 2 numbers = a+b = %d", (num1+num2));
        break;
    case '-':
        printf("Subtraction of 2 numbers = a-b = %d", (num1-num2));
        break;
    case '*':
        printf("Product of 2 numbers = a*b = %d", (num1*num2));
        break;
    case '/':
        printf("Division of 2 numbers = a/b = %d", (num1/num2));
        break;
    default:
        printf(" %c is not a valid operation. Please enter valid Arithmetic operation!", op);
    }
    printf("\n2025300145_Chinmay_Mhaskar\n");
    return 0;
}

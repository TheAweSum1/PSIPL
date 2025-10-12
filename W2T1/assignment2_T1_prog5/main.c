#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    // declare variable op to store the operator; num1 and num2 to store the two numbers
    char op;
    int num1,num2;
    //ask user to input 2 numbers
    printf("Enter 2 numbers: ");
    scanf("%d%d", &num1, &num2);
    //ask user to input the operation they wish to perform
    printf("Choose the arithmetic operation to perform (+,-,*,/): ");
    scanf(" %c", &op);
    //using switch case, appropriate arithmetic operation is selected performed and the answer is printed.
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
    //in case any input other than +-/* is entered, default case is used for error handling
    default:
        printf(" %c is not a valid operation. Please enter valid Arithmetic operation!", op);
    }
    printf("\n2025300145_Chinmay_Mhaskar\n");
    return 0;
}

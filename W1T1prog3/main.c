#include <stdio.h>
/*
 *  3. Write a C program to input two integers and perform all arithmetic operations:
 *    addition, subtraction, multiplication, division and modulus.
 */   
int main()
{   
    // initializing the two integers
    int num1 , num2;
    
    //taking user input of the two integers
    printf("Enter two integers:");
    scanf("%d %d", &num1, &num2);
    
    //calculating sum, difference, product, quotient and remainder of the two numbers
    int sum = num1 + num2;
    int sub = num1 - num2;
    double div = (1.0 * num1/num2); //note: for division, it has been multiplied by 1.0 in order to type cast it into the correct data type explicitly and doesn't roundoff
    int prod = num1 * num2;
    int modu = num1 % num2;
    
    //printing the sum, difference, product, quotient and remainder of the two numbers
    printf("Addition: %d \n", sum);
    printf("Subtraction: %d \n", sub);
    printf("Multiplication: %d \n", prod);
    printf("Division: %f \n", div);
    printf("Modulus: %d \n", modu);
    
    return 0;
}

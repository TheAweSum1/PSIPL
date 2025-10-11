#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2025300145_Chinmay_Mhaskar\n");
    //declaring variables according to values given in the question
    int a = 10;
    float f = 5.1234567890;
    char c = 'G';
    double d = 123.1234567891234567890;

    //using sizeof function and printing value and size of each variable
    printf("Integer: %d , Size: %lu bytes \n", a, sizeof(a));
    printf("Float: %.9lf , Size: %lu bytes \n", f, sizeof(f));
    printf("Char: %c , Size: %lu bytes \n", c, sizeof(c));
    printf("Double: %.16lf , Size: %lu bytes \n", d, sizeof(d));
    //note: us 0.9lf, 0.16lf etc to show right number... Will not be perfect to the last digits but close enough
    printf("2025300145_Chinmay_Mhaskar\n");

    return 0;
}

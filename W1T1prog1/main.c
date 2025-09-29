#include <stdio.h>
#include <stdlib.h>

int main()
{   int a = 10;
    float f = 5.1234567890;
    char c = 'G';
    double d = 123.1234567891234567890;


    printf("Integer: %d , Size: %lu \n", a, sizeof(a ));
    printf("Float: %.9lf , Size: %lu \n", f, sizeof(f ));
    printf("Char: %c , Size: %lu \n", c, sizeof(c ));
    printf("Double: %.16lf , Size: %lu \n", d, sizeof(d ));

    return 0;
}

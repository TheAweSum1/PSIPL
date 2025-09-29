#include <stdio.h>
#include <stdbool.h>
void main()
{   //prints hello world
    printf("Hello world!\n");
    /* this is a
    multiline comment
    */
    int num = 4;
    printf("the integer is %d \n", num);

    float num2 = -1.69f;
    printf("the number is %0.1f \n", num2);

    char firstchar = 'D';
    printf("character is %c \n", firstchar);

    bool myval = true;
    printf("boolean value is %d \n", myval);

    int inp1, inp2;
    scanf("%d %d", &inp1, &inp2);

    int sum = inp1 + inp2;
    printf("%d \n", sum);




}

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Write a C program tht uses constant keyword. Define a constant for Pi and calculate the areaof  circle
*/
const float pi = 3.1415926;
float rad = 0.0;
printf("Enter radius:");
scanf("%f", &rad);
float area = pi * rad * rad;
printf(" Area of circle = %f", area);
}

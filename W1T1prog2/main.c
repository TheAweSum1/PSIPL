/*
* Write a C program that uses constant keyword. Define a constant for Pi and calculate the area of the circle
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
      // defining pi as a constant of type float
      const float pi = 3.1415926;
        
      //initializing radius to 0
      float rad = 0.0;
        
      //taking input from user
      printf("Enter radius:");
      scanf("%f", &rad);
        
      //calculating area of circle
      float area = pi * rad * rad;
        
      //printing area of circle
      printf(" Area of circle = %f", area);
  
      return 0;
}

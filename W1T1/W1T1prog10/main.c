#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter Principal, Rate, and Time:");
    int p, r, t;
    scanf("%d %d %d", &p, &r, &t);
    float intrst = (p * r * t * 1.00)/100;
    printf("Simple Interest = %f", intrst);
    return 0;
}

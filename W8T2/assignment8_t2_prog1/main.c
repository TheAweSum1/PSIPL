/**
*@brief Program to calculate and return factorial of a number using recursion
*@author Chinmay Mhaskar
*@date 25-11-2025
*@param arr to store array input by user
*@param n to store length of array
*@return sum store sum of all elements
*/
#include <stdio.h>
#include <string.h>
void move (int n, char from, char to, char aux)
{
    if(n==1)
    {
        printf("Move file 1 from server %c to %c\n",from,to);
        return ;
    }
    move(n-1,from,aux,to);
    printf("Move file %d from server %c to %c\n",n,from,to);
    move(n-1,aux,to,from);

}
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    int n = 0;
    //ask user to input number

    printf("Enter number of files: ");
    scanf("%d",&n);

    //store result of maxArray function in res
    move(n,'A','C','B');

    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

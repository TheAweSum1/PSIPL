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
int isPalindrome (char str[], int start, int end)
{
    // Base case: if start has crossed end, it's a palindrome.
    if (start >= end) {
        return 1;
    }
    // If characters at start and end do not match, it's not a palindrome.
    if (str[start] != str[end]) {
        return 0;
    }
    // Recursive call to check remaining substring
    return isPalindrome(str, start + 1, end - 1);
}
int main()
{
    printf("Chinmay_Mhaskar_2025300145\n");
    int n = 0;
    //ask user to input number

    printf("Enter a string: ");
    // ask user to input elements of array, define array arr of length n
    char str[100];
    fgets(str,sizeof(str),stdin);

    //store result of maxArray function in res
    int res = isPalindrome(str,0,(strlen(str)-1));
    printf("res = %d",res);
    //print result
    if(res)
        printf("palindrome");
    else
        printf("not Palindrome");

    printf("\nChinmay_Mhaskar_2025300145");
    return 0;
}

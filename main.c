#include "NumClass.h"
#include <stdio.h>
int main()
{
    int num1, num2, i;
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("The Armstrong numbers are:");
    for (i = num1; i <= num2; i++)
    {
        if (isArmstrong(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    for (i = num1; i <= num2; i++)
    {
        if (isPalindrome(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Prime numbers are:");
    for (i = num1; i <= num2; i++)
    {
        if (isPrime(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Strong numbers are:");
    for (i = num1; i <= num2; i++)
    {
        if (isStrong(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;

}


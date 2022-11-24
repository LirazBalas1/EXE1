#include "NumClass.h"
#include <stdio.h>
int main()
{
    int num1, num2 ,i;
    printf("please enter two positive number");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("The prime numbers in the range are : ");
    for (i= num1; i <= num2; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("The Armstrong numbers in the range are : ");

    for (i= num1; i <= num2; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d ", i);
        }
    }
    printf("The strong numbers in the range are : ");
    for (i= num1; i <= num2 ; i++)
    {
        if (isStrong(i))
        {
            printf("%d ", i);
        }
    }
    printf("The pallindrome numbers in the range are : ");
    for (i= num1; i <= num2; i++)
    {
        if (isPalindrome(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}
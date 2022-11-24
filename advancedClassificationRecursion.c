#include "NumClass.h"
#include<math.h>
float CheckArmstrong(int x, int size);
int checkPalindrome(int num);

int isArmstrong(int num)
{
    int number = num;
    int digits = 0;
    while (number > 0)
    {
        number /= 10;
        digits++;
    }
    if (num == (int)CheckArmstrong(num, digits))
    {
        return 1;
    }
    return 0;
}
// recursive method
float CheckArmstrong(int x, int size)
{
    if (x > 0)
        return (pow(x % 10, size) + CheckArmstrong(x / 10, size));
    return 0;
}

int isPalindrome(int number)
{
    if (number == checkPalindrome(number))
    {
        return 1;
    }
    return 0;
}
// recursive method
int checkPalindrome(int num)
{
    int p;
    static int sum = 0;
    if (num != 0)
    {
        p = num % 10;
        sum = sum * 10 + p;
        checkPalindrome(num / 10);
    }
    return sum;
}

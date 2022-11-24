#include "NumClass.h"
#include<math.h>
int isPalindrome(int f)
{
    int i, r = 0;
    for (i = f; i != 0; i /= 10)
    {
        r = r * 10;
        r = r + i % 10;
    }
    if (r == f)
    {
        return 1;
    }
    return 0;
}

int isArmstrong(int h)
{
    int num = h;
    int remainder, sum = 0;
    while (num != 0)
    {
        remainder = num % 10;

        sum += remainder * remainder * remainder;
        num /= 10;
    }

    if (sum == h)
    {
        return 1;
    }
    return 0;
}

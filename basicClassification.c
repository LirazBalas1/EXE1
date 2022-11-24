#include "NumClass.h"
#include<math.h>
int isPrime(int n)
{
    int t = sqrt(n);
    if (n == 1)
    {
        return 0;
    }
    for (int i = 2; i <= t; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int isStrong(int l)
{
    int sum = 0;
    int copyofnumber = l;
    while (copyofnumber > 0)
    {
        int i = 1;
        int factorial = 1;
        int lastdigit = copyofnumber % 10;
        while (i <= lastdigit)
        {
            factorial = factorial * i;
            i++;
        }
        copyofnumber = copyofnumber / 10;
        sum = sum + factorial;
    }
    if (sum == l)
    {
        return 1 ;
    }
    return 0;
}

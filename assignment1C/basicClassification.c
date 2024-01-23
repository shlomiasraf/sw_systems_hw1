#include <stdio.h>
#include "NumClass.h"
int isStrong(int x)
{
    int sum = 0;
    int x1 = x;
    while(x1 > 0)
    {
        int digit = x1%10;
        int sum1 = 1;
        for(int i=1; i<=digit; i++)
        {
            sum1 *= i;
        }
        sum += sum1;
        x1 = x1/10;
    }
    if(sum == x)
    {
        return 1;
    }
    return 0;
}
int isPrime(int x)
{
    for(int i =2; i*i <= x; i++)
    {
        if(x%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
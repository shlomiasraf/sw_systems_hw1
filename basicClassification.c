#include <stdio.h>
#include "NumClass.h"
//function that checks if the number is strong by sum the factorial of every digit by loop, and sum the results.
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
//function that checks if the number is prime by check if the number not divide any number between 2 to root of number.
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
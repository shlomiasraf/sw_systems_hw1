#include <stdio.h>
#include "NumClass.h"
int isPalindrome(int x)
{
    int digits = 0;
    int x1 = x;
    while(x1 > 0)
    {
        x1 = x1 /10;
        digits++;
    }
    int x2 = 0;
    x1 = x;
    while(digits > 0)
    {
        int d =1;
        for(int i = 1; i < digits; i++)
        {
            d = d*10;
        }
        x2 += (x1%10)*d;
        x1 = x1/10;
        digits--;
    }
    if(x2 == x)
    {
        return 1;
    }
    return 0;
}
int isArmstrong(int x)
{
    int digits = 1;
    int x1 = x;
    while(x1 > 10)
    {
        x1 = x1 /10;
        digits++;
    }
    int x2 = 0;
    x1 = x;
    while (x1 > 0)
    {
        int d = x1 %10;
        int h = d;
        for(int i = 1; i < digits; i++)
        {
            h = h*d;
        }
        x2 += h;
        x1 = x1/10;  
    }
    if(x2 == x)
    {
        return 1;
    }
    return 0;   
}     
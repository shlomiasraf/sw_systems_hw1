#include <stdio.h>
#include "NumClass.h"
//Function that checks if the number is a palindrome by flipping the number and checking if it's the same number.
int isPalindrome(int x)
{
    //check the number of digits.
    int digits = 0;
    int x1 = x;
    while(x1 > 0)
    {
        x1 = x1 /10;
        digits++;
    }
    int x2 = 0;
    x1 = x;
    //flipping the number
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
    //check if it's the same number
    if(x2 == x)
    {
        return 1;
    }
    return 0;
}
//A function that checks if the number is Armstrong based on the sum of each digit to the power of the number of digits and sum the results.
int isArmstrong(int x)
{
    int digits = 1;
    int x1 = x;
    //Check the number of digits.
    while(x1 > 10)
    {
        x1 = x1 /10;
        digits++;
    }
    int x2 = 0;
    x1 = x;
    //Calculates the sum of each digit to the power of the number of digits.
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
    //Checks if the result are equal to original number
    if(x2 == x)
    {
        return 1;
    }
    return 0;   
}     
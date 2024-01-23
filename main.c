/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "NumClass.h"
#include <stdbool.h>
int getMin(int num1, int num2)
{
    if(num1 <= num2)
    {
        return num1;
    }
    return num2;
}
int getMax(int num1, int num2)
{
    if(num1 >= num2)
    {
        return num1;
    }
    return num2;
}
int main()
{
    int num1, num2;
    printf("enter number 1:");
    scanf("%d", &num1);
    printf("enter number 2:");
    scanf("%d", &num2);
    printf("prime numbers: ");
    bool first = true;
    for(int i = getMin(num1,num2); i <= getMax(num1,num2); i++)
    {
        if(isPrime(i) && first)
        {
            printf("%d", i);
            first = false;
        }
        else if(isPrime(i))
        {
            printf(", ");
            printf("%d", i);
        }
    }
    printf("\namstrong numbers: ");
    first = true;
    for(int i = getMin(num1,num2); i <= getMax(num1,num2); i++)
    {
        if(isArmstrong(i) && first)
        {
            printf("%d", i);
            first = false;
        }
        else if(isArmstrong(i))
        {
            printf(", ");
            printf("%d", i);
        }
    }
    printf("\nstrong numbers: ");
    first = true;
    for(int i = getMin(num1,num2); i <= getMax(num1,num2); i++)
    {
        if(isStrong(i) && first)
        {
            printf("%d", i);
            first = false;
        }
        else if(isStrong(i))
        {
            printf(", ");
            printf("%d", i);
        }
    }
    printf("\npalindrome numbers: ");
    first = true;
    for(int i = getMin(num1,num2); i <= getMax(num1,num2); i++)
    {
        if(isPalindrome(i) && first)
        {
            printf("%d", i);
            first = false;
        }
        else if(isPalindrome(i))
        {
            printf(", ");
            printf("%d", i);
        }
    }
}

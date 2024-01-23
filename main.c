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
    scanf( "%d %d", &num1, &num2);
    printf("The Armstrong numbers are:");
    for(int i = getMin(num1,num2); i <= getMax(num1,num2); i++)
    {
        if(isArmstrong(i))
        {
            printf(" ");
            printf("%d", i);
        }
    }
    printf("\nThe Palindromes are:");
    for(int i = getMin(num1,num2); i <= getMax(num1,num2); i++)
    {
        if(isPalindrome(i))
        {
            printf(" ");
            printf("%d", i);
        }
    }
    printf("\nThe Prime numbers are:");
    for(int i = getMin(num1,num2); i <= getMax(num1,num2); i++)
    {
        if(isPrime(i))
        {
            printf(" ");
            printf("%d", i);
        }
    }
    printf("\nThe Strong numbers are:");
    for(int i = getMin(num1,num2); i <= getMax(num1,num2); i++)
    {
        if(isStrong(i))
        {
            printf(" ");
            printf("%d", i);
        }
    }
    printf("\n");
}

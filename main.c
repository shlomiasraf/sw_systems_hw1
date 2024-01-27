/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "NumClass.h"
#include <stdbool.h>

//Check the min of two numbers	
int getMin(int num1, int num2)
{
    if(num1 <= num2)
    {
        return num1;
    }
    return num2;
}
//Check the max of two numbers	
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
    //print all The Armstrong numbers between the two numbers we get. 
    printf("The Armstrong numbers are:");
    for(int i = getMin(num1,num2); i <= getMax(num1,num2); i++)
    {
        if(isArmstrong(i))
        {
            printf(" ");
            printf("%d", i);
        }
    }
    //print all The Palindrome numbers between the two numbers we get. 
    printf("\nThe Palindromes are:");
    for(int i = getMin(num1,num2); i <= getMax(num1,num2); i++)
    {
        if(isPalindrome(i))
        {
            printf(" ");
            printf("%d", i);
        }
    }
    //print all The Prime numbers between the two numbers we get. 
    printf("\nThe Prime numbers are:");
    for(int i = getMin(num1,num2); i <= getMax(num1,num2); i++)
    {
        if(isPrime(i))
        {
            printf(" ");
            printf("%d", i);
        }
    }
    //print all The Strong numbers between the two numbers we get. 
    printf("\nThe Strong numbers are:");
    for(int i = getMin(num1,num2); i <= getMax(num1,num2); i++)
    {
        if(isStrong(i))
        {
            printf(" ");
            printf("%d", i);
        }
    }
}

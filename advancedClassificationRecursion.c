int checkDigits(int x)
{
    int digits = 0;
    int x1 = x;
    while(x1 > 0)
    {
        x1 = x1 /10;
        digits++;
    }
    return digits;
}
int reverseNum(int x)
{
    if(x == 0)
    {
        return 0;
    }
    int digits = checkDigits(x);
    int d =1;
    for(int i = 1; i < digits; i++)
    {
        d = d*10;
    }
    return (x%10)*d + reverseNum(x/10);
}
int isPalindrome(int x)
{
    int x2 = x;
    x2 = reverseNum(x2);
    if(x2 == x)
    {
        return 1;
    }
    return 0;
}
int powSum(int x1,int digits)
{
    if(x1 == 0)
    {
        return 0;
    }
    int d = x1%10;
    int h = d;
    for(int i = 1; i < digits; i++)
    {
        h = h*d;
    }
    return h+powSum(x1/10,digits);  
}
int isArmstrong(int x)
{
    int digits = checkDigits(x);
    int x1 = x;
    int x2 = powSum(x1,digits);
    if(x2 == x)
    {
        return 1;
    }
    return 0;   
}
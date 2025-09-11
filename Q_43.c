// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int factorial(int x);
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n, r,num, sum = 0;
    printf("Enter: ");
    scanf("%d", &n);
    num=n;
    for (; n > 0; n = n / 10)
    {
        r = n % 10;
        sum = sum + factorial(r);
    }
    if(sum==num)
    printf("Strong Number");
    else
    printf("Not Strong Number");
    return 0;
}
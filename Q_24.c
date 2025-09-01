/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/
#include <stdio.h>
int main()
{
    int n,bill;
    printf("Enter no of units");
    scanf("%d",&n);
    if(n>=0 && n<=100)
    {
        bill=n*5;
        printf("Bill: %d",bill);
    }
    else if(n>100 && n<=200)
    {
        bill = (100 * 5) + (n - 100) * 9;
        printf("Bill: %d",bill);
    }
    else if(n>=200)
    {
        bill = (100 * 5) + (100 * 9) + (n - 200) * 16;
        printf("Bill:%d",bill);
    }
    else
    {
        printf("no");
    }
    return 0;
}
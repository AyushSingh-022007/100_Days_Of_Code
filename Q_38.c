//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter: ");
    scanf("%d",&n);
    for(;n>0;n=n/10)
    {
        r=n%10;
        sum=sum+r;
    }
    printf("%d",sum);
    return 0;
}
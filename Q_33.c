// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int m, r, num;
    int c = 0, sum = 0;
    printf("enter no ");
    scanf("%d",&m);
    num = m;
    for (; m != 0; m = m / 10)
    {
        c++;
    }
    m = num;
    for (; m > 0; m = m / 10)
    {
        r = m%10;
        sum = sum + (float)pow(r, c);
    }
    if (sum == num)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
    return 0;
}
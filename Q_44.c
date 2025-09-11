//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include<stdio.h>
int main()
{
    float n,add,sum=1;
    printf("Enter no: ");
    scanf("%f",&n);
    for(int i=2;i<=n;i++)
    {
        add=(2.0*i-1.0)/(2.0*i);
        sum=(float)sum+ add;
    }
    printf("%.1f",sum);
    return 0;
}
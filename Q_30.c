//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main()
{
    int n,r,rev=0;
    printf("enter: ");
    scanf("%d",&n);
    for(int i=n;n!=0;n=n/10)
    {
        r=n%10;
        rev=rev*10 +r;
    }
    printf("%d",rev);
    return 0;

}
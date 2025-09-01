//Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no: ");
    scanf("%d",&n);
    if(n>=0 && n<=7)
    {
        printf("Fine %d",n*2);
    }
    else if(n>=8 && n<=14)
    {
        printf("Fine %d",n*4);
    }
    else if(n>=15 && n<=30)
    {
        printf("Fine %d",n*6);
    }
    else
    {
        printf("Membership Cancelled");
    }
    return 0;
}

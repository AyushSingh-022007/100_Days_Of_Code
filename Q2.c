// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main()
{
    int a, b, sum, difference, product, quotient;
    printf("enter 1st no numbers:");
    scanf("%d", &a);
    printf("enter 2nd no numbers:");
    scanf("%d", &b);
    sum = a + b;
    difference = a - b;
    product = a * b;
    if (b == 0)
    {
        printf("sum is:%d\t", sum);
        printf(", Differnce is:%d\t ", difference);
        printf(", Product is:%d\t ,", product);
        printf(" Divison not possible");
    }
    else
    {
        quotient = a / b;
        printf("sum is:%d\t", sum);
        printf(", Differnce is:%d\t ,", difference);
        printf(" Product is:%d\t ,", product);
        printf("Quotient is:%d ,", quotient);
    }
    return 0;
}
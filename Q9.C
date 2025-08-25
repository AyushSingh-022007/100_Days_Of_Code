// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 1050 1125.76
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>
int main()
{
    float principal, time, rate, simple_interest, Compound_interest;
    printf("enter principal:");
    scanf("%f", &principal);
    printf("enter time:");
    scanf("%f", &time);
    printf("enter rate:");
    scanf("%f", &rate);
    simple_interest = (principal * time * rate) / 100;
    Compound_interest = principal * (pow((1 + (rate / 100)), time))-principal;
    printf("Simple interest:%.2f\t", simple_interest);
    printf("compound interest:%.2f\t", Compound_interest);
    return 0;
}
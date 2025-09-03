// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9
Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter: ");
    scanf("%d", &n);
    for (int i = 1; i <= 2*n-1; i = i + 2)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}

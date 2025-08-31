//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        if (n == 1)
            printf("Januay,31 days");
        break;
    case 2:
        if (n == 2)
            printf("February,28 days");
        break;
    case 3:
        if (n == 3)
            printf("March,31 days");
        break;
    case 4:
        if (n == 4)
            printf("April,30 days");
        break;
    case 5:
        if (n == 5)
            printf("May,31 days");
        break;
    case 6:
        if (n == 6)
            printf("June,30 days");
        break;
    case 7:
        if (n == 7)
            printf("July,31 days");
        break;
    case 8:
        if (n == 8)
            printf("August,31 days");
        break;
    case 9:
        if (n == 9)
            printf("September,30 days");
        break;
    case 10:
        if (n == 10)
            printf("October,31 days");
        break;
    case 11:
        if (n == 11)
            printf("November,30 days");
        break;
    case 12:
        if (n == 12)
            printf("December,31 days");
        break;
    default:
        printf("Invaild");
    }
    return 0;
}
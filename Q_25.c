// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main()
{
    int x, y;
    char operation;

    printf("Enter two numbers and operation (+, -, *, /, %): ");
    scanf("%d %d %c", &x, &y, &operation);

    switch (operation)
    {
    case '+':
        printf("%d\n", x + y);
        break;
    case '-':
        printf("%d\n", x - y);
        break;
    case '*':
        printf("%d\n", x * y);
        break;
    case '/':
        if (y!= 0)
        printf("%d\n", x / y);
        else
        printf("Error:\n");
        break;
    case '%':
        if (y != 0)
        printf("%d\n", x % y);
        else
        printf("Error:\n");
        break;
    default:
        printf("Invalid operator\n");
    }
    return 0;
}

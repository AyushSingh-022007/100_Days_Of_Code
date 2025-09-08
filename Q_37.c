//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main()
{
    int num1, num2, lcm;
    printf("Enter: ");
    scanf("%d %d", &num1, &num2);

    for (lcm = (num1 > num2 ? num1 : num2); ; lcm++) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            printf("%d", lcm);
            break;
        }
    }

    return 0;
}

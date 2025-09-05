//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    int n, rev = 0, rem, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;  
    for (; n > 0; n = n / 10) {
        rem = n % 10;
        rev = rev * 10 + rem;
    }

    if (temp == rev)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
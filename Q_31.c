//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    int n, rem;
    long long binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    for (; n > 0; n = n / 2) {
        rem = n % 2;                 
        binary = binary + rem * place;
        place = place * 10;          
    }

    printf("%lld\n", binary);
    return 0;
}

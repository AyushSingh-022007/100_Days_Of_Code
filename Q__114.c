//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);
    int last_index[256];
    for (int i = 0; i < 256; i++)
        last_index[i] = -1;

    int start = 0, maxLen = 0;

    for (int i = 0; i < n; i++) {
        if (last_index[s[i]] >= start)
            start = last_index[s[i]] + 1;

        last_index[s[i]] = i;

        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("%d\n", maxLen);
    return 0;
}

//Q94:Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start = 0, maxStart = 0;
    int curLen = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\0')
            curLen++;
        else {
            if (curLen > maxLen) {
                maxLen = curLen;
                maxStart = i - curLen;
            }
            curLen = 0;
        }
    }
    printf("Longest word: ");
    for (i = 0; i < maxLen; i++)
        printf("%c", str[maxStart + i]);

    return 0;
}

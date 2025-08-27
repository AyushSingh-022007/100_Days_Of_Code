//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='i' || ch=='e'|| ch=='o'|| ch=='u')
    {
        printf("vowel");
    }
    else if(ch=='A' || ch=='I' || ch=='E'|| ch=='O'|| ch=='U')
    {
        printf("vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}
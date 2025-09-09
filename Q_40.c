//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include<stdio.h>
int main()
{
    int n, r,count=0;
    printf("Enter: ");
    scanf("%d", &n);

    int ans = 0, place = 1;
    for(; n > 0; n = n / 10, place = place * 10)
    {
        r = n % 10;
        if(r == 0)
            ans = ans + 1 * place;   // flip 0 -> 1
        else
            count++;
            ans = ans + 0 * place;   // flip 1 -> 0
    }

    for(int i =1;i<count||i==1;i++){
        printf("0");
    }
    printf("%d",ans);
    return 0;
}
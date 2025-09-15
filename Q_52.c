/*52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
/
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main()
{
    int count = 1;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= (2 * i) - 1 && count < 14; j++)
        {
            if (count % 5 == 0 || count == 2 || count == 13)
            {
                printf("\n");
            }
            printf("*\n");
            count++;
        }
    }
    return 0;
}
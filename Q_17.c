// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main()
{
    float d, a, b, c, root1, root2, realone, imgone;
    printf("Enter: ");
    scanf("%f %f %f",&a,&b,&c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b + sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.2f , %.2f\n", root1, root2);
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);
        printf("Roots are real and same %.2f\n", root1);
    }
    else
    {
        realone = -b / (2 * a);
        imgone = sqrt(-d) / (2 * a);
        printf("Roots are complex: %.2f + %.2fi , %.2f - %.2fi\n", realone, imgone, realone, imgone);
    }
    return 0;
}
//Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
int main()
{
    float marks;
    printf("Enter :");
    scanf("%f",&marks);
    if(marks>=90)
    {
        printf("Grade A");
    }
    else if(marks>=80 && marks<90)
    {
        printf("Grade B");
    }
    else if(marks>=70 && marks<=80)
    {
        printf("Grade C");
    }
    else if(marks>=60 && marks<=70)
    {
        printf("Grade D");
    }
    else
    {
        printf("F");
    }
    return 0;
}
//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
int main()
{
    int lenght,breath,area,perimeter;
    printf("enter 1st:");
    scanf("%d",&lenght);
    printf("enter 2nd:");
    scanf("%d",&breath);
    area= lenght*breath;
    perimeter= (2*(lenght+breath));
    printf("area is:%d",area);
    printf(", perimeter is:%d",perimeter);
    return 0;
}
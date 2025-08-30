//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include <stdio.h>
int main()
{
    int day;
    printf("Enter: ");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        if(day==1)
        printf("Monday");
        break;
        case 2:
        if(day==2)
        printf("Tuseday");
        break;
        case 3:
        if(day==3)
        printf("Wednesday");
        break;
        case 4:
        if(day==4)
        printf("Thursday");
        break;
        case 5:
        if(day==5)
        printf("Friday");
        break;
        case 6:
        if(day==6)
        printf("Saturday");
        break;
        case 7:
        if(day==7)
        printf("Sunday");
        break;
        default:
        printf("INVAILD");
    }
    return 0;

}
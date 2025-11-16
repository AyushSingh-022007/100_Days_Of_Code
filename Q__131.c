//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/
#include<stdio.h>
enum days
{
    sunday,
    monday,
    tuseday,
    wednesday,
    thursday,
    friday,
    saturday,
};
int main()
{
    enum days i;
    const char *names[]={"sunday","monday","tuseday","wednesday","thursday","friday","saturday"};
    for(i=sunday;i<=saturday;i++)
    {
        printf("%s = %d\n",names[i],i);
    }
    return 0;
}
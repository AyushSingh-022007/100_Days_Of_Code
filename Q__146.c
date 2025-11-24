// Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

struct Date
{
    int day, month, year;
};
struct Employee
{
    char name[30];
    int id;
    struct Date join;
};
int main()
{
    struct Employee emp;
    scanf("%s", emp.name);
    scanf("%d", &emp.id);
    scanf("%d %d %d", &emp.join.day, &emp.join.month, &emp.join.year);
    printf("name: %s | id: %d | join: %02d/%02d/%04d",
    emp.name, emp.id,
    emp.join.day, emp.join.month, emp.join.year);
    return 0;
}

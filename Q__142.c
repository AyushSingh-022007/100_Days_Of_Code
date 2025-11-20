// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>
struct Student
{
    char name[30];
    int roll;
    float marks;
};
int main()
{
    struct Student s[5];
    printf("Enter details of 5 students:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("student %d\n", i + 1);
        printf("name: ");
        scanf("%s", s[i].name);
        printf("roll: ");
        scanf("%d", &s[i].roll);
        printf("marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("student details\n");
    printf("Name\tRoll\tMarks\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    return 0;
}

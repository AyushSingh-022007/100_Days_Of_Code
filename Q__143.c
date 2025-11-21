// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
struct Student
{
    char name[30];
    int roll;
    int marks;
};
int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Name Roll Marks: ");
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }
    struct Student topper = s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > topper.marks)
        {
            topper = s[i];
        }
    }
    printf("Topper: %s (Marks: %d)\n", topper.name, topper.marks);
    return 0;
}

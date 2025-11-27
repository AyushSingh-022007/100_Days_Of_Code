#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student *s;
    s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }
    printf("Enter name, roll and marks: ");
    scanf("%s %d %d", s->name, &s->roll, &s->marks);
    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);
    free(s);
    return 0;
}

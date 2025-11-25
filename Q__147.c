//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[30];
    int id;
    float salary;
};

int main() {
    struct Employee emp;
    int n;
    FILE *fp;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    fp = fopen("employee.dat", "wb");  // write binary
    if (!fp) {
        printf("File error!");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", emp.name);
        printf("ID: ");
        scanf("%d", &emp.id);
        printf("Salary: ");
        scanf("%f", &emp.salary);

        fwrite(&emp, sizeof(emp), 1, fp);
    }

    fclose(fp);

    // Reading back
    fp = fopen("employee.dat", "rb");  // read binary
    if (!fp) {
        printf("File error!");
        return 1;
    }

    printf("\nEmployee data read from file:\n");

    while (fread(&emp, sizeof(emp), 1, fp)) {
        printf("Name: %s | ID: %d | Salary: %.2f\n",
               emp.name, emp.id, emp.salary);
    }

    fclose(fp);
    return 0;
}

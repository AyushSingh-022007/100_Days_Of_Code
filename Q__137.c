// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>
enum roles
{
    ADMIN,
    USER,
    GUEST
};
int main()
{
    enum roles r;
    char role[20];
    printf("Enter role: ");
    scanf("%s", role);
    if (strcmp(role, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(role, "USER") == 0)
        r = USER;
    else if (strcmp(role, "GUEST") == 0)
        r = GUEST;
    else
    {
        printf("Invalid Role");
        return 0;
    }
    switch (r)
    {
    case ADMIN:
        printf("Welcome Admin!\n");
        break;
    case USER:
        printf("Welcome User!\n");
        break;
    case GUEST:
        printf("Welcome Guest!\n");
        break;
    }
    return 0;
}

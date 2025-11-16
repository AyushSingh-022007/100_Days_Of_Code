//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include<stdio.h>
#include<string.h>
enum report
{
    success,failure,timeout,
};
int main()
{
    char input[10];
    enum report i;
    printf("enter ");
    scanf("%s",input);
    if(strcmp(input,"success")==0)
    {
    i=success;
    }
    else if((strcmp(input,"failure")==0))
    {
    i=failure;
    }
    else if(strcmp(input,"timeout")==0)
    {
    i=timeout;
    }
    else
    {
    printf("wrong");
    return 0;
    }
    switch(i)
    {
        case success:
        printf("operation successful");
        break;
        case failure:
        printf("operation unsuccessful");
        break;
        case timeout:
        printf("not done");
        break;
    }
    return 0;
}
//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>

enum dot
{
    MALE,
    FEMALE,
};
int main()
{
    enum dot d;
    char s[20];
    printf("enter gender ");
    scanf("%s",s);
    if(strcmp(s,"MALE")||strcmp(s,"male")==0)
    {
        d=MALE;
    }
    else if(strcmp(s,"FEMALE")||strcmp(s,"female")==0)
    {
        d=FEMALE;
    }
    else
    {
        printf("invlaold");
        return 0;
    }
    switch(d)
    {
        case 0:
        printf("MALE");
        break;
        case 1:
        printf("FEMALE");
        break;
    }
    return 0;
}
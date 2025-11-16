//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include<string.h>
enum operations
{
    ADD,
    SUBTRACT,
    MULTIPLY,
};
int main()
{
    enum operations o;
    char op[10];
    int a,b;
    printf("enter your choice ");
    scanf("%s",op);
    printf("enter operands ");
    scanf("%d %d",&a,&b);
    if(strcmp(op,"ADD")==0)
    {
        o=ADD;
    }
    else if(strcmp(op,"SUBTRACT")==0)
    {
        o=SUBTRACT;
    }
    else if(strcmp(op,"MULTIPLY")==0)
    {
        o=MULTIPLY;
    }
    else
    {
        printf("invaild");
        return 0;
    }
    switch(o)
    {
        case ADD:
        printf("%d",a+b);
        break;
        case SUBTRACT:
        printf("%d",a-b);
        break;
        case MULTIPLY:
        printf("%d",a*b);
        break;
        return 0;
    }
}
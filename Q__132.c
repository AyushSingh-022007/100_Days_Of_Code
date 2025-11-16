//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include<stdio.h>
#include<string.h>
enum light
{
    red,
    yellow,
    green,
};
int main()
{
    char colour[10];
    enum light signal;
    printf("enter signal colr ");
    scanf("%s",colour);
    if(strcmp(colour,"red")==0)
    {
    signal=red;
    }
    else if((strcmp(colour,"yellow")==0))
    {
    signal=yellow;
    }
    else if(strcmp(colour,"green")==0)
    {
    signal=green;
    }
    else
    {
    printf("wrong");
    return 0;
    }
    switch(signal)
    {
        case red:
        printf("stop");
        break;
        case yellow:
        printf("wait");
        break;
        case green:
        printf("go");
        break;
    }
    return 0;
}
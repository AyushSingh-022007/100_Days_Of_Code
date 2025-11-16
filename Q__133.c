//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>
enum months
{
    jan,feb,march,april,may,june,july,aug,sept,oct,nov,dec,
};
int main()
{
    enum months m;
    char mon[10];
    printf("enter month");
    scanf("%s",mon);
    if(strcmp(mon,"jan")==0)
    {
    m=jan;
    }
    else if(strcmp(mon,"feb")==0)
    {
        m=feb;
    }
        else if(strcmp(mon,"march")==0)
    {
        m=march;
    }
        else if(strcmp(mon,"april")==0)
    {
        m=april;
    }
        else if(strcmp(mon,"may")==0)
    {
        m=may;
    }
        else if(strcmp(mon,"june")==0)
    {
        m=june;
    }
        else if(strcmp(mon,"july")==0)
    {
        m=july;
    }
        else if(strcmp(mon,"aug")==0)
    {
        m=aug;
    }
        else if(strcmp(mon,"sept")==0)
    {
        m=sept;
    }
        else if(strcmp(mon,"oct")==0)
    {
        m=oct;
    }
        else if(strcmp(mon,"nov")==0)
    {
        m=nov;
    }
        else if(strcmp(mon,"dec")==0)
    {
        m=dec;
    }
    else
    {
        printf("invalid");
        return 0;
    }
    switch(m)
    {
        case jan: printf("31 days"); 
        break;
        case feb: printf("28 or 29 days"); 
        break;
        case march: printf("31 days");
        break;
        case april: printf("30 days");
        break;
        case may: printf("31 days"); 
        break;
        case june: printf("30 days"); 
        break;
        case july: printf("31 days"); 
        break;
        case aug: printf("31 days"); 
        break;
        case sept: printf("30 days"); 
        break;
        case oct: printf("31 days"); 
        break;
        case nov: printf("30 days"); 
        break;
        case dec: printf("31 days"); 
        break;
    }
    return 0;

}
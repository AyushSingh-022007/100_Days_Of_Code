// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>

int main()
{
    int num,fdigit,ldigit,rem,num_cp,place=1,n;
    printf("Enter number to swap first and last digit:");
    scanf("%d",&num);
    num_cp=num;
    for(int i=1;num>0;i++){
        rem=num%10;
        if (i==1){
            ldigit=rem;
        }
        num=num/10;
        n=i;
    }
    fdigit=rem;
     for(int j=1;j<=n;j++){
        rem=num_cp%10;
        num_cp=num_cp/10;
        if(j==1){
            rem=fdigit;
        }
        else if (j==n){
            rem=ldigit;
        }
        num=rem*place+num;
        place*=10;
    }
    printf("%d",num);
return 0;
}
// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main()
{
    float Costprice, Sellingprice, loss, profit, loss_percent, profit_percent;
    printf("Enter: ");
    scanf("%f,%f",&Costprice,&Sellingprice);
    if (Costprice > Sellingprice)
    {
        loss = Costprice - Sellingprice;
        loss_percent = (loss / Costprice) * 100;
        printf("Loss: %f", loss_percent);
    }
    else if (Costprice < Sellingprice)
    {
        profit = Sellingprice - Costprice;
        profit_percent = ((profit) / Costprice) * 100;
        printf("Profit: %f", profit_percent);
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}
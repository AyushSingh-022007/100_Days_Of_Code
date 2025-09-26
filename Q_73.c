// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int arr[n][m], rowSum[n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        rowSum[i] = 0;
        for (int j = 0; j < m; j++)
        {
            rowSum[i] += arr[i][j];
        }
    }

    // Print row sums
    printf("Row sums:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", rowSum[i]);
    }

    return 0;
}

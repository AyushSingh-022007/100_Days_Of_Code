// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);
    int arr[n][m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nDiagonal Traversal of Matrix:\n");
    for (int col = 0; col < m; col++)
    {
        int i = 0, j = col;
        while (i < n && j >= 0)
        {
            printf("%d ", arr[i][j]);
            i++;
            j--;
        }
    }
    for (int row = 1; row < n; row++)
    {
        int i = row, j = m - 1;
        while (i < n && j >= 0)
        {
            printf("%d ", arr[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}

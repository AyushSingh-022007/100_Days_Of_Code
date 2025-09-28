// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int diagSize = (n < m) ? n : m;
    int diag[diagSize];
    for (int i = 0; i < diagSize; i++) {
        diag[i] = arr[i][i];
    }
    int distinct = 1; 
    for (int i = 0; i < diagSize; i++) {
        for (int j = i + 1; j < diagSize; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0; 
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}


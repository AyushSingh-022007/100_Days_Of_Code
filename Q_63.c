// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter array size");
    scanf("%d %d", &n1, &n2);
    int arr1[n1], arr2[n2];
    printf("Enter array elments");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int k = 0;
    int arr3[n1 + n2];
    for (int i = 0; i < n1; i++)
    {
        arr3[k++] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr3[k++] = arr2[i];
    }
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}

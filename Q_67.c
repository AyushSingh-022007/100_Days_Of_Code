//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main()
{
    int n, pos, val;
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[100]; 
    printf("Enter array elements:");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter position and value to insert:");
    scanf("%d %d", &pos, &val);
    for(int i = n; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = val;
    n++;
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

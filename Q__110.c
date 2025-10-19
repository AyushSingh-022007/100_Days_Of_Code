//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include<stdio.h>
int maxSubarraySum(int arr[], int n, int k)
{
    int sum = 0, highest = 0;
    for (int i = 0; i < k; ++i)
        sum += arr[i];
    highest = sum;
    for (int j = k; j < n; ++j)
    {
        sum = sum + arr[j] - arr[j - k];
        if (sum > highest)
            highest = sum;
    }
    return highest;
}
int main()
{
    int size, k;
    int a[100];
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; ++i)
        scanf("%d", &a[i]);
    printf("Enter subarray size (k): ");
    scanf("%d", &k);
    if (k <= 0 || k > size)
    {
        printf("Invalid input for k.\n");
        return 0;
    }
    int result = maxSubarraySum(a, size, k);
    printf("Maximum sum for subarray of size %d is %d\n", k, result);
    return 0;
}
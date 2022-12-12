#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
        printf("\n");
    }
}

void bubble_sort(int *A, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[5] = {1, 8, 5, 11, 4};
    int n = 5;
    printf("Array before Sorting\n");
    printArray(arr, n);
    bubble_sort(arr, n);
    printf("Array after Sorting\n");
    printArray(arr, n);
    return 0;
}
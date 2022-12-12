#include <stdio.h>

void insertion_sort(int *a, int n)
{
    int i, j;
    int key;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int printarray(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 8, 9, 4, 5};
    int a = 5;
    printf("----Array Before Sorting----\n");
    printarray(arr, a);
    insertion_sort(arr, a);
    printf("----Array after Sorting----\n");
    printarray(arr, a);

    return 0;
}
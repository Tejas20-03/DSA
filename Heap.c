#include <stdio.h>

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
    heap_sort(arr, 0, a - 1);
    printf("----Array after Sorting----\n");
    printarray(arr, a);

    return 0;
}
#include <stdio.h>

int partition(int *a, int l, int h)
{
    int pivot = a[l];
    int temp;
    int i = l + 1;
    int j = h;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    } while (i < j);

    temp = a[l];
    a[l] = a[j];
    a[j] = temp;
    return j;
}

void quick_sort(int a[], int l, int h)
{
    int part;
    if (l < h)
    {
        part = partition(a, l, h);
        quick_sort(a, l, part - 1);
        quick_sort(a, part + 1, h);
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
    quick_sort(arr, 0, a - 1);
    printf("----Array after Sorting----\n");
    printarray(arr, a);

    return 0;
}
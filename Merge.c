#include <stdio.h>

void merge(int *a, int m, int l, int h)
{
    int i, j, k;
    // int B[100];
    int B[h - l + 1];
    i = l;
    j = m + 1;
    k = l;
    while (i <= m && j <= h)
    {
        if (a[i] < a[j])
        {
            B[k] = a[i];
            i++;
            k++;
        }
        else
        {
            B[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= m)
    {
        B[k] = a[i];
        k++;
        i++;
    }
    while (j <= h)
    {
        B[k] = a[j];
        k++;
        j++;
    }
    for (int i = l; i <= h; i++)
    {
        a[i] = B[i];
    }
}

void merge_sort(int *a, int l, int h)
{
    int m;
    if (l < h)
    {
        m = (l + h) / 2;
        merge_sort(a, l, m);
        merge_sort(a, m + 1, h);
        merge(a, m, l, h);
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
    merge_sort(arr, 0, a - 1);
    printf("----Array after Sorting----\n");
    printarray(arr, a);

    return 0;
}
#include <stdio.h>

void selection_sort(int *a, int n)
{
    int i;
    int temp;
    for (i = 0; i < n - 1; i++)
    {
        int index;
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[index])
            {
                index = j;
            }
        }
        temp = a[i];
        a[i] = a[index];
        a[index] = temp;
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
    selection_sort(arr, a);
    printf("----Array after Sorting----\n");
    printarray(arr, a);

    return 0;
}
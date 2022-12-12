#include <stdio.h>

int binary_search(int arr[], int size, int element)
{
    int mid, high, low;
    high = size;
    low = 0;
    mid = (high + low) / 2;
    while (low <= high)
    {
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int size, element;
    printf("Enter Size of Array: ");
    scanf("%d", &size);
    printf("\n");

    printf("----Enter Elements in the Array----");
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("Enter Element to search in Array: ");
    scanf("%d", &element);
    printf("\n");

    if (element == -1)
    {
        printf("Element Not Found\n");
    }
    else
    {
        printf("%d Found", element);
    }

    return 0;
}
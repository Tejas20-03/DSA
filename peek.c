#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int peek(struct stack *ptr, int i)
{
    int temp = ptr->top - 1 + 1;
    if (temp < 0)
    {
        printf("Enter Valid Position");
        return -1;
    }
    else
    {
        return ptr->arr[temp];
    }
}

int main()
{
    struct stack *p = (struct stack *)malloc(sizeof(struct stack));
    p->size = 10;
    p->top = -1;
    p->arr = (int *)malloc(p->size * sizeof(int));
}
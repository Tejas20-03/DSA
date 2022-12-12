#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int key)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = key;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

void display(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is Empty!!");
    }
    else
    {
        int temp = ptr->top;
        printf("Elements of Stack are: \n");
        while (temp != -1)
        {
            printf("%d\n", ptr->arr[temp]);
            temp--;
        }
    }
}

void stackTop(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Top Element is: %d\n", ptr->arr[ptr->top]);
    }
}

int stackBottom(struct stack *ptr)
{
    printf("Bottom Element is: %d\n", ptr->arr[0]);
}

int main()
{
    struct stack *st = (struct stack *)malloc(sizeof(struct stack));
    st->size = 10;
    st->top = -1;
    st->arr = (int *)malloc(st->size * sizeof(int));
    push(st, 30);
    push(st, 450);
    push(st, 40);
    push(st, 45);
    push(st, 10);
    push(st, 150);
    push(st, 430);
    push(st, 80);
    push(st, 750);
    push(st, 60);
    pop(st);
    pop(st);
    pop(st);
    pop(st);
    display(st);
    stackTop(st);
    stackBottom(st);
    return 0;
}
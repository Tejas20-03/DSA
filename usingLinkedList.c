#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int isFull(struct Node *ptr)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct Node *ptr)
{
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *ptr, int x)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow!!\n");
    }
    else
    {
        struct Node *p = (struct Node *)malloc(sizeof(struct Node));
        p->data = x;
        p->next = ptr;
        ptr = p;
        return ptr;
    }
}

int pop(struct Node **ptr)
{
    if (isEmpty(*ptr))
    {
        printf("Stack Underflow!!\n");
    }
    else
    {
        struct Node *p = *ptr;
        *ptr = (*ptr)->next;
        int x = p->data;
        free(p);
        return (x);
    }
}

void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *top = NULL;
    top = push(top, 78);
    top = push(top, 28);
    top = push(top, 71);
    int element = pop(&top);
    printf("Deleted Element : %d\n", element);
    display(top);
    return 0;
}
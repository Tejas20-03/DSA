#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void Traversal(struct Node *ptr)
{
    printf("Printing Elements of the Linked list....");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enquee(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue is FULL\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = NULL;
            r = n;
        }
    }
}

int dequee()
{
    int val = -1;
    struct Node *ptr;
    if (f == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{
    enquee(14);
    enquee(28);
    enquee(32);
    Traversal(f);
    printf("After Dequee\n");
    int element = dequee();
    printf("Removed Element: %d", element);
    return 0;
}
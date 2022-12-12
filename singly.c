#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int search(struct Node *ptr, int element)
{
    struct Node *p = ptr;
    while (p != NULL)
    {
        if (p->data == element)
        {
            return 1;
        }
        p = p->next;
    }
    return -1;
}

void insert(struct Node *ptr, int element, int position)
{
    struct Node *q = (struct Node *)malloc(sizeof(struct Node));
    int count;
    struct Node *p = ptr;
    while (p != NULL)
    {
        count++;
        if (count == position - 1)
        {
            break;
        }
    }
    q->data = element;
    q->next = p->next;
    p->next = q;
}

int delete(struct Node *ptr, int position)
{
    struct Node *p=ptr;
    struct Node *q=ptr->next;
    int i=0;
    while (i<position-1)
    {
        q=q->next;
        p=p->next;
    }
    p->next=q->next;
    free(q);
    return ptr;
}

int main()
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p1 = (struct Node *)malloc(sizeof(struct Node));
    p->data = 5;
    p->next = p1;
    p1->data = 10;
    p1->next = NULL;
    linkedlisttraversal(p);
    printf("5 found: %d\n", search(p, 5));
    printf("15 found: %d\n", search(p, 15));

    // printf("-----Insertion in Linked list-----\n");
    // insert(p,8,2);
    printf("-----Deletion in Linked list-----\n");
    p=delete (p, 1);
    linkedlisttraversal(p);
}
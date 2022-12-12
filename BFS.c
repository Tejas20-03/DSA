#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct Queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enquee(struct Queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue Overflow!!!");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequee(struct Queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue Underflow!!!");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct Queue q;
    q.size = 400;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // BFS Implementation

    int u;
    int i = 0;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int a[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};
    printf("%d", i);
    visited[i] = 1;
    enquee(&q, i);
    while (!isEmpty(&q))
    {
        u = dequee(&q);
        for (int j = 0; j < 7; j++)
        {
            if (a[u][j] == 1 && visited[j] == 0)
            {
                printf("%d", j);
                visited[j] = 1;
                enquee(&q, j);
            }
        }
    }

    return 0;
}
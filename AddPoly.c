#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int coef;
    int expo;
    struct Node *next;
};

struct Node *createNode(int coeff, int pow)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->coef = coeff;
    p->expo = pow;
    p->next = NULL;
    return p;
}

void addpoly(struct Node *head1, struct Node *head2)
{
    struct Node *temp1 = head1;
    struct Node *temp2 = head2;
    while (temp1 != NULL)
    {
        while (temp2 != NULL)
        {
            if (temp1->expo == temp2->expo)
            {
                temp1->coef = temp1->coef + temp2->coef;
                break;
            }
            temp2 = temp2->next;
        }
        temp2 = head2;
        temp1 = temp1->next;
    }
    // return temp1;
}

// void add(struct Node *head1, struct Node *head2)
// {
//     struct Node *temp1 = head1;
//     struct Node *temp2 = head2;
//     struct Node *ptr;
//     struct Node *result = (struct Node *)malloc(sizeof(struct Node));
//     while (temp1 != NULL)
//     {
//         temp1 = temp1->next;
//     }
//     temp1->next = temp2;
//     temp1 = head1;
//     ptr = temp1->next;
//     while (temp1 != NULL)
//     {
//         while (ptr != NULL)
//         {
//             if (temp1->expo == ptr->expo)
//             {
//                 result->expo = temp1->expo;
//                 result->coef = temp1->coef + ptr->coef;
//                 result->next = NULL;
//             }
//         }
//     }
// }

void dispaly(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%dx%d\n", ptr->coef, ptr->expo);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *Node1;
    struct Node *Node2;
    struct Node *Node3;
    struct Node *Node4;
    struct Node *Node5;
    struct Node *Node6;
    struct Node *result = (struct Node *)malloc(sizeof(struct Node));
    struct Node *head1;
    struct Node *head2;
    Node1 = createNode(5, 2);
    Node2 = createNode(11, 1);
    Node3 = createNode(7, 0);
    Node4 = createNode(1, 1);
    Node5 = createNode(8, 2);
    Node6 = createNode(3, 0);

    head1 = Node1;
    head2 = Node4;
    Node1->next = Node2;
    Node2->next = Node3;
    Node4->next = Node5;
    Node5->next = Node6;

    addpoly(head1, head2);
    dispaly(head1);

    return 0;
}
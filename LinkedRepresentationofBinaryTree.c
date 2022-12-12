#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node{
    int data;
    struct Node* left;
    struct Node * right;
};

struct Node *createNode(int data){
    struct Node *n;
    n=(struct Node *)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;

    return n;
}



int main(){
    struct Node *p=createNode(2);
    struct Node *p1=createNode(5);
    struct Node *p2=createNode(7);
    struct Node *p3=createNode(3);
    struct Node *p4=createNode(11);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    preorder(p);

    return 0;
}
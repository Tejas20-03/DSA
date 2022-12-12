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

void inorder(struct Node*p){
    if(p!=NULL){
        inorder(p->left);
        printf("%d ",p->data);
        inorder(p->right);
    }
}

int isBST(struct Node*p){
    static struct Node *prev=NULL;
    if(p!=NULL){
        if(!isBST(p->left)){
            return 0;
        }
        if(prev!=NULL && p->data<=prev->data){
            return 0;
        }
        prev=p;
        return isBST(p->right);
    }else{
        return 1;
    }
}

struct Node* search(struct Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left,key);
    }else{
        search(root->right,key);
    }
}

int main(){
    struct Node *p=createNode(5);
    struct Node *p1=createNode(3);
    struct Node *p2=createNode(8);
    struct Node *p3=createNode(1);
    struct Node *p4=createNode(4);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    struct Node * n=search(p,6);
    if(n!=NULL){
        printf("Found: %d",n->data);
    }
    else{
        printf("Element Not Found");
    }

    return 0;
}
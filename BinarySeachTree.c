// #include<stdio.h>
// #include<stdlib.h>
// #include<malloc.h>

// struct Node{
//     int data;
//     struct Node* left;
//     struct Node * right;
// };

// struct Node *createNode(int data){
//     struct Node *n;
//     n=(struct Node *)malloc(sizeof(struct Node));
//     n->data=data;
//     n->left=NULL;
//     n->right=NULL;

//     return n;
// }

// void inorder(struct Node*p){
//     if(p!=NULL){
//         inorder(p->left);
//         printf("%d ",p->data);
//         inorder(p->right);
//     }
// }

// int isBST(struct Node*p){
//     static struct Node *prev=NULL;
//     if(p!=NULL){
//         if(!isBST(p->left)){
//             return 0;
//         }
//         if(prev!=NULL && p->data<=prev->data){
//             return 0;
//         }
//         prev=p;
//         return isBST(p->right);
//     }else{
//         return 1;
//     }
// }



// int main(){
//     struct Node *p=createNode(5);
//     struct Node *p1=createNode(3);
//     struct Node *p2=createNode(6);
//     struct Node *p3=createNode(1);
//     struct Node *p4=createNode(4);

//     p->left=p1;
//     p->right=p2;
//     p1->left=p3;
//     p1->right=p4;

//     inorder(p);
//     printf("\n");
//     printf("%d",isBST(p));

//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data){
    struct Node *n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

int isBST(struct Node *n){
    static struct Node *p=NULL;
    if(n!=NULL){
        if(!isBST(n->left)){
            return 0;
        }
        if(p!=NULL && n->data<=p->data){
            return 0;
        }
        p=n;
        return isBST(n->right);
    }else{
        return 1;
    }
}

void inorder(struct Node *p){
    if(p!=NULL){
        inorder(p->left);
        printf("%d\n",p->data);
        inorder(p->right);
    }
}

int main(){
    struct Node *p=createNode(5);
    struct Node *p1=createNode(3);
    struct Node *p2=createNode(7);
    struct Node *p3=createNode(1);
    struct Node *p4=createNode(4);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    inorder(p);
    printf("\n");
    printf("%d\n",isBST(p));
    return 0;
}
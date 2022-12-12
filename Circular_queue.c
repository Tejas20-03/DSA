#include<stdio.h>
#include<stdlib.h>

struct CQueue{
    int size;
    int f;
    int r;
    int * arr;
};

int isEmpty(struct CQueue *q){
    if(q->f==q->r){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct CQueue *q){
    if((q->r+1)%q->size==q->f){
        return 1;
    }else{
        return 0;
    }
}

int enquee(struct CQueue *q,int val){
    if(isFull(q)){
        printf("Queue overflow\n");
    }else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
    }
}

int dequee(struct CQueue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("Queue Underflow\n");
    }else{
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
    }
    return a;
}

int main(){
    struct CQueue q;
    q.size=4; 
    q.f=q.r=0;
    q.arr=(int *)malloc(q.size*sizeof(int));
    enquee(&q,5);
    enquee(&q,6);
    enquee(&q,7);
    // enquee(&q,8);
    // printf("Deleted Element : %d\n",dequee(&q));
    printf("Deleted Element : %d\n",dequee(&q));
    printf("Deleted Element : %d\n",dequee(&q));
    printf("Deleted Element : %d\n",dequee(&q));
    enquee(&q,11);
    printf("After Operation, Queue is Empty? : %d\n",isEmpty(&q));
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int front;
    int rear;
    int *arr;
};

int isFull(struct Queue *q){
    if(q->rear==q->size-1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct Queue *q){
    if(q->front==q->rear){
        return 1;
    }else{
        return 0;
    }
}

void enquee(struct Queue *q,int val){
    if(isFull(q)){
        printf("This Queue is Full\n");
    }else{
        q->rear++;
        q->arr[q->rear]=val;
    }
}

int dequee(struct Queue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("This Queue is Empty\n");
    }else{
        q->front++;
        a=q->arr[q->front];
    }
    return a;
}

int display(struct Queue *q){

}


int main(){
    struct Queue q;
    q.size=10;
    q.front=q.rear=-1;
    q.arr=(int *)malloc(q.size*sizeof(int));
    printf("Queue before Enquee: %d\n",isEmpty(&q));
    enquee(&q,10);
    enquee(&q,12);
    enquee(&q,13);
    enquee(&q,14);
    enquee(&q,16);
    enquee(&q,11);
    enquee(&q,19);
    enquee(&q,21);
    enquee(&q,33);
    printf("Queue after Enquee: %d\n",isEmpty(&q));
    printf("After Dequee\n");
    int element = dequee(&q);
    printf("Deleted Element : %d\n",element);
    return 0;
}
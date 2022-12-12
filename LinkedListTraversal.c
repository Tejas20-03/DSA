#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};


void linkedlisttraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

void linkedlistcount(struct Node *ptr){
    int count;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
    }
    printf("Total Number of Node: %d\n",count);
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;


    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=5;
    head->next=second;

    second->data=12;
    second->next=third;

    third->data=55;
    third->next=fourth;

    fourth->data=32;
    fourth->next=NULL;
    

    linkedlisttraversal(head);
	linkedlistcount(head);
    return 0;
}

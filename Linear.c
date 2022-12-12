#include<stdio.h>

int linear_search(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
    printf("---Enter Elements in the Array---\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    int element;
    printf("Enter Element to Search in Array: ");
    scanf("%d",&element);
    int x=linear_search(arr,n,element);
    if(x==-1){
        printf("Element Not Found!!!\n");
    }else{
        printf("Element Found at %dth place \n",x+1);
    }
    return 0;
}
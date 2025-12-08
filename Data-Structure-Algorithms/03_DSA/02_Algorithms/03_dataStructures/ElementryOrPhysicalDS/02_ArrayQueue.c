#include <stdio.h>

#define SIZE 10

void addQ(int *arr,int data, int *pfront, int *prear){
    if(*prear == SIZE-1){
        printf("Queue is full:\n");
        return;
    }
    (*prear)++;
    arr[*prear]=data;

    if(*pfront == -1)
        *pfront=0;
}

int delQ(int *arr, int *pfront, int *prear){
    int data;
    if(*pfront == -1){
        printf("Queue is empty:\n");
        return 0;
    }
    data=arr[*pfront];
    arr[*pfront]=0;
    if(*pfront == *prear)
        *pfront = *prear = -1;
    else
        (*pfront)++;
    
    return data;

}

int main(){
    int arr[SIZE];
    int front = -1, rear = -1;
    int i;

    addQ(arr,33,&front,&rear);
    i=delQ(arr,&front,&rear);
    i=delQ(arr,&front,&rear);
    if(i==0)
        printf("data deleted:%d\n",i);

}
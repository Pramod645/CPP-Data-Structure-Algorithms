#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void addQ(int *arr, int data,int *pfront, int *prear){
    if(*prear == SIZE-1){
        printf("Queue is full\n");
        return;
    }
    (*prear)++;
    arr[*prear]=data;

    if(*pfront==-1)
        *pfront=0;
}

int delQ(int *arr, int *pfront, int *prear){
    int data;
    if(*pfront==-1){
        printf("Queue is Empty\n");
        return 0;
    }

    data=arr[*pfront];
    arr[*pfront]=0;
    if(*pfront==*prear)
        *pfront=*prear=-1;
    else
        (*pfront)++;

    return data;
}

int main(){

    int arr[SIZE];
    int front = 1, rear=-1;
    int a,i;
    for(i=0;i<SIZE;i++)
        arr[i]=0;
    addQ(arr,23,&front,&rear);
    for(i=0;i<SIZE;i++)
    printf("%d ",arr[i]);
    printf("\n");
    a=delQ(arr, &front,&rear);
    if(a!=0)
        printf("Front data deeted:%d\n", a);
    
    for(i=0;i<SIZE;i++)
        printf("%d ",arr[i]);
    
    return 0;
}
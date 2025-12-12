#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void addQ(int *arr, int data, int *pfront, int *prear){
    if((*prear==SIZE-1 && *pfront==0) || (*prear+1==*pfront)){
        printf("Queue is full:\n");
        return;
    }
    if(*prear==SIZE-1)
        *prear = 0;
    else
        (*prear)++;

    arr[*prear]=data;

    if(*pfront==-1)
        *pfront=0;

}

int delQ(int *arr, int *pfront, int *prear){
    int data;
    if(*pfront==-1){
        printf("Queue is empty:\n");
        return 0;
    }
    data=arr[*pfront];
    arr[*pfront]=0;

    if(*pfront==*prear){
        *pfront=-1;
        *prear=-1;
    }else{
        if(*pfront==SIZE-1)
            *pfront=0;
        else
            (*pfront)++;
    }
    return data;
}

void display(int *arr){
    int a;
    for(a=0;a<SIZE;a++)
        printf("%d\t",arr[a]);
    printf("\n");
}

int main(){
    int arr[SIZE];
    int a, front, rear;
    front=rear=-1;
    for(a=0;a<SIZE;a++)
        arr[a]=0;

    addQ(arr, 23,&front,&rear);
    addQ(arr, 233,&front,&rear);
    addQ(arr, 23,&front,&rear);
    addQ(arr, 233,&front,&rear);
    addQ(arr, 23,&front,&rear);
    addQ(arr, 233,&front,&rear);
    addQ(arr, 23,&front,&rear);
    addQ(arr, 233,&front,&rear);
    addQ(arr, 23,&front,&rear);
    addQ(arr, 2335,&front,&rear);
    //addQ(arr, 23,&front,&rear);
    //addQ(arr, 233,&front,&rear);
    delQ(arr,&front,&rear);
    delQ(arr,&front,&rear);
    delQ(arr,&front,&rear);
    delQ(arr,&front,&rear);
    delQ(arr,&front,&rear);
    delQ(arr,&front,&rear);
    delQ(arr,&front,&rear);
    delQ(arr,&front,&rear);
    delQ(arr,&front,&rear);
    //delQ(arr,&front,&rear);
    //delQ(arr,&front,&rear);
   // delQ(arr,&front,&rear);
   // delQ(arr,&front,&rear);
   addQ(arr, 2335,&front,&rear);
   addQ(arr, 2335,&front,&rear);

    display(arr);

    return 0;
}
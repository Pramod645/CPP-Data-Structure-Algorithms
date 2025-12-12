//Qouble ended Queue , can be delated or added from either of side
//Qeque named
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void display(int *arr){
    int i;
    printf("\n");
    printf("front->");
    for(i=0;i<SIZE;i++)
        printf("%d\t",arr[i]);
    printf("<-rear");
    printf("\n");
}

int count(int *arr){
    int c=0,i;
    for(i=0;i<SIZE;i++){
        if(arr[i]!=0)
            c++;
    }
    return c;
}

void addQatBeg(int *arr, int data, int *pfront, int *prear){
    int i,k,c;
    if(*pfront==0 && *prear == SIZE-1){
        printf("Deque is full:\n");
        return;
    }
    if(*pfront == -1){
        *pfront=*prear=0;
        arr[*pfront]=data;
        return;
    }
    if(*prear!=SIZE-1){
        c=count(arr);
        k=*prear+1;
        for(i=1;i<=c;i++){
            arr[k]=arr[k-1];
            k--;
        }
        arr[k]=data;
        *pfront=k;
        (*prear)++;
    }else{
        (*pfront)--;
        arr[*pfront]=data;
    }
}

void addQatEnd(int *arr, int data, int *pfront, int *prear){
    int i, k;
    if(*pfront==0 && *prear==SIZE-1){
        printf("Deque is full\n");
        return;
    }
    if(*pfront==-1){
        *prear=*pfront=0;
        arr[*prear]=data;
        return;
    }

    if(*prear==SIZE-1){
        k=*pfront-1;
        for(i=*pfront-1;i<*prear;i++){
            k=i;
            if(k==SIZE-1)
                arr[k]=0;
            else
                arr[k]=arr[i+1];
        }
        (*prear)++;
        arr[*prear]=data;
    }
}
int delQatBeg(int *arr,int *pfront,int *prear){
    int k;
    if(*pfront==-1){
        printf("Deque is empty\n");
        return 0;
    }

    k=arr[*pfront];
    arr[*pfront]=0;

    if(*pfront==*prear)
        *pfront=*prear=-1;
    else
        (*pfront)++;
    
    return k;
}
int delQatEnd(int *arr, int *pfront, int *prear){
    int k;
    if(*pfront==-1){
        printf("Deque is empty\n");
        return 0;       
    }

    k=arr[*prear];
    arr[*prear]=0;
    (*prear)--;
    if(*prear==-1)
        *pfront=-1;
    
    return k;
}

int main(){
    int arr[SIZE];
    int front, rear, i, n;
    front=rear=-1;
    for(i=0;i<SIZE;i++)
        arr[i]=0;

    //addQatBeg(arr,14,&front,&rear);
    //addQatEnd(arr,143,&front,&rear);
    //addQatBeg(arr,14,&front,&rear);
    //addQatEnd(arr,143,&front,&rear);
    display(arr);
    n=count(arr);
    printf("Total number elements:%d\n",n);

    i=delQatBeg(arr,&front,&rear);
    i=delQatEnd(arr,&front,&rear);
    display(arr);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>

void restoreDown(int pos,int *arr,int n){
    int i,val;
    val=arr[pos];
    while(pos<=n/2){
        i=2*pos;
        if((i<n)&&(arr[i]<arr[i+1]))
            i++;
        if(val>=arr[i])
            break;
        arr[pos]=arr[i];
        pos=i;
    }
    arr[pos]=val;
}

void makeHeap(int *arr,int n){
    int i;
    for(i=n/2;i>=1;i--){
        restoreDown(i,arr,n);
    }
}

void restoreUp(int i,int *arr){
    int val;
    val=arr[i];
    while(arr[i/2]<=val){
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=val;
}

void add(int val,int *arr, int *n){
    (*n)++;
    arr[*n]=val;
    restoreUp(*n,arr);
}

int replace(int i, int *arr, int n){
    int r=arr[1];
    arr[1]=i;
    for(i=n/2;i>=1;i--){
        restoreDown(i,arr,n);
    }
    return r;
}

int del(int *arr,int *n){
    int val;
    val=arr[1];
    arr[1]=arr[*n];
    (*n)--;
    restoreDown(1,arr,*n);
    return val;
}

int main(){
    int arr[20]={15,6,8,25,78,45,21,67,76,89,88,34,81,100,101,102};
    int i, n=15;
    makeHeap(arr,n);
    printf("Heap\n");
    for(i=0;i<=n;i++)
        printf("%d\t",arr[i]);

    i=24;
    add(i,arr,&n);
    printf("\n\n");
    printf("Element added %d.\n\n",i);
    printf("Heapafter added an emement:\n");
    for(i=0;i<=n;i++)
        printf("%d\t",arr[i]);

    i=replace(15,arr,n);
    printf("\n\n");
    printf("Element added %d.\n\n",i);
    printf("Heapafter replacement an emement:\n");
    for(i=0;i<=n;i++)
        printf("%d\t",arr[i]);
    
    i=del(arr,&n);
    printf("\n\n");
    printf("Element deleted %d.\n\n",i);
    printf("Heapafter delete an emement:\n");
    for(i=0;i<=n;i++)
        printf("%d\t",arr[i]);

    return 0;
}
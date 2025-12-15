#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int split(int a[],int lower, int upper){
    int i,p,q,t;
    p=lower+1;
    q=upper;
    i=a[lower];

    while(q>=p){
        while(a[p]<i)
            p++;
        while(a[q]>i)
            q--;
        if(q>p){
            t=a[p];
            a[p]=a[q];
            a[q]=t;
        }
    }
    t=a[lower];
    a[lower]=a[q];
    a[q]=t;

    return q;
}

void quickSort(int a[],int lower,int upper){
    int i;
    if(upper>lower){
        i=split(a,lower,upper);
        quickSort(a,lower,i-1);
        quickSort(a,i+1,upper);
    }
    
}

int main(){
    int arr[10]={11,2,9,13,57,25,17,1,90,3};
    int i;

    printf("Quick Sort:\n");
    printf("Aarry before sorting:\n");
    for(i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }

    quickSort(arr,0,9); // array, start and end position
    printf("\n");
    printf("Aarry After Qucik Sort:\n");
    for(i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}
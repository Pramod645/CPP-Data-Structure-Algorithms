#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>

int main(){
    int arr[10]={23,45,76,89,7,1,23,56,25,52};
    int mid,lower=0,upper=9,flag=1;
    int searchElement=56;

    printf("Element to be seaarched is %d: \n",searchElement);

    for(mid=(lower+upper)/2;lower<=upper;mid=(lower+upper)/2){
        if(arr[mid]==searchElement){
            printf("Presetn at position %d:\n",mid);
            flag=0;
            break;
        }
        if(arr[mid]>searchElement)
            upper=mid-1;
        else
            lower=mid+1;
    }
    if(flag)
        printf("NOt Presetn in the list:\n");   

    return 0;
}
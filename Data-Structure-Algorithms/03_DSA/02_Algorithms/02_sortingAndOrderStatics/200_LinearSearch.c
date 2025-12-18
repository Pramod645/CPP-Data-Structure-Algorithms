#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>

int main(){
    int arr[10]={23,45,76,89,7,1,23,56,25,52};
    int i,temp, searchElement=56;

    printf("Element to be seaarched is %d: \n",searchElement);

    for(i=0;i<10;i++){
        if(arr[i]==searchElement)
            break;
    }
    if(i==10)
        printf("Not avaialble in list: \n");
    else
    printf("Presetn at position %d:\n",i);

    return 0;
}
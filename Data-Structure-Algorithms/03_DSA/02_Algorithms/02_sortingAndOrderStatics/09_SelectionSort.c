#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>

int main(){
    int arr[10]={23,45,76,89,7,1,23,56,25,52};
    int i,j,k,temp;

    printf("\n");
    printf("Selection Sort:\n");
    printf("Array before sorting:\n");
    for(i=0;i<10;i++)
        printf("%d\t",arr[i]);
    
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("\n");
    printf("Array after Selection sort: \n");

    for(i=0;i<10;i++)
        printf("%d\t",arr[i]);

    return 0;
}
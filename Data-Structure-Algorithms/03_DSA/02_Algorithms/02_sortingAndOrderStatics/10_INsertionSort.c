#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>

int main(){
    int arr[10]={23,45,76,89,7,1,23,56,25,52};
    int i,j,k,temp;

    printf("INsertion sort:\n");
    printf("Array before sorting:\n");
    for(i=0;i<10;i++)
        printf("%d\t",arr[i]);

    for(i=1;i<10;i++){
        for(j=0;j<i;j++){
            if(arr[j]>arr[i]){
                temp=arr[j];
                arr[j]=arr[i];

                for(k=i;k>j;k--)
                    arr[k]=arr[k-1];
                
                arr[k+1]=temp;
            }
        }
    }

    printf("\n");
    printf("Array after insertion sort: \n");

    for(i=0;i<10;i++)
        printf("%d\t",arr[i]);

        
    return 0;
}
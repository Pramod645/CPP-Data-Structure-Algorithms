#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>


int main(){
    int a[5]={23,4,78,23,45};
    int b[5]={56,89,98,2,1};
    int c[10];
    int i,j,k,temp;

    printf("Merge Sort:\n");

    printf("\nFirst Arra:\n");
    for(i=0;i<=4;i++)
        printf("%d\t",a[i]);

    printf("\nSecond Arra:\n");
    for(i=0;i<=4;i++)
        printf("%d\t",b[i]);

    for(i=0;i<=3;i++){
        for(j=i+1;j<=4;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            if(b[i]>a[j]){
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }

    for(i=j=k=0;i<=9;){
        if(a[j]<=b[k])
            c[i++]=a[j++];
        else
            c[i++]=b[k++];

        if(j==5 || k==5)
            break;
    }

    for(;j<=4;)
        c[i++]=a[j++];

    for(;k<=4;)
        c[i++]=b[k++];

    printf("\n");
    printf("\nArray after sorting:\n");
    for(i=0;i<=9;i++)
        printf("%d\t",c[i]);

    return 0;
}
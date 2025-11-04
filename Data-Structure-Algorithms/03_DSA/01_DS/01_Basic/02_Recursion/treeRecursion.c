#include <stdio.h>

void treeFunc(int n){
    if(n > 0){
        printf ("%d", n);
        treeFunc(n-1);
        treeFunc(n-1);
    }
}

int main(){

    treeFunc(3);
    return 0;
}
/*
Searchin, insertion and deletion are basic operation that are required to maintain tree.
1.Search. based on equal, less than and greather than
2.Insertion.
3.deletion. four possible way
a. No node in the tree containing the specific data.
2.The node3 containing the data has no children
3.The node containing the data has exactly one child
d.The node containing the data has two children
*/
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

struct node{
    struct node *left;
    int data;
    struct node *right;

};

int main(){
    struct node *bt;
    int i=0,a[]={11,9,13,8,10,12,14,15,7};
    bt=NULL;

    while(i<=8){
        insert(&bt,a[i]);
        i++;
    }

    printf("Binary tree before deletion:\n");

    return 0;
}


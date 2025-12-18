#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>

struct node{
    struct node *left;
    int data;
    struct node *right;
};

void inOrder(struct node *bts){
    if(bts!=NULL){
        inOrder(bts->left);
        printf("%d\t",bts->data);
        inOrder(bts->right);
    }
}

void insert(struct node **bts, int num){
    if(*bts==NULL){
        *bts=(struct node *)malloc(sizeof(struct node));
        (*bts)->left=NULL;
        (*bts)->data=num;
        (*bts)->right=NULL;
    }else{
        if(num<(*bts)->data)
            insert(&((*bts)->left),num);
        else
        insert(&((*bts)->right),num);
    }
}

int main(){
    struct node *bts;
    int arr[10]={23,56,7,8,23,22,23,1,2,6};
    int i;
    bts=NULL;

    printf("Binary Tree Sort:\n");

    printf("Array:\n");
    for(i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }

    for(i=0;i<10;i++){
        insert(&bts,arr[i]);
    }

    printf("\n");
    printf("IN-order traversal of binary tree:\n");
    inOrder(bts);

    return 0;

}
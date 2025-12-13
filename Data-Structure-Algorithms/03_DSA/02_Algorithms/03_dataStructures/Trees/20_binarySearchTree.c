/*
Many algorithm that use binary trees processed in two phases. 1. build the binary tree and then trversal the tree.
BST has property that all the elements in the left sub-tree of a node n are less then the contents of n. and all the elements in the right  sub-tree of n are greather than or equal to the contents of n.
*/

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>

struct node{
    struct node *left;
    int data;
    struct node *right;
};

void insert(struct node **sr, int num){
    if(*sr==NULL){
        *sr=(struct node *)malloc(sizeof(struct node));
        (*sr)->left=NULL;
        (*sr)->data=num;
        (*sr)->right=NULL;
        return;
    }else{ // search node to which new node will be attached
        if(num<(*sr)->data)
            insert(&((*sr)->left),num);
        else
            //else traversal to right
            insert(&((*sr)->right),num);
    }
    return;
}
/* Traversal a binary search tree in a LDR(Left-Data-Right) fashion */
void inOrder(struct node *sr){
    if(sr!=NULL){
        inOrder(sr->left);
        printf("%d\t",sr->data);
        inOrder(sr->right);
    }else{
        return;
    }
}
/* Traversal a binary search tree in a DLR(Data-Left-Right) fashion */
void preOrder(struct node *sr){
    if(sr!=NULL){
        printf("%d\t",sr->data);
        preOrder(sr->left);
        preOrder(sr->right);
    }else{
        return;
    }
}
/* Traversal a binary search tree in a LRD(DLeft-Right-Data) fashion */
void postOrder(struct node *sr){
    if(sr!=NULL){
        postOrder(sr->left);
        postOrder(sr->right);
        printf("%d\t",sr->data);
    }else{
        return;
    }
}
int main(){
    struct node *bt;
    int req, i=1,num;
    bt=NULL;
    printf("Specify the number of items to be inserted:");
    scanf("%d",&req);

    while(i++<=req){
        printf("Enter data:");
        scanf("%d",&num);
        insert(&bt,num);
    }

    printf("\n");
    printf("In-Order Traversal:\n");
    inOrder(bt);

    printf("\n");
    printf("Pre-Order Traversal:\n");
    preOrder(bt);

    printf("\n");
    printf("Post-Order Traversal:\n");
    postOrder(bt);

    return 0;
}
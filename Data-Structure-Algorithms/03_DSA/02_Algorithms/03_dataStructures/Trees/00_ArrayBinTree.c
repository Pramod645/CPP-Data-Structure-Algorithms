#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>
//left child occurs at 2n+1 and right child at 2n+2
struct node{
    struct node *left;
    char data;
    struct node *right;
};

struct node *buildTree(int);
void inOrder(struct node *);

char arr[]={'A','B','C','D','E','F','G','\0','\0','H'};
int lc[]={1,3,5,-1,9,-1,-1,-1,-1,-1};
int rc[]={2,4,6,-1,1,-1,-1,-1,-1,-1};

void inOrder(struct node *root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%c\t",root->data);
        inOrder(root->right);
    }
}

struct node *buildTree(int index){
    struct node *temp=NULL;
    if(index!=-1){
        temp=(struct node *)malloc(sizeof(struct node));
        temp->left=buildTree(lc[index]);//temp->left=buildTree(2*n+1)
        temp->data=arr[index];
        temp->right=buildTree(rc[index]);//temp->right=buildTree(2*n+2)
    }
    return temp;
}

int main(){

    struct node *root;
    root=buildTree(0);

    printf("In-Order Traversal:\n");
    inOrder(root);

    return 0;
}
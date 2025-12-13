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

void inOrder(struct node *sr){
    if(sr!=NULL){
        inOrder(sr->left);
        printf("%d\t",sr->data);
        inOrder(sr->right);
    }
}

void search(struct node **root,int num, struct node **par,struct node **x,int *found){
    struct node *q;
    q=*root;
    *found=FALSE;
    *par=NULL;
    while(q!=NULL){
        if(q->data==num){// if node to be deleted found
            *found=TRUE;
            *x=q;
            return;
        }

        *par=q;

        if(q->data>num)
            q=q->left;
        else
            q=q->right;
    }
}

void insert(struct node **sr, int num){
    if(*sr==NULL){
        *sr=(struct node *)malloc(sizeof(struct node));
        (*sr)->left=NULL;
        (*sr)->data=num;
        (*sr)->right=NULL;
    }else{ // search the node to while new node will be attached
        if(num<(*sr)->data)
            insert(&((*sr)->left),num);
        else
            //else traversal to right
            insert(&((*sr)->right),num);
    }
}

void del(struct node **root, int num){
    int found;
    struct node *parent,*x,*xsucc;
    if(*root==NULL){
        //If tree is empty
        printf("Tree is empty:\n");
        return;
    }

    parent=x=NULL;
    search(root,num,&parent,&x,&found);// search to find the node to be deleted

    if(found==FALSE){
        printf("Data not found which need to be deleted:\n");
        return;
    }

    /* if deleted node have two children*/
    if(x->left!=NULL && x->right!=NULL){
        parent=x;
        xsucc=x->right;

        while(xsucc->left!=NULL){
            parent=xsucc;
            xsucc=xsucc->left;
        }

        x->data=xsucc->data;
        x=xsucc;
    }

    /* If node to deleted has no child */
    if(x->left==NULL && x->right==NULL){
        if(parent->right==x)
            parent->right=NULL;
        else
        parent->left=NULL;

        free(x);
        return;
    }

    /* If node to deleted has only right child */
    if(x->left==NULL && x->right!=NULL){
        if(parent->left==x)
            parent->left=x->right;
        else
            parent->right=x->right;

        free(x);
        return;
    }

    /* If node to deleted has only right child */
    if(x->left!=NULL && x->right==NULL){
        if(parent->left==x)
            parent->left=x->left;
        else
            parent->right=x->left;
    
        free(x);
        return;
    }
}

int main(){
    struct node *bt;
    int i=0,a[]={11,9,13,8,10,12,14,15,7};
    bt=NULL;

    while(i<=8){
        insert(&bt,a[i]);
        i++;
    }

    printf("Binary tree before deletion:\n");
    inOrder(bt);

    del(&bt,10);
    printf("\n");
    printf("Binary tree after deletion:\n");
    inOrder(bt);

    del(&bt,104);
    printf("\n");
    printf("Binary tree after deletion:\n");
    inOrder(bt);
    
    del(&bt,8);
    printf("\n");
    printf("Binary tree after deletion:\n");
    inOrder(bt);
    
    del(&bt,13);
    printf("\n");
    printf("Binary tree after deletion:\n");
    inOrder(bt);

    return 0;
}


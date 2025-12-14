#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>

#define FALSE 0
#define TRUE 1

struct AVLnode{
    int data;
    int balfact;
    struct AVLnode *left;
    struct AVLnode *right;
};

void display(struct AVLnode *root){
    if(root!=NULL){
        display(root->left);
        printf("%d\t",root->data);
        display(root->right);
    }
}

void delTree(struct AVLnode *root){
    if(root!=NULL){
        delTree(root->left);
        delTree(root->right);
    }
    free(root);
}

struct AVLnode *buildTree(struct AVLnode *root, int data,int *h){
    struct AVLnode *node1,*node2;
    if(!root){
        root=(struct AVLnode *)malloc(sizeof(struct AVLnode));
        root->data=data;
        root->left=NULL;
        root->right=NULL;
        root->balfact=0;
        *h=TRUE;
        return(root);
    }

    if(data<root->data){
        root->left=buildTree(root->left,data,h);
        if(*h){// if left tree is higher
            switch(root->balfact){
                case 1:
                    node1=root->left;
                    if(node1->balfact==1){
                        printf("right rotation along %d\n",root->data);
                        root->left=node1->right;
                        node1->right=root;
                        root->balfact=0;
                        root=node1;
                    }else{
                        printf("double rotation, left along %d\n",node1->data);
                        node2=node1->right;
                        node1->right=node2->left;
                        printf("then right  along %d\n",root->data);
                        node2->left=node1;
                        root->left=node2->right;
                        node2->right=root;
                        if(node2->balfact==1)
                            root->balfact=-1;
                        else
                            root->balfact=0;
                        
                        if(node2->balfact==-1)
                            node1->balfact=1;
                        else
                            node1->balfact=0;
                        
                        root=node2;
                    }
                    root->balfact=0;
                    *h=FALSE;
                    break;
                
                case 0:
                    root->balfact=1;
                    break;
                case -1:
                    root->balfact=0;
                    *h=FALSE;
            }
        }
    }
    if(data>root->data){
        root->right=buildTree(root->right,data, h);
        if(*h){// if right subtree higher
            switch(root->balfact){
                case 1:
                    root->balfact=0;
                    *h=FALSE;
                    break;
                case 0:
                    root->balfact=-1;
                    break;
                case -1:
                    node1=root->right;
                    if(node1->balfact==-1){
                        printf("left  rotation along %d\n",root->data);
                        root->right=node1->left;
                        node1->left=root;
                        root->balfact=0;
                        root=node1;
                    }else{
                        printf("double rotation,right  along %d\n",node1->data);
                        node2=node1->left;
                        node1->left=node2->right;
                        node2->right=node1;
                        printf("then left  along %d\n",root->data);
                        root->right=node2->left;
                        node2->left=root;

                        if(node2->balfact==-1)
                            root->balfact=1;
                        else
                            root->balfact=0;

                        if(node2->balfact==1)
                            node1->balfact=-1;
                        else
                            node1->balfact=0;
                        
                        root=node2;
                    }
                    root->balfact=0;
                    *h=FALSE;
            }
        }
    }
    return(root);
}

struct AVLnode *balLeft(struct AVLnode *root,int *h){
    struct AVLnode *node1,*node2;
    switch(root->balfact){
        case -1:
            root->balfact=0;
            break;
        case 0:
            root->balfact=1;
            *h=FALSE;
            break;
        case 1:
            node1=root->left;
            if(node1->balfact>=0){
                printf("right  rotation along %d\n",root->data);
                root->left=node1->right;
                node1->right=root;
                if(node1->balfact==0){
                    root->balfact=1;
                    node1->balfact=-1;
                    *h=FALSE;
                }else{
                    root->balfact=node1->balfact=0;
                }
                root=node1;
            }else{
                printf("double rotation,left along %d\n",node1->data);
                node2=node1->right;
                node1->right=node2->left;
                node2->left=node1;
                printf("then right  along %d\n",root->data);
                root->left=node2->right;
                node2->right=root;

                if(node2->balfact==1)
                    root->balfact=-11;
                else
                    root->balfact=0;
                if(node2->balfact==-1)
                    node1->balfact=1;
                else
                    node1->balfact=0;
                
                root=node2;
                node2->balfact=0;
            }
    }
    return (root);
}

struct AVLnode *balRight(struct AVLnode *root,int *h){
    struct AVLnode *node1,*node2;
    switch(root->balfact){
        case 1:
            root->balfact=0;
            break;
        case 0:
            root->balfact=-1;
            *h=FALSE;
            break;
        case -1:
            node1=root->right;
            if(node1->balfact<=0){
                printf("left  rotation along %d\n",root->data);
                root->right=node1->left;
                node1->left=root;
                if(node1->balfact==0){
                    root->balfact=-1;
                    node1->balfact=1;
                    *h=FALSE;
                }else{
                    root->balfact=node1->balfact=0;
                }
                root=node1;
            }else{
                printf("double rotation,right along %d\n",node1->data);
                node2=node1->left;
                node1->left=node2->right;
                node2->right=node1;
                printf("then left  along %d\n",root->data);
                root->right=node2->left;
                node2->left=root;

                if(node2->balfact==-1)
                    root->balfact=1;
                else
                    root->balfact=0;
                if(node2->balfact==1)
                    node1->balfact=-1;
                else
                    node1->balfact=0;
                
                root=node2;
                node2->balfact=0;
            }
    }
    return (root);
}

struct AVLnode *del(struct AVLnode *succ, struct AVLnode *node,int *h){
    struct AVLnode *temp=succ;
    if(succ->left!=NULL){
        succ->left=del(succ->left,node,h);
        if(*h)
            succ=balRight(succ,h);
    }else{
            temp=succ;
            node->data=succ->data;
            succ=succ->right;
            free(temp);
            *h=TRUE;
    }
    return (succ);
}

struct AVLnode *delNode(struct AVLnode *root,int data,int *h){
    struct AVLnode *node;
    if(!root){
        printf("No data:");
        return (root);
    }else{
        if(data<root->data){
            root->left=delNode(root->left,data, h);
            if(*h)
                root=balRight(root, h);
        }else{
            if(data>root->data){
                root->right=delNode(root->right,data,h);
                if(*h)
                    root=balLeft(root,h);
            }else{
                node=root;
                if(node->right==NULL){
                    root=node->left;
                    *h=TRUE;
                    free(node);
                }else{
                    if(node->left==NULL){
                        root=node->right;
                        *h=TRUE;
                        free(node);
                    }else{
                        node->right=del(node->right,node,h);
                        if(*h)
                            root=balLeft(root,h);
                    }
                }
            }
        }
    }
    return (root);
}

int main(){
    struct AVLnode *avl=NULL;
    int h;

    avl=buildTree(avl,33,&h);
    avl=buildTree(avl,32,&h);
    avl=buildTree(avl,34,&h);
    avl=buildTree(avl,876,&h);
    avl=buildTree(avl,234,&h);
    avl=buildTree(avl,9,&h);

    printf("AVL tree:\n");
    display(avl);

    avl=delNode(avl,34,&h);

    printf("\n");
    printf("AVL treeafter deletion:\n");
    display(avl);

    delTree(avl);

    return 0;
}
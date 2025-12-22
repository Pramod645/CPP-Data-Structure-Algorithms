#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>
#define MAX 4
#define MIN 2

struct btNode{
    int count;
    int value[MAX+1];
    struct btNode *child[MAX+1];
};

void display(struct btNode *root){
    int i;
    if(root!=NULL){
        for(i=0;i<root->count;i++){
        printf("%d\t",root->value[i+1]);
        }
        display(root->child[i]);
    }
}

void Clear(struct btNode *node,int k){
    int i;
    for(i=k+1;i<=node->count;i++){
        node->value[i-1]=node->value[i];
        node->child[i-1]=node->child[i];
    }
    node->count--;
}

void copysucc(struct btNode *node,int i){
    struct btNode *temp;
    temp=node->child[i];
    while(temp->child[0])
        temp=temp->child[0];

    node->value[i]=temp->value[1];
}

int searchNode(int val,struct btNode *n,int *pos){
    if(val<n->value[1]){
        *pos=0;
        return 0;
    }else{
        *pos=n->count;
        while((val<n->value[*pos])&& *pos>1)
            (*pos)--;
        if(val==n->value[*pos])
            return 1;
        else
            return 0;
    }
}

void rightShift(struct btNode *node,int k){
    int i;
    struct btNode *temp;

    temp=node->child[k];

    for(i=temp->count;i>0;i--){
        temp->value[i+1]=temp->value[i];
        temp->child[i+1]=temp->child[i];
    }
    temp->child[1]=temp->child[0];
    temp->count++;
    temp->value[1]=node->value[k];

    temp=node->child[k-1];
    node->value[k]=temp->value[temp->count];
    node->child[k]->child[0]=temp->child[temp->count];
    temp->count--;
}

void leftShift(struct btNode *node,int k){
    int i;
    struct btNode *temp;

    temp=node->child[k-1];
    temp->count++;
    temp->value[temp->count]=node->value[k];
    temp->child[temp->count]=node->child[k]->child[0];

    temp=node->child[k];
    node->value[k]=temp->value[1];
    temp->child[0]=temp->child[1];
    temp->count--;

    for(i=1;i<=temp->count;i++){
        temp->value[i]=temp->value[i+1];
        temp->child[i]=temp->child[i+1];
    }

}

void merge(struct btNode *node,int k){
    int i;
    struct btNode *temp1,*temp2;
    temp1=node->child[k];
    temp2=node->child[k-1];
    temp2->count++;
    temp2->value[temp2->count]=node->value[k];
    temp2->child[temp2->count]=node->child[0];

    for(i=1;i<temp1->count;i++){
        temp2->count++;
        temp2->value[temp2->count]=temp1->value[i];
        temp2->child[temp2->count]=temp1->child[i];
    }

    for(i=k;i<node->count;i++){
        node->value[i]=node->value[i+1];
        node->child[i]=node->child[i+1];
    }

    node->count--;
    free(temp1);
}

void restore(struct btNode *node, int i){
    if(i==0){
        if(node->child[1]->count>MIN)
            leftShift(node,1);
        else
            merge(node,i);
    }else{
        if(i==node->count){
            if(node->child[i=1]->count>MIN)
                rightShift(node,i);
            else
                merge(node,i);
        }else{
            if(node->child[i=1]->count>MIN){
                rightShift(node,i);
            }else{
                if(node->child[i+1]->count>MIN)
                    leftShift(node,i+1);
                else
                    merge(node,i);
            }
        }
    }
}

int delhelp(int val, struct btNode *root){
    int i;
    int flag;
    if(root==NULL){
        return 0;
    }else{
        flag=searchNode(val,root,&i);
        if(flag){
            if(root->child[i-1]){
                copysucc(root,i);
                flag=delhelp(root->value[i],root->child[i]);
                if(!flag){
                    printf("\n");
                    printf("Value %d not found.\n",val);
                }
            }else{
                Clear(root,i);
            }
        }else{
            flag=delhelp(val,root->child[i]);
        }
        if(root->child[i]!=NULL){
            if(root->child[i]->count<MIN)
                restore(root,i);
        }
        return flag;
    }
}

struct btNode *delNode(int val,struct btNode *root){
    struct btNode *temp;
    if(!delhelp(val,root)){
        printf("\n");
        printf("Value %d not found:\n",val);
    }else{
        if(root->count==0){
            temp=root;
            root=root->child[0];
            free(temp);
        }
    }
    return root;
}

void fillNode(int val, struct btNode *c,struct btNode *n,int k){
    int i;
    for(i=n->count;i>k;i--){
        n->value[i+1]=n->value[i];
        n->child[i+1]=n->child[i];
    }
    n->value[k+1]=val;
    n->child[k+1]=c;
    n->count++;
}

void split(int val, struct btNode *c,struct btNode *n,int k,int *y,struct btNode **newNode){
    int i, mid;
    if(k<=MIN)
        mid=MIN;
    else
        mid=MIN+1;

    *newNode=(struct btNode *)malloc(sizeof(struct btNode));
    for(i=mid+1;i<=MAX;i++){
        (*newNode)->value[i-mid]=n->value[i];
        (*newNode)->child[i-mid]=n->child[i];
    }
    (*newNode)->count=MAX-mid;
    n->count=mid;

    if(k<=MIN)
        fillNode(val,c,n,k);
    else
        fillNode(val,c,*newNode,k-mid);

    *y=n->value[n->count];
    (*newNode)->child[0]=n->child[n->count];
    n->count--;
}

struct btNode *search(int val, struct btNode *root,int *pos){
    if(root==NULL){
        return NULL;
    }else{
        if(searchNode(val,root,pos))
            return root;
        else
            return search(val,root->child[*pos],pos);
    }
}

int setval(int val,struct btNode *n,int *p,struct btNode **c){
    int k;
    if(n==NULL){
        *p=val;
        *c=NULL;
        return 1;
    }else{
        if(searchNode(val,n,&k))
            printf("Key cvalue already exist:\n");
        if(setval(val,n->child[k],p,c)){
            if(n->count<MAX){
                fillNode(*p,*c,n,k);
                return 0;
            }else{
                split(*p,*c,n,k,p,c);
                return 1;
            }
        }
        return 0;
    }
}

struct btNode *insert(int val, struct btNode *root){
    int i;
    struct btNode *c,*n;
    int flag;

    flag=setval(val,root,&i,&c);
    if(flag){
        n=(struct btNode *)malloc(sizeof(struct btNode));
        n->count=1;
        n->value[1]=i;
        n->child[0]=root;
        n->child[1]=c;
        return n;
    }
    return root;
}

int main(){
    struct btNode *root;
    root=NULL;

    root=insert(34,root);
    root=insert(34,root);
    root=insert(34,root);

    printf("B-Tree of order 5:\n");
    display(root);

    root=delNode(34,root);
    printf("\n");
    printf("Afterv dletethe node:\n");
    display(root);

    return 0;
}
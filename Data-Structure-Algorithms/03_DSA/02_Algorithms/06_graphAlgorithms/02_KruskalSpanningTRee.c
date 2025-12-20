#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>

struct edge{
    int v1;
    int v2;
    float cost;
    struct edge *next;
};
int stree[5];
int count[5];
float minCost;

void del(struct edge *root){
    struct edge *temp;
    while(root!=NULL){
        temp=root->next;
        free(root);
        root=temp;
    }
}

void combine(int i,int j){
    if(count[i]<count[j]){
        stree[i]=j;
    }else{
        stree[j]=i;
        if(count[i]==count[j])
            count[j]++;
    }
}

int getVal(int i){
    int j,k,temp;
    k=i;
    while(stree[k]!=k)
        k=stree[k];
    j=i;
    while(j!=k){
        temp=stree[j];
        stree[j]=k;
        j=temp;
    }
    return k;
}

struct edge *KMinSTree(struct edge *root, int n){
    struct edge *temp=NULL;
    struct edge *p,*q;
    int NoofEdges=0;
    int i,p1,p2;

    for(i=0;i<n;i++)
        stree[i]=i;
    for(i=0;i<n;i++)
        count[i]=0;

    while((NoofEdges<(n-1)) && (root!=NULL)){
        p=root;
        root=root->next;

        p1=getVal(p->v1);
        p2=getVal(p->v2);

        if(p1!=p2){
            combine(p->v1,p->v2);
            NoofEdges++;
            minCost+=p->cost;
            if(temp==NULL){
                temp=p;
                q=temp;
            }else{
                q->next=p;
                q=q->next;
            }
            q->next=NULL;
        }
    }
    return temp;
}

int main(){
    struct edge *temp,*root;
    int i;

    root=(struct edge *)malloc(sizeof(struct edge));

    root->v1=4;
    root->v2=3;
    root->cost=1;
    temp=root->next=(struct edge *)malloc(sizeof(struct edge));

    root->v1=4;
    root->v2=2;
    root->cost=2;
    temp->next=(struct edge *)malloc(sizeof(struct edge));
    
    temp=temp->next;
    root->v1=3;
    root->v2=2;
    root->cost=3;
    temp->next=(struct edge *)malloc(sizeof(struct edge));
    
    temp=temp->next;
    root->v1=3;
    root->v2=2;
    root->cost=3;
    temp->next=NULL;    

    root=KMinSTree(root,5);

    for(i=1;i<=4;i++)
        printf("stree[%d]->%d\n",i,stree[i]);

    printf("The minimum cost of spanning tree is %f\n",minCost);
    del(root);

    return 0;
}
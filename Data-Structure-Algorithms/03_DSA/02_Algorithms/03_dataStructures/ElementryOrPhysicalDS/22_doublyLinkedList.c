#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *p;//preveous
    int data;
    struct node *n;//next
};

void display(struct node *q){
    while(q!=NULL){
        printf("%d ",q->data);
        q=q->n;
    }
    printf("\n");
}

void append(struct node **s, int data){
    struct node *r, *q=*s;
    if(*s==NULL){// if empty
        *s=(struct node *)malloc(sizeof(struct node));
        (*s)->p=NULL;
        (*s)->data=data;
        (*s)->n=NULL;
    }else{
        while (q->n!=NULL){
            q=q->n;
        }
        r=(struct node *)malloc(sizeof(struct node));
        r->data=data;
        r->n=NULL;
        r->p=q;
        q->n=r;
    }
}

void addBegin(struct node **s, int data){
    struct node *q;
    q=(struct node *)malloc(sizeof(struct node));
    q->p=NULL;
    q->data=data;
    q->n=*s;
    (*s)->p=q;
    *s=q;
}

void addAtLoc(struct node *s, int loc, int data){
    struct node *temp;
    int a;
    for(a=0;a<loc;a++){
        s=s->n;
        if(s==NULL){
            printf("There are less than %d elements in list\n", loc);
            return;
        }
    }

    s=s->p;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->p=s;
    temp->n=s->n;
    temp->n->p=temp;
    s->n=temp;
}

void del(struct node **s, int data){
    struct node *q=*s;
    while(q!=NULL){
        if(q->data==data){ // is node found
            if(q==*s){//if first node to be deleted
                *s=(*s)->n;
                (*s)->p=NULL;
            }else{
                if(q->n==NULL){ //if last node deleted
                    q->p->n=NULL;
                }else{ // if node deleted node in between
                    q->p->n=q->n;
                    q->n->p=q->p;
                }
                free(q);
            }
            return;
        }
        q=q->n; //go to next node in list
    }
    printf("%d not found in list\n", data);
}

int main(){

    struct node *q;
    q=NULL;

    append(&q,12);
    append(&q,12);
    display(q);
    
    addBegin(&q,122);
    display(q);

    addAtLoc(q,2,23); // list, location and data
    addAtLoc(q,3,3);
    display(q);

    del(&q,12);
    del(&q,2);
    display(q);

}
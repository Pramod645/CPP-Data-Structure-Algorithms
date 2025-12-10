#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;   
};

void display(struct node *f){
    struct node *q=f, *p=NULL;

    while(q!=p){
        printf("%d ",q->data);

        q=q->link;
        p=f;
    }
    printf("\n");
}

void add(struct node **f, struct node **r, int data){
    struct node *q;

    q=(struct node *)malloc(sizeof(struct node));
    q->data=data;

    if(*f==NULL) // if empty
        *f=q;
    else
        (*r)->link=q;

    *r=q;
    (*r)->link=*f;
}

int delFront(struct node **f, struct node **r){
    struct node *q;
    int a;

    if(*f==NULL){// if list empty
        printf("List empty\n");
    }else{
        if(*f==*r){
            a=(*f)->data;
            free(*f);
            *f=NULL;
            *r=NULL;
        }else{
            q=*f;
            a=q->data;
            *f=(*f)->link;
            (*r)->link=*f;
            free(q);
        }
        return a;
    }
    return 0;
}

int main(){

    struct node *f, *r; // front and rear pointer
    f=r=NULL;

    add(&f,&r, 23);
    add(&f,&r, 23);//
    add(&f,&r, 23);
    add(&f,&r, 23);   
    display(f);
    
    delFront(&f,&r);
    display(f);

}
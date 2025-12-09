#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void del(struct node **q, int num){
    struct node *old, *temp;
    temp=*q;

    while(temp!=NULL){
        if(temp->data == num){
            if(temp==*q)// if first node to be deleted
                *q=temp->link;
            else  // inbetween node to be dleted
                old->link=temp->link;    
            
            free(temp);
            return;
        }else{ // if in last to be deleted
            old=temp;
            temp=temp->link;
        }
    }
    printf("Element %d not exist in list", num);
}

void addAtLoc(struct node *q, int loc, int data){
    struct node *temp, *r;
    int a;

    temp=q;
    for(a=0;a<loc;a++){// go to the next to mentioned loc where need to add node
        temp=temp->link;
        if(temp==NULL){
            printf("there are lesse location then %d in list", loc);
            return;
        }
    }
    r = (struct node *)malloc(sizeof(struct node));
    r->data=data;
    r->link=temp->link;
    temp->link=r;
}

void addbeg(struct node **q, int data){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link = *q;
    *q=temp;
}

void append(struct node **q, int data){
    struct node *temp, *r;
    if(*q == 0){ // if list is empty
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->link = 0;
        *q = temp;
    }else{ // add node at end
        temp = *q;
        while(temp->link != 0){ //go till end
            temp=temp->link;
        }
        r = (struct node *)malloc(sizeof(struct node));
        r->data=data;
        r->link=0;
        temp->link=r;
    } 

}

void display(struct node *p){
    printf("Display list:\n");
    while(p != 0){
        printf("%d\t",p->data);
        p=p->link;
    }
    printf("\n");
}

int count(struct node *c){
    int a =0;
    while(c != 0){
        c = c->link;
        a++;
    }
    return a;
}

int main(){

    struct node *p;
    p = 0;  

    display(p);
    printf("Element in list: %d\n", count(p));

    append(&p, 23);
    append(&p, 23);
    display(p);
    printf("Element in list: %d\n", count(p));

    addbeg(&p, 45);
    display(p);
    printf("Element in list: %d\n", count(p));

    addAtLoc(p, 0, 67); // node, loc and data
    display(p);
    printf("Element in list: %d\n", count(p));

    del(&p, 67);
    del(&p, 6);
    display(p);
    printf("Element in list: %d\n", count(p));

}
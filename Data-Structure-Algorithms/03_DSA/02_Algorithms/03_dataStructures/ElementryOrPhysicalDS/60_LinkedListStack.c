#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void push(struct node **s, int data){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("Full\n");
    
    temp->data=data;
    temp->link=*s;
    *s=temp;
}

int pop(struct node **s){
    struct node *temp;
    int a;
    if(*s==NULL){
        printf("Empty\n");
        return 0;
    }
    temp=*s;
    a=temp->data;
    *s=(*s)->link;
    free(temp);
    return a;
}

void StackDelete(struct node **s){
    struct node *temp;
    if(*s==NULL)
        return;
    
    while (*s!=NULL){
       temp=*s;
       *s=(*s)->link;
       free(temp);
    }
    
}

int main(){
    struct node *s=NULL;
    int a;

    push(&s, 23);
    push(&s, 23);
    push(&s, 23);
    a=pop(&s);
    //a=pop(&s);
    //if(a!=0)
       // printf("Popped data:%d\n",a);

    StackDelete(&s);
    if(a!=0)
        printf("Popped data:%d\n",a);

}
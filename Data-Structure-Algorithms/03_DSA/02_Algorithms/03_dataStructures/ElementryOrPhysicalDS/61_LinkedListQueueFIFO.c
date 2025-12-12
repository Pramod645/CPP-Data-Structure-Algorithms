#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

struct node{
    int data;
    struct node *link;
};
struct queue{
    struct node *front;
    struct node *rear;
};

void InitQueue(struct queue *q){
    q->front=q->rear=NULL;

}

void addQ(struct queue *q, int data){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("Queue is full:\n");

    temp->data=data;
    temp->link=NULL;

    if(q->front==NULL){
        q->rear=q->front=temp;
        return;
    }
    q->rear->link=temp;
    q->rear=q->rear->link;
}

int delQ(struct queue *q){
    struct node *temp;
    int data;
    if(q->front==NULL){
        printf("Queue is empty:\n");
        return 0;
    }
    data=q->front->data;
    temp=q->front;

    q->front=q->front->link;
    free(temp);
    return data;

    
}

void deallocateQ(struct queue *q){
    struct node *temp;
    if(q->front==NULL)
        return;
    while(q->front!=NULL){
        temp=q->front;
        q->front=q->front->link;
        free(temp);
    }
}

int main(){
    struct queue q;
    int a;

    InitQueue(&q);

    addQ(&q,23);
    addQ(&q,45);

    a=delQ(&q);

    deallocateQ(&q);

    return 0;
}
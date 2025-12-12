#include <stdio.h>
#include <curses.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 5
struct data{
    char job[SIZE];
    int pno;// priority number
    int ord; // order
};
struct pqueue{
    struct data d[SIZE];
    int front;
    int rear;
};

void InitQueue(struct pqueue *q){
    int a;
    q->front=q->rear=-1;
    for(a=0;a<SIZE;a++){
        strcpy(q->d[a].job,"");
        q->d[a].pno=q->d[a].ord=0;
    }
}

void add(struct pqueue *pq, struct data dt){
    struct data temp;
    int i,j;
    if(pq->rear==SIZE-1){
        printf("Queue is full:\n");
        return;
    }
    pq->rear++;
    pq->d[pq->rear]=dt;

    if(pq->front==-1)
        pq->front=0;
    
    for(i=pq->front;i<=pq->rear;i++){
        for(j=j+1;j<=pq->rear;j++){
            if(pq->d[i].pno>pq->d[j].pno){
                temp=pq->d[i];
                pq->d[i]=pq->d[j];
                pq->d[j]=temp;
            }else{
                if(pq->d[i].pno==pq->d[j].pno){
                    if(pq->d[i].pno==pq->d[j].ord){
                        temp=pq->d[i];
                        pq->d[i]=pq->d[j];
                        pq->d[j]=temp;
                    }
                }
            }
        }
    }
}
struct data del(struct pqueue *pq){
    struct data t;
    strcpy(t.job,"");
    t.pno=0;
    t.ord=0;
    if(pq->front==-1){
        printf("Queue is Empty:\n");
        return t;
    }
    t=pq->d[pq->front];
    pq->d[pq->front]=t;
    if(pq->front==pq->rear)
        pq->front=pq->rear=-1;
    else
        pq->front++;
    
    return t;
}
int main(){
    struct pqueue q;
    struct data dt, temp;
    int i, j=0;

    InitQueue(&q);
    printf("Enetr job description max 4 chare and it priority:\n");
    printf("Lowr the prioritynumber then higher the priority:\n");
    printf("Job Priority:\n");

    for (i=0;i<SIZE;i++){
        scanf("%s %d",&dt.job,&dt.pno);
        dt.ord=j++;
        add(&q,dt);
    }

    printf("Process jobs priority wise:\n");
    printf("Job\tPriority:\n");
    for (i=0;i<SIZE;i++){
        temp=del(&q);
        printf("%s\t%d\n", temp.job, temp.pno);
    }
    printf("\n");

    return 0;
}
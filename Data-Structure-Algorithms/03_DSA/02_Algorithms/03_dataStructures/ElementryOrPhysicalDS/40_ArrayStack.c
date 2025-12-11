#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct stack{
    int top;
    int arrp[SIZE];
};

void StackInit(struct stack *s){
    s->top=-1;
}

void push(struct stack *s, int data){
    if(s->top == SIZE-1){
        printf("Stack is full\n");
        return;
    }
    s->top++;
    s->arrp[s->top]=data;
}

int pop(struct stack *s){
    int a;
    if(s->top==-1){
        printf("Empty stack:\n");
        return 0;
    }
    a=s->arrp[s->top];
    s->top--;

    return a;
}

int main(){
    struct stack s;
    int a;

    StackInit(&s);

    push(&s,23);

   // a=pop(&s);
    a=pop(&s);
    if(a!=0)
        printf("Popped data:%d\n",a);


}
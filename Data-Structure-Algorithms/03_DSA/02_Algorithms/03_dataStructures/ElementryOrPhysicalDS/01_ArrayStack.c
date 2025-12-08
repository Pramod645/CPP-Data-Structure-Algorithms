#include <stdio.h>

#define SIZE 10

struct stack{
    int arr[SIZE];
    int top;
};

void initilize(struct stack *s){
    s->top = -1;
}

void push(struct stack *s, int data){
    if(s->top == SIZE - 1){
        printf("Stack is full\n");
        return;
    }
    s->top++;
    s->arr[s->top]=data;
}

int pop(struct stack *s){
    int data;
    if(s->top == -1){
        printf("Stack is empty:\n");
        return 0;
    }
    data=s->arr[s->top];
    s->top--;
    return data;
}

int main(){
    struct stack s;
    int i;
    initilize(&s);

    push(&s,33);
    push(&s, 654);
    i=pop(&s);
    if(i!= 0)
        printf("data poppedout: %d\n",i);

}
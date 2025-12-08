#include <stdio.h>

#define SIZE 10

void search(int *arr, int data){
    int i;
    for(i=0;i<SIZE;i++){
        if(arr[i]== data){
            printf("The element %d is presetn at %dth posotion\n\n", data,i+1);
            return;
        }
    }
    if(i==SIZE)
    printf("The element %d is not presetn at %dth posotion\n\n", data,i+1);
}

void reverse(int *arr){
    int i;
    for(i=0;i<SIZE/2;i++){
        int temp = arr[i];
        arr[i]=arr[SIZE-1-i];
        arr[SIZE-1-i]=temp;
    }
}

void delete(int *arr, int pos){
    int a;
    for(a=pos; a<SIZE; a++)
        arr[a-1]=arr[a];
    arr[a-1] = 0;    

}

void insert(int *arr, int pos, int dat){
    int a;
    for(a=SIZE-1; a>=pos; a--)
        arr[a]=arr[a-1];
    arr[a] = dat;    
}

void display(int *arr){
    int a;
    for(a=0; a<SIZE; a++ )
        printf("%d\t",arr[a]);
    printf("\n");
}

int main(){
int i = 0;
int Array[SIZE];
for(i =0 ; i<SIZE; i++)
    Array[i]=0;

insert(Array,1,23);// array, position, data
insert(Array,9,323);
insert(Array,4,663);
printf("Elements after insert\n");
display(Array);
printf("Elements after delete\n");
delete(Array,4); //Array, position
display(Array);
printf("Elements after reverse\n");
reverse(Array);
display(Array);
search(Array,663);// array, and data
search(Array,323);

}
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>

void heapify(int heap[], int n){
    int i, j, c, root, temp;
    for (j = n - 1; j >= 0; j--) {
       temp = heap[0];
       heap[0] = heap[j]; // swap max element with rightmost leaf element
       heap[j] = temp;
       root = 0;
       do {
          c = 2 * root + 1; // left node of root element
          if ((heap[c] < heap[c + 1]) && c < j-1)
             c++;
          if (heap[root]<heap[c] && c<j) { // again rearrange to max heap array
             temp = heap[root];
             heap[root] = heap[c];
             heap[c] = temp;
          }
          root = c;
       } while (c < j);
    }
    printf("The sorted array:\n ");
    
    for (i = 0; i < n; i++)
       printf("%d ", heap[i]);
 }

void maxHeap(int heap[], int n){
   int i, j, c, r, t;
   for (i = 1; i < n; i++) {
      c = i;
      do {
         r = (c - 1) / 2;
         if (heap[r] < heap[c]) { // create the heap
            heap[r] = heap[c];
            heap[c] = t;
         }
         c = r;
      } while (c != 0);
   }
   printf("Heap Array: \n");
   for (i = 0; i < n; i++)
      printf("%d ", heap[i]);
   printf("\n");  
   heapify(heap, n);
}

int main(){


   int heap[10] = {16, 14, 10, 8, 7,9,3,2,4,1}; 

   maxHeap(heap, 10);

   return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>


#define NARRAY 10   // Array size
#define NBUCKET 6  // Number of buckets
#define INTERVAL 10  // Each bucket capacity

struct Node {
  int data;
  struct Node *next;
};

void display(int ar[]) {
    int i;
    for (i = 0; i < NARRAY; ++i) {
      printf("%d ", ar[i]);
    }
    printf("\n");
}

int getBucketIndex(int value) {
    return value / INTERVAL;
}

void printBuckets(struct Node *list) {
    struct Node *cur = list;
    while (cur) {
      printf("%d ", cur->data);
      cur = cur->next;
    }
}
struct Node *InsertionSort(struct Node *list) {
    struct Node *k, *nodeList;
    if (list == 0 || list->next == 0) {
      return list;
    }
  
    nodeList = list;
    k = list->next;
    nodeList->next = 0;
    while (k != 0) {
      struct Node *ptr;
      if (nodeList->data > k->data) {
        struct Node *tmp;
        tmp = k;
        k = k->next;
        tmp->next = nodeList;
        nodeList = tmp;
        continue;
      }
  
      for (ptr = nodeList; ptr->next != 0; ptr = ptr->next) {
        if (ptr->next->data > k->data)
          break;
      }
  
      if (ptr->next != 0) {
        struct Node *tmp;
        tmp = k;
        k = k->next;
        tmp->next = ptr->next;
        ptr->next = tmp;
        continue;
      } else {
        ptr->next = k;
        k = k->next;
        ptr->next->next = 0;
        continue;
      }
    }
    return nodeList;
  }

void BucketSort(int arr[]) {
  int i, j;
  struct Node **buckets;
  buckets = (struct Node **)malloc(sizeof(struct Node *) * NBUCKET);

  for (i = 0; i < NBUCKET; ++i) {
    buckets[i] = NULL;
  }

  // Fill the buckets with respective elements
  for (i = 0; i < NARRAY; ++i) {
    struct Node *current;
    int pos = getBucketIndex(arr[i]);
    current = (struct Node *)malloc(sizeof(struct Node));
    current->data = arr[i];
    current->next = buckets[pos];
    buckets[pos] = current;
  }

  for (i = 0; i < NBUCKET; i++) {
    printf("Bucket[%d]: ", i);
    printBuckets(buckets[i]);
    printf("\n");
  }

  // Sort the elements of each bucket
  for (i = 0; i < NBUCKET; ++i) {
    buckets[i] = InsertionSort(buckets[i]);
  }

  printf("-------------\n");
  printf("Bucktets after sorting\n");
  for (i = 0; i < NBUCKET; i++) {
    printf("Bucket[%d]: ", i);
    printBuckets(buckets[i]);
    printf("\n");
  }

  // Put sorted elements on arr
  for (j = 0, i = 0; i < NBUCKET; ++i) {
    struct Node *node;
    node = buckets[i];
    while (node) {
      arr[j++] = node->data;
      node = node->next;
    }
  }

  return;
}


int main(void) {
  int array[NARRAY] = {23,45,76,89,7,1,23,56,25,52};

  printf("Initial array: \n");
  display(array);


  BucketSort(array);

  printf("\nSorted array: \n");
  display(array);



  return 0;
}
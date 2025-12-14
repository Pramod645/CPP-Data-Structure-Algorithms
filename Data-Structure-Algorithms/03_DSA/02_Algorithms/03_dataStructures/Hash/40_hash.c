#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Set {
    Node* table[SIZE];
} Set;

int hash(int value) {
    return value % SIZE;
}

void initSet(Set* set) {
    for (int i = 0; i < SIZE; i++) {
        set->table[i] = NULL;
    }
}

void add(Set* set, int value) {
    int index = hash(value);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    // Check if the value already exists in the set
    Node* current = set->table[index];
    while (current != NULL) {
        if (current->data == value) {
            free(newNode); // Avoid duplication
            return;
        }
        current = current->next;
    }
    // Insert the new node at the beginning of the chain
    newNode->next = set->table[index];
    set->table[index] = newNode;
}
// Check if an element exists in the Set
int has(Set* set, int value) {
    int index = hash(value);
    Node* current = set->table[index];
    while (current != NULL) {
        if (current->data == value) {
            return 1;
        }
        current = current->next;
    }
    return 0;
}
// Remove an element from the Set
void removeElement(Set* set, int value) {
    int index = hash(value);
    Node* current = set->table[index];
    Node* prev = NULL;
    while (current != NULL) {
        if (current->data == value) {
            if (prev == NULL) {
                set->table[index] = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
}

void printSet(Set* set) {
    for (int i = 0; i < SIZE; i++) {
        Node* current = set->table[i];
        if (current != NULL) {
            printf("Bucket %d: ", i);
            while (current != NULL) {
                printf("%d -> ", current->data);
                current = current->next;
            }
            printf("NULL\n");
        }
    }
}

int main() {
    Set set;
    initSet(&set);
    add(&set, 10);
    add(&set, 20);
    add(&set, 30);
    add(&set, 40);
    printf("Set contains 10: %d\n", has(&set, 10));
    printf("Set contains 50: %d\n", has(&set, 50));
    printSet(&set);
    removeElement(&set, 20);
    printf("After removing 20:\n");
    printSet(&set);
    
    return 0;
}
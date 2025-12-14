#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

typedef struct Node {
    char *key;
    int value;
    struct Node *next;
} Node;

typedef struct HashTable {
    Node **table;
} HashTable;

unsigned int hash(char *key) {
    unsigned int hash = 0;
    while (*key) {
        hash = (hash << 5) + *key++;
    }
    return hash % TABLE_SIZE;
}

HashTable *create_table() {
    HashTable *ht = malloc(sizeof(HashTable));
    ht->table = malloc(sizeof(Node *) * TABLE_SIZE);
    for (int i = 0; i < TABLE_SIZE; i++) {
        ht->table[i] = NULL;
    }
    return ht;
}

void insert(HashTable *ht, char *key, int value) {
    unsigned int index = hash(key);
    Node *new_node = malloc(sizeof(Node));
    new_node->key = strdup(key);
    new_node->value = value;
    new_node->next = ht->table[index];
    ht->table[index] = new_node;
}

int search(HashTable *ht, char *key) {
    unsigned int index = hash(key);
    Node *current = ht->table[index];
    while (current) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }
    return -1; // Not found
}

void free_table(HashTable *ht) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Node *current = ht->table[i];
        while (current) {
            Node *temp = current;
            current = current->next;
            free(temp->key);
            free(temp);
        }
    }
    free(ht->table);
    free(ht);
}

int main() {
    HashTable *ht = create_table();
    insert(ht, "apple", 1);
    insert(ht, "banana", 2);
    printf("Value for 'apple': %d\n", search(ht, "apple"));
    printf("Value for 'banana': %d\n", search(ht, "banana"));
    free_table(ht);
    return 0;
}
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#define NULL (void*)0

struct Node {
    int value;
    struct Node* next;
};

struct Node* createNode(int value);

void insertAt(struct Node head, int value, int index);

void add(struct Node* head, int value);

void removeAt(struct Node head, int index);

void removeNode(struct Node* head);

int size(const struct Node* head);

int atIndex(const struct Node* head, int index, int* outValue);

#endif //LINKEDLIST_H

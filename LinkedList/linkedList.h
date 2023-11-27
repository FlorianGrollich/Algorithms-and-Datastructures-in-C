#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int value;
    struct Node* next;
};

void insertAt(int value, int index);

void add(int value);

void removeAt(int index);

void remove();

int size(struct Node head);

#endif //LINKEDLIST_H
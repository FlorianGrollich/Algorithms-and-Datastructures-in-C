#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#define NULL (void*)0

struct Node {
    int value;
    struct Node* next;
};

struct Node* createNode(int value);

struct Node* getNodeAtIndex(const struct Node* head, const int index);

const struct Node* insertAt(const struct Node* node, const int value, const int index);

void add(struct Node* head, int value);

void removeAt(struct Node head, int index);

void removeLastNode(struct Node* head);

int size(const struct Node* head);


#endif //LINKEDLIST_H

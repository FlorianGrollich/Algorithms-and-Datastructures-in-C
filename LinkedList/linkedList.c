#include "linkedList.h"

#include <stdlib.h>

struct Node* createNode(int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}


void add(struct Node* head, const int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->next = NULL;
    newNode->value = value;

    while (head->next != NULL) {
        head = head->next;
    }
    head->next = newNode;
}


int atIndex(const struct Node* head, const int index, int* outValue) {
    for (int i = 0; i < index; i++) {
        if (head->next == NULL) {
            return -1; // error
        }
        head = head->next;
    }
    *outValue = head->value;
    return 0;
}


int main() {
}

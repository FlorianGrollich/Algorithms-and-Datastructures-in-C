#include "linkedList.h"

#include <stdio.h>
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

int size(const struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

void removeNode(struct Node* head) {
    if(head == NULL) return;

    struct Node* tmp = head;
    while (head->next != NULL) {
        tmp = head;
        head = head->next;
    }
    tmp->next = NULL;
    free(head);
}

void printList(const struct Node* node) {
    if(node == NULL) return;
    for (int i = 0; i < size(node); i++) {
        int outValue;
        atIndex(node, i, &outValue);
        printf("%d", outValue);
    }
}

int main() {
    struct Node* node = createNode(1);
    removeNode(node);
    //printList(node);
}

#include "linkedList.h"

#include <stdio.h>
#include <stdlib.h>


struct Node* getNodeAtIndex(struct Node* head, const int index) {
    for (int i = 0; i < index; i++) {
        if (head->next == NULL) {
            return nullptr;
        }
        head = head->next;
    }
    return head;
}


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


int getValueAtIndex(const struct Node* head, const int index) {
    head = getNodeAtIndex(head, index);
    return head->value;
}

int size(const struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

void removeLastNode(struct Node* head) {
    if (head == NULL) return;

    struct Node* tmp = head;
    while (head->next != NULL) {
        tmp = head;
        head = head->next;
    }
    tmp->next = NULL;
    free(head);
}

void printList(const struct Node* node) {
    while (node != NULL) {
        printf("%d", node->value);
        node = node->next;
    }
}

const struct Node* insertAt(struct Node* node, const int value, const int index) {
    if (index < 0) return nullptr;
    if (node == NULL) return nullptr;

    struct Node* before = getNodeAtIndex(node, index - 1);
    if (before == nullptr) return nullptr;

    struct Node* newNode = createNode(value);

    if (index == 0) {
        newNode->next = node;
        return newNode;
    }

    newNode->next = before->next;
    before->next = newNode;
    return node;
}

int main() {
    struct Node* node = createNode(1);
    add(node, 2);
    add(node, 3);
    add(node, 4);
    add(node, 5);
    printList(node);
    printf("\n");
    insertAt(node, 8, 0);
    printList(node);
}

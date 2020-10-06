#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

typedef node linkedList;

node *createNode(int data) {
    node *new = malloc(sizeof(node));
    new->data = data;
    new->next = NULL;

    return new;
}

node *getTail(linkedList *head){
    node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    return current;
}

void append(linkedList *head, int data) {
    node *new = createNode(data);
    getTail(head)->next = new;
}

void removeTail(linkedList *head) {
    node *current = head;
    node *previous;

    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }

    previous->next = NULL;
    free(current);
}

void destroy(linkedList *head) {
    while (head->next != NULL) {
        removeTail(head);
    }
    free(head);
}

void printLinkedList (linkedList *head) {
    node *current = head;
    printf("%d", head->data);
    while (current->next != NULL) {
        current = current->next;
        printf(", %d", current->data);
    }
    putchar('\n');
}

int main() {
    linkedList *head = createNode(5);

    append(head, 12);
    append(head, 3);
    append(head, 37);

    removeTail(head);

    printLinkedList(head);

    destroy(head);

    return 0;
}
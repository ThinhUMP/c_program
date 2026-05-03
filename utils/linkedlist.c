#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node * createNode(int value) {
    Node *n = malloc(sizeof(Node));
    n->data = value;
    n->next = NULL;
    return n;
}

typedef struct {
    Node *head;
    Node *tail;
} List;

void initList(List *l) {
    l->head = NULL;
    l->tail = NULL;
}

void append(List *l, int value) {
    Node *n = createNode(value);

    if (l->head == NULL) {
        l->head = l->tail = n;
    } else {
        l->tail->next = n;
        l->tail = n;
    }
}

//remove the header from the list pointer by the parameter l
//and returns its pointer (NULL if the list is empty)
Node * remove(List *l){
    if (l->head == NULL) {
        return NULL;
    } else {
        l->head = l->head->next;
    }
}


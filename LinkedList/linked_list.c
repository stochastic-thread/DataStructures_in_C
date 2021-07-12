#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

void newline() {
    printf("\n");
}

Node *create_node(int value) {
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    return node;
}

List *create_linked_list() {
    return malloc(sizeof(List));
}

void add_to_list(List *list, int item) {
    Node *temp = NULL;
    if(!list->root)
        list->root = create_node(item);
    else {
        temp = list->root;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = create_node(item);
    }
}

void display_list(List *list) {
    Node *temp = list->root;
    if(!list->root)
        return;    
    while(temp != NULL) {
        printf("%d ", temp->value); temp = temp->next;
    }
    newline();
}


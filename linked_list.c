#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// Nodo de la lista enlazada
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Puntero a la cabeza de la lista
static Node* head = NULL;

// Tamaño de la lista
static unsigned int size = 0;

void linked_list_init() {
    head = NULL;
    size = 0;
}

int linked_list_append(int data) {
    Node* new_node = malloc(sizeof(Node));
    if (!new_node) return -1;

    new_node->data = data;
    new_node->next = NULL;

    if (!head) {
        head = new_node;
    } else {
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = new_node;
    }
    size++;
    return 0;
}

int linked_list_prepend(int data) {
    Node* new_node = malloc(sizeof(Node));
    if (!new_node) return -1;

    new_node->data = data;
    new_node->next = head;
    head = new_node;

    size++;
    return 0;
}

int linked_list_remove(int data) {
    Node* current = head;
    Node* previous = NULL;

    while (current) {
        if (current->data == data) {
            if (previous) {
                previous->next = current->next;
            } else {
                head = current->next;
            }
            free(current);
            size--;
            return 0;
        }
        previous = current;
        current = current->next;
    }

    return -1; // No encontrado
}

int linked_list_contains(int data) {
    Node* current = head;
    while (current) {
        if (current->data == data) return 1;
        current = current->next;
    }
    return 0;
}

unsigned int linked_list_size() {
    return size;
}

void linked_list_print() {
    Node* current = head;
    printf("Lista: ");
    while (current) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}


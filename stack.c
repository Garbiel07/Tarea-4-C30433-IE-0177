#include "stack.h"
#include <stdio.h>

#define STACK_MAX 100

// Arreglo que contiene los elementos de la pila
static unsigned int stack[STACK_MAX];

// Índice del siguiente elemento libre (también representa el tamaño del stack)
static unsigned int top = 0;

// Inicializa el stack vacío
void stack_init() {
    top = 0;
}
// Agregar un entero al stack
// 0: éxito, -1: stack lleno
int stack_push(unsigned int data) {
    if (stack_is_full()) {
        return -1;
    }
    stack[top++] = data;
    return 0;
}

// Saca el último elemento del stack
int stack_pop() {
    if (stack_is_empty()) {
        return -1;
    }
    return stack[--top];
}

// Devuelve el número de elementos en el stack
unsigned int stack_size() {
    return top;
}

// Retorna si el stack está lleno
int stack_is_full() {
    return top >= STACK_MAX;
}

// Retorna si el stack está vacío
int stack_is_empty() {
    return top == 0;
}
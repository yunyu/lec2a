/** Stack Example ADT - A Data Hiding Stack
    Julie A. Adams, Graham Hemingway
**/

#include <stdio.h>
#include <stdlib.h>
#include "StackADTC.h"


int Stack_create(Stack *s, size_t size) {
    s->_stack = malloc(size * sizeof(T));
    s->_top = 0;
    s->_size = size;
    return s->_stack == 0 ? -1 : 0;
}

void Stack_destroy(Stack *s) {
    if (s->_stack != NULL) {
        free((void *)s->_stack);
    }
    s->_stack = NULL;
    s->_top = 0;
    s->_size = 0;
    s->_stack = 0;
}

void Stack_push(Stack *s, T item) {
    s->_stack[s->_top] = item;
    s->_top++;
}

void Stack_pop(Stack *s, T *item) {
    *item = s->_stack[--s->_top];
}

int Stack_top(Stack *s, T *item) {
    *item = s->_stack[s->_top - 1];

    return *item;
}

int Stack_is_empty(Stack *s) {
    return s->_top == 0;
}

int Stack_is_full(Stack *s) {
    return s->_top >= s->_size;
}

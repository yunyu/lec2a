/*
 * CS 3251 - Stack Example ADT - A Data Hiding Stack
 *  Julie A. Adams, G. Hemingway
**/

#ifndef STACKADTC_H
#define STACKADTC_H

// Type of Stack element
typedef int T;

typedef struct {
    size_t _top, _size;
    T *_stack;
} Stack;

// Stack interface
int Stack_create(Stack *s, size_t size);
void Stack_destroy(Stack *s);
void Stack_push(Stack *s, T item);
void Stack_pop(Stack *s, T *item);
int Stack_top(Stack *s, T *cur_top);

/* Must call before popping an item */
int Stack_is_empty(Stack *);
/* Must call before Pushing an item */
int Stack_is_full(Stack *);

#endif


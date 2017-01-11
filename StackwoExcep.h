/**
 * Filename: StackwoException.h
 * Class: CS3251
 *
 * @author Julie A. Adams, G. Hemingway
 * Description: This file implements an abstract data type stack class using
 *              data hiding. This file does use exception handling.
 */

#ifndef STACKWOEXCEPT_H
#define STACKWOEXCEPT_H

#include <stdlib.h>

// Type of Stack element
typedef int T;

class Stack {
public:

    /* Constructors */
    Stack (size_t size);

    /* Destructor */
    ~Stack(void);

    void push(const T &item);
    void pop (T &item);
    int top(T &cur_top);
    bool isEmpty(void) const;
    bool isFull(void) const;

private:
    size_t _top, _size;
    T *_stack;
};

#endif


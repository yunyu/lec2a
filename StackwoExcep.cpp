/**
 * Filename: StackwoException.cpp
 * Class: CS3251
 *
 * @author Julie A. Adams, G. Hemingway
 * Description: This file implements an abstract data type stack class using 
 *              data hiding.
 */

#include "StackwoExcep.h"


Stack::Stack (size_t size): _top(0), _size(size), _stack(new T[size]) {}


Stack::~Stack() {
  delete [] _stack;
}


void Stack::push(const T &item) {
  _stack[_top] = item;
  _top++;
}


void Stack::pop(T &item) {
  item = _stack[--_top];
}


int Stack::top(T &item) {
  item = _stack[_top - 1];

  return item;
}


bool Stack::isEmpty(void) const {
  return _top == 0;
}


bool Stack::isFull(void) const {
  return _top == _size;
}

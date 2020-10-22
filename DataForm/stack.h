#ifndef STACK_H
#define STACK_H
#include "node.h"

class stack
{
    node * head;
    node * tail;
public:
    stack();

    void push(int a);
    node* pull();

};

#endif // STACK_H

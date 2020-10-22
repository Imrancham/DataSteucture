#ifndef QUEUE_H
#define QUEUE_H
#include "node.h"

class queue
{
    node * head;
    node * tail;

public:
    queue();
    void insert( int a);
    node * pull();
    void Traverse();

};

#endif // QUEUE_H

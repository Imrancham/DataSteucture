#include "stack.h"

stack::stack()
{

}

void stack::push(int a)
{
    node * tmp =new node();
    tmp->m_value = a;

    if(tail == nullptr)
    {
        tail = tmp;
        head = tmp;
    }
    else {
        tmp->m_prev_node = tail;
        tail = tmp;

    }

}

node  * stack::pull()
{
    auto * tmp = tail;
    tail = tail->m_prev_node;
    return tmp;
}

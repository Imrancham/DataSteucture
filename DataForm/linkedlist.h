#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"

class LinkedList
{
    node * head;
    node * tail;

public:
    LinkedList();

    int get_val() const { return head->m_value;}
    void set_val(int a ) { head->m_value = a;}
    void next() {head = head->m_next_node;}
    void prev() {head = head->m_prev_node;}
    void  AddNode(int a);

    void Traverse();

    bool find(int a);
    void delet( int a);

};

#endif // LINKEDLIST_H

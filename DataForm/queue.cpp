#include "queue.h"
#include <iostream>

queue::queue()
{

}

void queue::insert(int a)
{
    node * tmp = new node();
    tmp->m_value = a;

    if (head == nullptr){
        head  = tmp;
        tail = tmp;
    }
    else {
        if(head->m_next_node==nullptr) head->m_next_node = tmp;
        tail->m_next_node = tmp;
        tail = tail->m_next_node;
    }

}


node * queue::pull()
{
    if (head != nullptr) {
    node * nod = head;
    head = head->m_next_node;
    return nod;
    }
    return head;
}

void queue::Traverse()
{
    if(head == nullptr) return;
    node * tmp = head;
    while (tmp != nullptr) {

        // do smothing
        std::cout<<"val is...... "<<tmp->m_value<<std::endl;
        tmp = tmp->m_next_node;

    }
}


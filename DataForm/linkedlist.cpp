#include "linkedlist.h"
#include <iostream>

LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
}

void LinkedList::AddNode(int a)
{
    node * tem = new node();
    tem->m_value = a;

    if(head == nullptr)
    {
        head = tem;
        tail = tem;

        head->m_next_node = nullptr;
        tail->m_next_node = nullptr;

        head->m_prev_node = nullptr;
        tail->m_prev_node = nullptr;


    }
    else
    {
        tem->m_prev_node = tail;
        tail->m_next_node = tem;
        tail = tail->m_next_node;
    }
}

void LinkedList::Traverse()
{
    if(head == nullptr) return;
    node * tmp = head;
    while (tmp != nullptr) {

        // do smothing
        std::cout<<"val is "<<tmp->m_value<<std::endl;
        tmp = tmp->m_next_node;

    }
}

bool LinkedList::find(int a)
{

    node * tmp = head;
    while   (tmp != nullptr){
        if(tmp->m_value == a) return 1;

        tmp = tmp->m_next_node;
    }

    return 0;
}

void LinkedList::delet(int b)

{
    if(head == nullptr) return;
    if(head->m_value == b )
    {
        head  = head->m_next_node;
        return;
    }
    node * a = head->m_next_node;

//    node *prev = head;
    while (a != nullptr) {

        if(a->m_value == b){
//            prev->m_next_node = a->m_next_node;
            a->m_prev_node->m_next_node = a->m_next_node;
            a->m_next_node->m_prev_node = a->m_prev_node;
            return;
        }
//        prev = a;
        a = a->m_next_node;
    }

}




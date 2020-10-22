#include <QCoreApplication>
#include <iostream>
#include "node.h"
#include "linkedlist.h"
#include "queue.h"
#include "stack.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



LinkedList list;

list.AddNode(3);
list.AddNode(1);
list.AddNode(11);
list.AddNode(4);
list.AddNode(5);

std::cout<<"traverse list\n";

list.Traverse();
int n = 3;

list.delet(n);

std::cout<<"traverse list after delet "<<n<<"\n";
list.Traverse();

n = 4;
list.delet(n);
std::cout<<"traverse list after delet "<<n<<"\n";

list.Traverse();

n = 5;

auto nv = list.find(n);
if(nv!=0)
std::cout<<n<<" n was foun  " <<std::endl;
else {
    std::cout<<n<<" not found ..."<<std::endl;
}

n = 0;

nv = list.find(n);
if(nv!=0)
std::cout<<n<<" n was foun  " <<std::endl;
else {
    std::cout<<n<<" not found ..."<<std::endl;
}


std::cout<<"head value is "<<list.get_val()<<std::endl;

list.next();
std::cout<<"next val is "<<list.get_val()<<std::endl;

// check null list
LinkedList list2;

list2.delet(1);

// ///////////////////////////////////////////////////////////
queue qu;
//auto nd1 = qu.pull();
std::cout<<"\n \n....    queue   .... \n \n"<<std::endl;
qu.insert(1);
qu.insert(3);
qu.insert(100);

std::cout<<"traverse queue first time\n";
qu.Traverse();

node * nd;
 nd = qu.pull();
// nd = qu.pull();

std::cout<<"first in the queue  " <<nd->m_value<<std::endl;
std::cout<<"traverse queue second time \n";
 qu.Traverse();

 // ///////////////////////////////////////////////////////////

 std::cout<<"\n \n....    stack   .... \n \n"<<std::endl;
stack stk;


//auto no1 = stk.pull();

//std::cout<< "last in stack is "<<no1->m_value<<std::endl;

stk.push(5);
stk.push(9);
stk.push(33);

auto no = stk.pull();

std::cout<< "last in stack is "<<no->m_value<<std::endl;

no = stk.pull();

std::cout<< "last in stack is "<<no->m_value<<std::endl;
no = stk.pull();

std::cout<< "last in stack is "<<no->m_value<<std::endl;
no = stk.pull();

std::cout<< "last in stack is "<<no->m_value<<std::endl;

    return 0;
}

//    int x = 10;
//    int * rf = &x;
//    int * rf2 = nullptr ;
//    double g = 200;
////    rf2 = &g;

////    std::cout<<"x is  "<< x <<std::endl;
//    std::cout<<"rf is  "<<&rf<<"and refer to -->"<< *rf <<std::endl;
//    std::cout<<"rf2 is  "<<&rf2<<", refer to -->"<< *rf2<<"and rf2  -->"<< rf2 <<std::endl;
//    std::cout<<"&g is  "<<&g;
//    int * ptr = NULL;
//    std::cout<<"sdgdg"<<std::endl;
//    std::cout<<"ptr "<<*ptr ;
//    node head;
//    node Node1, Node2, Node3;
//    head.m_value = 4;

//    Node1.m_value = 6;
//    Node1.m_next_node = &head;
//    Node1.m_prev_node = &Node2;

//    Node2.m_value = 1;
//    Node2.m_next_node = &Node1;
//    Node2.m_prev_node = &Node3;

//    Node3.m_value = 22;
//    Node3.m_next_node = &Node2;

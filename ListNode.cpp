#ifndef LISTNODE_CPP
#define LISTNODE_CPP
#include "ListNode.h"
#include <iostream>

template <class T>
ListNode<T>::ListNode(T val): value(val), prev(NULL), next(NULL){}

template <class T>
ListNode<T>::~ListNode(){
//not too sure
}

template <class T>
T ListNode<T>::getValue() const{
    return this->value;
}

template <class T>
int ListNode<T>::size() const {
    int numNodes = 0;
    ListNode* nodePtr;
    
    while()
}

#endif //LISTNODE_CPP
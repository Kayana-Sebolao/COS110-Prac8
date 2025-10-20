#ifndef LISTNODE_H
#define LISTNODE_H

template<class T>
class ListNode {
    T value;
    ListNode<T>* prev;
    ListNode<T>* next;

  public:
  ListNode(T val);
  ~ListNode();
  T getValue() const;
  int size() const;
  void append(ListNode<T>* node);
  void prepend(ListNode<T>* node);
  static ListNode<T>* remove(ListNode<T>* node);
  ListNode<T>* remove(int pos);
  ListNode<T>* getNode(int pos);
  void reverseList();
  void printList();  
};

#include "ListNode.cpp"

#endif //LISTNODE_H
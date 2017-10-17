
#ifndef LIST_H
#define LIST_H

template<typename T>
class ListNode {
public:
    ListNode(T data);
    virtual ~ListNode();
    
    ListNode<T> * getNext();
    ListNode<T> * getPrevious();
    void setNext(ListNode<T> * next);
    void setPrevious(ListNode<T> * previous);
    T getData();
    void setData(T data);
private:
    ListNode * next;
    ListNode * previous;
    T data;
};

template<typename T>
class List {
public:
    List();
    virtual ~List();
    
    void insert(T t);
    void printAll();
//    int getSize();
//    void removeAll();
    
private:
    int size;
    ListNode<T> * head;
};

#include "List.hpp"

#endif /* LIST_H */


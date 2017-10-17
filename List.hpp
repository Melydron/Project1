#include <stddef.h>
#include <iostream>
#include "List.h"

using namespace std;

// ------------------ LISTNODE ----------------

template<typename T>
ListNode<T>::ListNode(T data) : data(data) {

}

template<typename T>
ListNode<T>::~ListNode() {

}

template<typename T>
ListNode<T> * ListNode<T>::getNext() {
    return next;
}

template<typename T>
ListNode<T> * ListNode<T>::getPrevious() {
    return previous;
}

template<typename T>
void ListNode<T>::setNext(ListNode<T> * next) {
    this->next = next;
}

template<typename T>
void ListNode<T>::setPrevious(ListNode<T> * previous) {
    this->previous = previous;
}

template<typename T>
T ListNode<T>::getData() {
    return data;
}

template<typename T>
void ListNode<T>::setData(T data) {
    this->data = data;
}

// ------------------------------------------------------

template<typename T>
List<T>::List() : size(0), head(NULL) {
}

template<typename T>
List<T>::~List() {
}

template<typename T>
void List<T>::printAll() {
    ListNode<T> * temp = head;
    while (temp != NULL) {
        cout << temp->getData();
        temp=temp->getNext();
    }
}

template<typename T>
void List<T>::insert(T t) {

}


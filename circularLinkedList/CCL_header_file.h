#ifndef CIRCULAR_LINKED_LIST_H
#define CIRCULAR_LINKED_LIST_H

#include <iostream>
using namespace std;

template<typename T>
struct node{
    T info;
    node<T> * next ;

    node(T info = 0){
        this->info = info;
        next = NULL ;
    }
};
template<typename T>
class CircularLinkedList {
private:
    node<T> *head;
    node<T> *end;
    int size;
    node<T> *getNode(int index);
public:
    CircularLinkedList();
    void insertAtHead(T ele);
    void insertAtEnd(T ele);
    T& retrieveAt(int index);
    void insertAt(T ele, int index);
    void removeAtHead();
    void removeAtEnd();
    void removeAt(int index);
    void replaceAt(T ele, int index);
    void print();
    bool isItemAtEqual(T ele, int index);
    bool isEmpty();
    int linkedListSize();
    bool isExist(T ele);
    void clear();
    void swap(int firstIndex, int secondIndex);
};

#endif

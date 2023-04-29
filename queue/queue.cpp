#pragma once
#include "queue.h"

template<typename T>
void queue<T>::enqueue(T element) {
    lst.insertAtEnd(element);
}

template<typename T>
T queue<T>::first() {
    return lst.retrieveAt(0);
}

template<typename T>
T queue<T>::dequeue() {
    T ele = lst.retrieveAt(0);
    lst.removeAtHead();
    return ele;
}

template<typename T>
bool queue<T>::isEmpty() {
    return lst.isEmpty();
}

template<typename T>
int queue<T>::queueSize() {
    return lst.linkedListSize();
}

template<typename T>
void queue<T>::clear() {
    lst.clear();
}

template<typename T>
void queue<T>::print() {
    lst.print();
    std::cout<<'\n';
}

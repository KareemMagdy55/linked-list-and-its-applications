//
// Created by karee on 4/26/2023.
//

#ifndef LINKED_LIST_AND_ITS_APPLICATIONS_QUEUE_H
#define LINKED_LIST_AND_ITS_APPLICATIONS_QUEUE_H

#include "CCL_header_file.h"
#include "CCL_source_code.cpp"

using namespace std;

template<typename T>
class queue{
private:
    CircularLinkedList<T> lst ;
public:
    void enqueue (T element);
    T dequeue () ; //return the first element and remove it.
    T first (); //return the first element without removing it.
    bool isEmpty ();
    int queueSize () ;
    void clear ();
    void print () ;

};


#endif //LINKED_LIST_AND_ITS_APPLICATIONS_QUEUE_H

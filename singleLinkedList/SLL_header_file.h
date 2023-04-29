
#ifndef LINKED_LIST_AND_ITS_APPLICATIONS_QUEUE_H
#define LINKED_LIST_AND_ITS_APPLICATIONS_QUEUE_H

#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
struct nodeType {
  T info;
  nodeType *link;
};

template <class T>
class linkedList{
 private:
  nodeType<T> *first;
  nodeType<T> *last;
  nodeType<T> *newNode;
  int counter;
 public:
  linkedList();
  nodeType <int>* getFirst();
  void insertAtHead(int element);
  void insertAtTail(int element);
  void insertAt(T element, int index);
  void removeAtHead();
  void removeAtTail();
  void removeAt(int index);
  int retrieveAt (int index);
  void replaceAt(T newElement, int index);
  bool isExist(T element);
  bool isItemAtEqual(T element, int index); ;
  void swap (T firstItemIdx, T secondItemIdx) ;
  bool isEmpty();
  int linkedListSize ();
  void clear();
  void print();

};



#endif

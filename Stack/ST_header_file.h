#ifndef LINKED_LIST_AND_ITS_APPLICATIONS_ABL_H_H
#define LINKED_LIST_AND_ITS_APPLICATIONS_ABL_H_H

using namespace std;

template<class T>

struct nodeType {
  T info;
  nodeType* link;
};


template <class T>
class Stack{
 private:
    nodeType<T>* Top;
    int size;
 public:
    Stack ();
    void push (T element);
    T pop ();
    T top ();
    bool isEmpty ();
    int stackSize();
    void clear ();
    void print ();
};

#endif


#include "ST_header_file.h"
#include "iostream"
using namespace std;


template <class T>
Stack<T>::Stack (){
    Top = nullptr;
    size = 0;
}


template <class T>
void Stack<T>::push (T element){
    nodeType<T>* newNode;
    newNode = new nodeType<T>;
    newNode->info = element;
    newNode->link = Top;
    Top = newNode;
    size++;
  }

template <class T>
T Stack<T>::pop (){
    nodeType<T>* delNode;
    int val = Top->info;
    delNode = Top;
    Top = Top->link;
    delete delNode;
    size--;
    return val;
}

template <class T>
T Stack<T>::top (){
    return Top->info;
  }


template <class T>
bool Stack<T>::isEmpty (){
    return (Top == nullptr);
}

template <class T>
int Stack<T>::stackSize(){
    return size;
}

template <class T>
void Stack<T>::clear (){
    while (!isEmpty()){
      pop();
    }
}

template <class T>
void Stack<T>::print (){
    nodeType<T> *current;
    current = Top;
    while (current != nullptr){
      cout << current->info << '\t';
      current = current->link;
    }
}

#include "SLL_header_file.h"

using namespace std;

template <class T>
linkedList<T>::linkedList(){
    first = nullptr;
    last = nullptr;
    counter = 0;
}

template <class T>
  nodeType <int>* linkedList<T>::getFirst()
  {
    return first;
  }

template <class T>
  void linkedList<T>::insertAtHead(int element){
    newNode = new nodeType<T>;
    newNode ->info = element; // element
    newNode ->link = first; // address
    if (isEmpty())
      last = newNode; // tail
    first = newNode; // head
    counter++;
  }

template <class T>
void linkedList<T>::insertAtTail(int element){
    newNode = new nodeType<T>;
    newNode ->info = element; // element;
    newNode ->link = nullptr; // address
    if (isEmpty()){
      first = last = newNode;
    }
    else{
      last ->link = newNode; // before tail
      last = newNode; // tail
    }
    counter++;
  }

template <class T>
void linkedList<T>::insertAt(T element , int index){
    if (index == 0){
      insertAtHead(element);
    }
    else if (index==counter){
      insertAtTail(element);
    }
    else {
      nodeType<T> *pre = first; // pointer iterate
      // if index==1: pre pointer index == 0 == first. so we won't go through loop
      // other ex:
      // if index==2: pre pointer index == 1 == first->link. so we will go through loop once time
      // if index==3: pre pointer index == 2 == first->link->link. so we will go through loop two times
      for (int i = 1; i < index; ++i) {
        pre = pre->link;
      }
      newNode = new nodeType<T>;
      newNode->info = element; // element
      newNode->link = pre->link; // address
      pre->link = newNode;
      counter++;
    }
  }

template <class T>
void linkedList<T>::removeAtHead(){
    if (isEmpty())
      cout << "Cannot delete from an empty list."<< endl;
    else {
      nodeType<T> * current;
      current = first;
      first = first->link;
      if (first == nullptr)
        last = nullptr;
      delete current;
      counter--;
    }
  }

template <class T>
void linkedList<T>::removeAtTail(){
    if(isEmpty()){
      cout << "Cannot delete from an empty list."<< endl;
    } else {
      nodeType<T> * pre;
      nodeType<T> * del;
      pre = first;
      del = first->link;
      int last_index = counter-1;
      for (int i = 1; i < last_index ; ++i) {
        pre = pre->link;
        del = del->link;
      }
      pre->link = del->link;
      last = pre;
      delete del;
      counter--;
    }
  }

template <class T>
void linkedList<T>::removeAt(int index){
    if (index==0){
      removeAtHead();
    }
    else if (index==counter-1){
      removeAtTail();
    }
    else {
      if(isEmpty()){
        cout << "Cannot delete from an empty list."<< endl;
      } else {
        // del is the deleted index
        // pre is index before deleted index
        nodeType<T> *pre;
        nodeType<T> *del;
        pre = first;
        del = first->link;
        for (int i = 1; i < index; ++i) {
          pre = pre->link;
          del = del->link;
        }
        pre->link = del->link;
        delete del;
        counter--;
      }
    }
  }

template <class T>
int linkedList<T>::retrieveAt (int index){
    nodeType<T> * current;
    current = first;
    for (int i = 1; i <= index; ++i) {
      current = current->link;
    }
    return current->info;
  }

template <class T>
void linkedList<T>::replaceAt(T newElement, int index){
    nodeType<T> * current;
    current = first;
    for (int i = 1; i <= index; ++i) {
      current = current->link;
    }
    current->info = newElement;
  }

template <class T>
bool linkedList<T>::isExist(T element){
    nodeType<T> * current;
    current = first;
    if (element==current->info)
      return true;
    int last_index = counter-1;
    for (int i = 1; i <= last_index; ++i) {
      current = current->link;
      if (element==current->info)
        return true;
    }
    return false;
  }

template <class T>
bool linkedList<T>::isItemAtEqual (T element, int index){
    nodeType<T> * current;
    current = first;
    for (int i = 1; i <= index; ++i) {
      current = current->link;
    }
    return (element == current->info);
  }

template <class T>
void linkedList<T>::swap (T firstItemIdx, T secondItemIdx) {
    // If both indices are the same, no swapping needed
    if (firstItemIdx == secondItemIdx) {
      return;
    }
    nodeType<T> *preFirst = nullptr;
    nodeType<T> *st = first;
    nodeType<T> *preSecond = nullptr;
    nodeType<T> *nd = first;
    // determine the location of st and nd nodes
    for (int i = 1; i <= firstItemIdx; ++i) {
      preFirst = st;
      st = st->link;
    }
    for (int i = 1; i <= secondItemIdx; ++i) {
      preSecond = nd;
      nd = nd->link;
    }

    //check if st is the head
    if (preFirst != nullptr) {
      preFirst->link = nd;
    } else {
      first = nd;
    }
    // check if nd is the head
    if (preSecond != nullptr) {
      preSecond->link = st;
    } else {
      first = st;
    }

    // Swap the next pointers of the two nodes
    nodeType<T> *temp; // make a copy from st node address
    temp = st->link;
    st->link = nd->link;
    nd->link = temp;

    //check if there is any tail of them;
    if (st->link == nullptr) {
      last = st;
    } else if (nd->link == nullptr){
      last = nd;
    }
  }

template <class T>
bool linkedList<T>::isEmpty(){
    return first == nullptr;
  }

template <class T>
int linkedList<T>::linkedListSize (){
    return counter;
  }

template <class T>
void linkedList<T>::clear(){
    while (!isEmpty()){
      removeAtHead();
    }
  }

template <class T>
void linkedList<T>::print(){
    nodeType<T> *temp = first;
    while (temp != nullptr){
      cout << temp->info << "\t";
      temp = temp->link;
    }
    cout << endl;
  }








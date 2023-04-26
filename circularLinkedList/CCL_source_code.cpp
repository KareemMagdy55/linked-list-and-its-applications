#pragma once
#include "CCL_header_file.h"


template<typename T>
CircularLinkedList<T>::CircularLinkedList() {
         head = end = NULL ;
         size = 0 ;
}

template<typename T>
node<T> *CircularLinkedList<T>::getNode(int index) {
    try {
        if ( index < 0 || index >= size)
            throw 0 ;
        else {
            if ( !index ) return head;
            else if ( index == size - 1) return end;
            int counter = 0;
            node<T> *tempNode = head;
            while (index != counter) {
                tempNode = tempNode->next;
                counter++;
            }
            return tempNode;
        }
    }catch (int & x){
        cout << "Invalid index" << endl;
        exit(0);
    }
}

template<typename T>
void CircularLinkedList<T>::insertAtHead(T ele) {
    node<T>* newNode = new node<T>(ele);

    if (!size){
        head = newNode ;
        end = newNode;
    }
    else {
        newNode->next = head ;
        end->next = newNode;
        head = newNode;
    }
    size ++ ;
}

template<typename T>
void CircularLinkedList<T>::insertAtEnd(T ele) {
    node<T>* newNode = new node<T>(ele);
    if ( !size){
        head = newNode;
        end = newNode;
    }
    else {
        newNode->next = head;
        end->next = newNode;
        end = newNode ;
    }
    size ++ ;
}

template<typename T>
T &CircularLinkedList<T>::retrieveAt(int index) {
    return getNode(index)->info;
}

template<typename T>
void CircularLinkedList<T>::insertAt(T ele, int index) {
    if ( index >= size) {
        insertAtEnd(ele);
        return;
    }else if ( index < 0){
        cout << "Invalid index!";
        exit(0) ;
    }
    node<T>* prevNode = getNode(index - 1);
    node<T>* currentNode = new node<T>(ele);

    currentNode->next = prevNode->next;
    prevNode->next = currentNode;
}

template<typename T>
void CircularLinkedList<T>::removeAtHead() {
    if ( !size) return;
    else if ( size == 1){
        delete head ;
        head = end = NULL;
    }
    else {
        end->next = head->next;
        delete head;
        head = end->next;
    }
    size -- ;
}

template<typename T>
void CircularLinkedList<T>::removeAtEnd() {
    if ( !size ) return;
    else if ( size == 1){
        delete end ;
        head = end = NULL ;
    }else {
        node<T>* newNode = getNode(size - 2);
        newNode->next = head ;
        delete end ;
        end = newNode;
    }
    size -- ;
}

template<typename T>
void CircularLinkedList<T>::removeAt(int index) {
    if ( index == 0) removeAtHead();
    else if (index == size - 1) removeAtEnd();
    else {
        node<T> * currNode = getNode(index);
        node<T> * prevNode = getNode(index - 1);

        prevNode->next = currNode->next;
        delete currNode;
        size -- ;
    }
}

template<typename T>
void CircularLinkedList<T>::replaceAt(T ele, int index) {
    retrieveAt(index) = ele ;
}

template<typename T>
void CircularLinkedList<T>::print() {
    node<T> * tempNode = head ;
    if ( !size) return;
    else if ( size == 1) cout << head->info << ' ';
    else {
        do {
            cout << tempNode->info << ' ';
            tempNode = tempNode->next;
        } while (tempNode != head);
        cout << '\n';
    }
}

template<typename T>
bool CircularLinkedList<T>::isItemAtEqual(T ele, int index) {
    return retrieveAt(index) == ele ;}

template<typename T>
bool CircularLinkedList<T>::isEmpty() {
    return !size;
}

template<typename T>
int CircularLinkedList<T>::linkedListSize() {
    return size;
}

template<typename T>
bool CircularLinkedList<T>::isExist(T ele) {
    bool found = false ;
    node<T> * tempNode = head ;
    do{
        if ( ele == tempNode->info)
            found = true;
        tempNode = tempNode->next;
    }while ( tempNode != head and !found);

    return found;
}

template<typename T>
void CircularLinkedList<T>::clear() {
    while (size > 0 ){
        removeAtEnd();
        size -- ;
    }
}

template<typename T>
void CircularLinkedList<T>::swap(int firstIndex, int secondIndex) {
    if (firstIndex == secondIndex) return;

    node<T>* node1 = getNode(firstIndex);
    node<T>* prevNode1 ;

    node<T>* node2 = getNode(secondIndex);
    node<T> *prevNode2 ;

    if ( node1 == head){
        prevNode1 = end ;
    }else prevNode1 = getNode(firstIndex - 1);

    if ( node2 == head){
        prevNode2 = end;
    }else prevNode2 = getNode(secondIndex- 1);

    if ( prevNode1 == end){
        head = node2 ;
    }else if ( prevNode2 == end){
        head = node1;
    }

    prevNode1->next = node2;
    prevNode2->next = node1;
    std::swap(prevNode1, prevNode2);
    std::swap(node1->next, node2->next);

}

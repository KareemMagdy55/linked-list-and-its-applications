#include "ABL_H.h"
#include <iostream>

using namespace std;

template <class T>
List<T>::List(int n) {
    cap = n;
    size = 0;
    arr = new T[n];
}

template <class T>
void List<T>::checkCap() {
    if (size > cap)
        cap = 2 * size;
}

template <class T>
void List<T>::insert(T ele) {
    arr[size] = ele;
    size++;
    checkCap();
}

template <class T>
void List<T>::insertAt(T ele, int index) {
    size++;
    checkCap();
    for (int i = size - 1; i >= index; --i) {
        arr[i] = arr[i - 1];
    }
    arr[index] = ele;
}

template <class T>
void List<T>::removeAt(int index) {
    for (int i = index; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    size--;
}

template <class T>
void List<T>::replaceAt(T newElement, int index) {
    arr[index] = newElement;
}

template <class T>
bool List<T>::isItemAtEqual(T element, int index) {
    return arr[index] == element;
}

template <class T>
T& List<T>::retrieveAt(int index) {
    return arr[index];
}

template <class T>
bool List<T>::isEmpty() {
    return !size;
}

template <class T>
bool List<T>::isFull() {
    return cap == size;
}

template <class T>
int List<T>::listSize() {
    return size;
}

template <class T>
int List<T>::maxListSize() {
    return cap;
}

template <class T>
void List<T>::clear() {
    size = 0;
    cap = 0;
}

template <class T>
void List<T>::print() {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << ' ';
}


#ifndef LINKED_LIST_AND_ITS_APPLICATIONS_ABL_H_H
#define LINKED_LIST_AND_ITS_APPLICATIONS_ABL_H_H

template <class T>
class List{
private:
    int cap;
    int size;
    T* arr;
    void checkCap();

public:
    List(int n = 10);
    void insert(T ele);
    void insertAt(T ele , int index);
    void removeAt(int index);
    void replaceAt(T newElement, int index);
    bool isItemAtEqual(T element, int index);
    T& retrieveAt(int index);
    bool isEmpty();
    bool isFull();
    int listSize();
    int maxListSize();
    void clear();
    void print();
};



#endif //LINKED_LIST_AND_ITS_APPLICATIONS_ABL_H_H

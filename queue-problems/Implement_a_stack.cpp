#include <queue.cpp>
#include <iostream>
#include <algorithm>
using namespace std;

template<typename T>
class Stack{
private:
    queue<T>mainQueue ;
    queue<T>reversedQueue ;
    void reverseQueue();
public:
    void push(T ele);
    T pop();
    void print(){mainQueue.print();};
};

template<typename T>
void Stack<T>::reverseQueue() {
    const int sz = mainQueue.queueSize();

   while (reversedQueue.queueSize() != sz) {
       int size = mainQueue.queueSize();
       queue<T> tempQueue;

       // loop until we reach the last element
       for (int i = 0; i < size; ++i) {
           if( i == size - 1)
               reversedQueue.enqueue(mainQueue.dequeue());
           else
               tempQueue.enqueue(mainQueue.dequeue());
       }
       while (!tempQueue.isEmpty()) {
           mainQueue.enqueue(tempQueue.dequeue());
       }

   }
    while (!reversedQueue.isEmpty()) {
        mainQueue.enqueue(reversedQueue.dequeue());
    }
}

template<typename T>
void Stack<T>::push(T ele) {
    mainQueue.enqueue(ele);
}

template<typename T>
T Stack<T>::pop() {
    reverseQueue();
    T ele = mainQueue.dequeue();
    reverseQueue();
    return ele ;
}

int main(){
    Stack<int>stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    cout << "Stack before any 'POP()' :  \n";
    stk.print();
    cout << "==============================\n";
    stk.pop();
    stk.pop();
    cout << "Stack after use 'POP()' twice:\n";
    stk.print();
    return 0;
}

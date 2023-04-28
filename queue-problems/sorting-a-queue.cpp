#include <queue.cpp>
#include <iostream>
#include <algorithm>
using namespace std;

template<typename T>
void sortQueue(queue<T>q){
    int arrSize = q.queueSize();
    int* arr = new int[arrSize];

    for (int i = 0; i < arrSize; ++i) {
        arr[i] = q.dequeue();
    }
    sort(arr, arr + arrSize );
    for(int i = 0 ; i < arrSize ; i++){
        q.enqueue(arr[i]);
    }
}

void sort_Queue(queue<int>& q) {
    queue<int> tempQ;
    queue<int> sortedQ;
    int qSize = q.queueSize();

    while (sortedQ.queueSize() != qSize) {
        int mnEle = INT_MAX;
        int sz = q.queueSize();
        for (int i = 0; i < sz; i++) {
            int curr = q.dequeue();
            tempQ.enqueue(curr);
            mnEle = min(mnEle, curr);
        }

        while (!tempQ.isEmpty()) {
            int curr = tempQ.dequeue();
            if (curr != mnEle) {
                q.enqueue(curr);
            } else if ( curr == mnEle){
                sortedQ.enqueue(curr);
            }
        }
    }

    q = sortedQ;
}


int main(){
    queue<int>q;

    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(4);
    q.enqueue(4);
    q.enqueue(3);


    sort_Queue(q);

    q.print();
    return 0;
}

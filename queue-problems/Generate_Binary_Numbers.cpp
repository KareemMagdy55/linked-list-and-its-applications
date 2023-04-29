#include <queue.cpp>
#include <iostream>
#include <algorithm>
using namespace std;

void generateBinaryNumbers(queue<int>&q, int dec){
    if ( !dec)
        return;
    else {
        generateBinaryNumbers(q, dec / 2);
        q.enqueue(dec % 2);
    }


}

int main(){
    int decimalNumber ;
    cin >> decimalNumber;

    for (int i = 1; i <= decimalNumber; ++i) {
        queue<int>q;
        generateBinaryNumbers(q, i);
        while(!q.isEmpty()){ cout << q.dequeue(); }
        cout << ' ';
    }

    return 0;
}

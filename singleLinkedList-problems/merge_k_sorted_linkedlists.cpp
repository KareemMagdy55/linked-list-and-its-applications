#include<SLL_source_code_file.cpp>
#include<vector>
#include<queue>
template<typename T>
linkedList<T> MergeSortedLinkedLists(vector<linkedList<T>> v) {
  linkedList<int> res;


  priority_queue<pair<T, T>, vector<pair<T, T>>, greater<pair<T,
      T>>> pq;
  for (int i = 0; i < v.size(); ++i) {
    if (!v[i].isEmpty()) {
      pq.push(make_pair(v[i].retrieveAt(0), i));
      v[i].removeAtHead();
    }
  }

  // Merge popping the minimum value from the priority queue
  while (!pq.empty()) {
    auto p = pq.top();
    pq.pop();
    res.insertAtTail(p.first);
    if (!v[p.second].isEmpty()) {
      pq.push(make_pair(v[p.second].retrieveAt(0), p.second));
      v[p.second].removeAtHead();
    }
  }

  return res;
}
#ifndef LINKED_LIST_AND_ITS_APPLICATIONS_QUEUE_H
#define LINKED_LIST_AND_ITS_APPLICATIONS_QUEUE_H


#include <bits/stdc++.h>
using namespace std;

template<class T>
struct Node {
  int data{};
  Node *next{};
  Node *prev{};
  Node(T data) : data(data) {}
};

template<class T>
class double_linked_list
{
 private:
  Node<T>* head;
  Node<T>* tail;
  int length ;
 public:
  int size();
  double_linked_list();
  void link(Node<T> *first, Node<T> *second);
  void reverse();
  void swap(int i,int j);
  void insert_at_tail(T val);
  void insert_at_head(T val);
  void forward_traversal();
  void backward_traversal();
  void insert_at(int indix , T val);
  void remove_at_head();
  void remove_at_tail();
  Node<T>* delete_and_link(Node<T>* cur);
  void remove_at(int indix);
  T retrieve_at(int indix);
  void replaceAt(T val, int indix);
  bool is_exist(T val);
  bool isItemAtEqual(T val,int indix);
  bool is_empty();
  void delete_all_nodes_with_key(T val);
  void clear();
};

#endif

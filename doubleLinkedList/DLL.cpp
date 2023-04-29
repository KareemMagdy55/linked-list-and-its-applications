#pragma once
#include "DLL.h"

template<class T>
double_linked_list<T>::double_linked_list()
  {
    head = nullptr;
    tail = nullptr;
    length = 0;
  }


  
template<class T>
void double_linked_list<T>::link(Node<T> *first, Node<T> *second)
  {
    if(first)first->next = second;
    if(second)second->prev = first;

  }

template<class T>
void double_linked_list<T>::insert_at_tail(T val)
  {
    Node<T>* temp  = new Node<T>(val);
    if(!head)head = tail = temp;
    else
    {
      link(tail,temp);
      tail = temp;
    }
    length++;
  }

template<class T>
void double_linked_list<T>::insert_at_head(T val)
  {
    Node<T>* temp  = new Node<T>(val);
    if(!head)head = tail = temp;
    else
    {
      link(temp,head);
      head = temp;
    }
    length++;
}

template<class T>
void double_linked_list<T>::reverse()
{
  Node<T>* cur = head;
  Node<T>* next = nullptr;
  while(cur)
  {
    next = cur->next;
    cur->next = prev;
    cur->prev = next;
    prev = cur;
    cur = next;
  }
  swap(head,tail);
}

template<class T>
void double_linked_list<T>::forward_traversal()
  {
    Node<T>* cur = head;
    while(cur)
    {
      cout<<cur->data<<"  ->  ";
      cur = cur->next;
    }
    cout<<endl;
}

template<class T>
void double_linked_list<T>::backward_traversal()
{
    Node<T>* cur = tail;
    while(cur)
    {
      cout<<cur->data<<"  ->  ";
      cur = cur->prev;
    }
    cout<<endl;
}

template<class T>
void double_linked_list<T>::insert_at(int indix , T val)
  {
    assert(indix<length);
    int counter  =0;
    if(indix == 0)insert_at_head(val);
    else if(indix == length-1)insert_at_head(val);
    else
    {
      Node<T>* temp = new Node<T>(val);
      for(Node<T>* cur = head;cur;cur = cur->next,counter++)
      {
        if(counter == indix)
        {
          cur->prev->next = temp;
          temp->next = cur;
          break;
        }
      }
      length++;
    }

}

template<class T>
void double_linked_list<T>::remove_at_head()
  {
    assert(head);
    Node<T>* temp = head->next;
    delete head;
    head = temp;
    length--;

}

template<class T>
void double_linked_list<T>::remove_at_tail()
  {
    assert(head);
    Node<T>* temp = tail->prev;
    delete tail;
    tail = temp;
    tail ->next = nullptr;
    length--;

}

template<class T>
Node<T>* double_linked_list<T>::delete_and_link(Node<T>* cur)
  {
    Node<T>* ret = cur->prev;
    link(cur->prev,cur->next);
    delete cur;
    return ret;
}

template<class T>
void double_linked_list<T>::remove_at(int indix)
  {

    assert(indix<length);
    if(indix==0)remove_at_head();
    else if(indix==length-1)remove_at_tail();
    else
    {
      int counter =0;
      for(Node<T>* cur = head; cur; cur = cur->next,counter++)
      {
        if(counter == indix)
        {
          delete_and_link(cur);
          break;
        }
      }
    }
    length--;
}

template<class T>
T double_linked_list<T>::retrieve_at(int indix)
  {
    assert(indix < length);
    int counter =0;
    for(Node<T> * cur = head; cur; cur = cur->next,counter++)
    {
      if(counter == indix)return cur->data;
    }

  }
template<class T>

  void double_linked_list<T>::replaceAt(T val, int indix)
  {
    assert(indix < length);
    int counter =0;
    for(Node<T> * cur = head; cur; cur = cur->next,counter++)
    {
      if(counter == indix)cur->data = val;
    }
}

template<class T>
bool double_linked_list<T>::is_exist(T val)
  {
    for(Node<T> * cur = head; cur; cur = cur->next)
    {
      if(cur->data == val) return  true;
    }
    return false;
  }


template<class T>
bool double_linked_list<T>::isItemAtEqual(T val,int indix)
  {
    assert(indix < length);
    int counter =0;
    for(Node<T> * cur = head; cur; cur = cur->next,counter++)
    {
      if(counter == indix)
      {
        if(cur->data == val)return true;
        return false;
      }
    }
}

template<class T>
bool double_linked_list<T>::is_empty()
{
    return  length == 0;
}

template<class T>
int double_linked_list<T>::size()
  {
    return length;
}

template<class T>
void double_linked_list<T>::delete_all_nodes_with_key(T val) {
  if (!length)return;
  insert_at_head(-val);// dummy to avoid overflow
  for (Node<T> *cur = head; cur;) {
    if (cur->data == val) {
      cur = delete_and_link(cur);
      if (!cur->next)tail = cur;
    } else {
      cur = cur->next;
    }
  }
  remove_at_head(); // dummy removed
}

template<class T>
void double_linked_list<T>::clear()
  {
    while (head)
    {
      Node<T> * temp =head->next;
      delete head;
      head = temp;
    }
    head = nullptr;

}

template<class T>
void double_linked_list<T>::swap(int i, int j) {
  if (i == j) return;
  Node<T> *nodde_i ;
  Node<T> *nodde_j ;
  Node<T>*cur = double_linked_list<T>::head;
  int counter =0 ;
  while (cur)
  {
    if(counter == i )
    {
      nodde_i = cur;
    }
    counter++;
  }
  cur = double_linked_list<T>::head;
  counter = 0;
  while (cur)
  {
    if(counter == j )
    {
      nodde_j = cur;
    }
    counter++;
  }

  counter=0;
  cur = double_linked_list<T>::head;
  while (cur)
  {
    if(counter == i)
    {
      cur = nodde_j;
    }
    counter++;
  }

  cur = double_linked_list<T>::head;
  counter = 0;
  while (cur)
  {
    if(counter == j)
    {
      cur = nodde_i;
    }
    counter++;
  }

}





  
#include <SLL_source_code_file.cpp>
#include <iostream>
#include<algorithm>

using namespace std;
template<typename T>
linkedList<int> Combine_Nodes_Between_Zeros(linkedList<T> main)
{
  nodeType<int> *cur;
  cur = main.getFirst()->link;
  int sum = 0;
  linkedList<int> ans ;

  while (cur)
  {
    if(cur->info)sum+=cur->info;
    else
    {
      ans.insertAtTail(sum);
      sum =0;
    }
    cur = cur->link;
  }
  return ans;
}
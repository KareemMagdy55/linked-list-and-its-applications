#include <iostream>
#include "queue.cpp"
#include "CCL_source_code.cpp"
#include "ABL_CPP.cpp"
#include "DLL.cpp"
#include "SLL_source_code_file.cpp"
#include "SLL_header_file.h"


using namespace std;
int main() {
  double_linked_list<int>d;
  d.insert_at_tail(1);
  d.insert_at_tail(2);
  d.insert_at_tail(3);
  d.insert_at_tail(4);
  d.insert_at_tail(5);
  d.forward_traversal();
    return 0;
}

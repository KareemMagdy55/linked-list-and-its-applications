cmake_minimum_required(VERSION 3.23)
project(linked_list_and_its_applications)

set(CMAKE_CXX_STANDARD 14)

include_directories(circularLinkedList)
include_directories(arrayBasedList)
include_directories(queue)
include_directories(queue-problems)
include_directories(Stack)
include_directories(Stack-problems)
include_directories(singleLinkedList)
include_directories(singleLinkedList-problems)
include_directories(doubleLinkedList)




add_executable(main main.cpp)
add_executable(CCL circularLinkedList/CCL_source_code.cpp)
add_executable(ABL arrayBasedList/ABL_CPP.cpp)
add_executable(queue queue/queue.cpp)
add_executable(sortingProblem queue-problems/sorting-a-queue.cpp)
add_executable(Implement_a_stack queue-problems/Implement_a_stack.cpp)
add_executable(Generate_Binary_Numbers queue-problems/Generate_Binary_Numbers.cpp)
add_executable(ST Stack/ST_source_code.cpp)
add_executable(infinxproblem Stack-problems/infinx_to_postifix.cpp)
add_executable(parantethisproblem Stack-problems/longest_val_par.cpp)
add_executable(SLL singleLinkedList/SLL_source_code_file.cpp)
add_executable(DLL doubleLinkedList/DLL.cpp)
add_executable(compine_problem singleLinkedList-problems/Combine_nodes.cpp)
add_executable(merge singleLinkedList-problems/merge_k_sorted_linkedlists.cpp)







target_link_libraries(CCL PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(ABL PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(queue PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(sortingProblem PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(Implement_a_stack PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(Generate_Binary_Numbers PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(sortingProblem PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(infinxproblem PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(parantethisproblem PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(SLL PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(DLL PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(compine_problem PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(merge PUBLIC ${CMAKE_DL_LIBS})


#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -mwindows")

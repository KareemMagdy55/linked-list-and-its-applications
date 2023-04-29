cmake_minimum_required(VERSION 3.23)
project(linked_list_and_its_applications)

set(CMAKE_CXX_STANDARD 14)

include_directories(circularLinkedList)
include_directories(arrayBasedList)
include_directories(queue)
include_directories(queue-problems)

add_executable(main main.cpp)
add_executable(CCL circularLinkedList/CCL_source_code.cpp)
add_executable(ABL arrayBasedList/ABL_CPP.cpp)
add_executable(queue queue/queue.cpp)
add_executable(sortingProblem queue-problems/sorting-a-queue.cpp)
add_executable(Implement_a_stack queue-problems/Implement_a_stack.cpp)

target_link_libraries(CCL PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(ABL PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(queue PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(sortingProblem PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(Implement_a_stack PUBLIC ${CMAKE_DL_LIBS})

#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -mwindows")

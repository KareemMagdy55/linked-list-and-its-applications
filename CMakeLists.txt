cmake_minimum_required(VERSION 3.23)
project(linked_list_and_its_applications)

set(CMAKE_CXX_STANDARD 14)

include_directories(circularLinkedList)

add_executable(main main.cpp)
add_executable(CCL_source_code circularLinkedList/CCL_source_code.cpp)

target_link_libraries(CCL_source_code PUBLIC ${CMAKE_DL_LIBS})

cmake_minimum_required(VERSION 3.23)
project(linked_list_and_its_applications)

set(CMAKE_CXX_STANDARD 14)

include_directories(circularLinkedList)
include_directories(arrayBasedList)

add_executable(main main.cpp)
add_executable(CCL circularLinkedList/CCL_source_code.cpp)
add_executable(ABL arrayBasedList/ABL_CPP.cpp)

target_link_libraries(CCL PUBLIC ${CMAKE_DL_LIBS})
target_link_libraries(ABL PUBLIC ${CMAKE_DL_LIBS})

#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -mwindows")

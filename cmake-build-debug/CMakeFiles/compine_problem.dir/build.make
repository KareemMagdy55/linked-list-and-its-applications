# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\Ahmed\AppData\Local\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Ahmed\AppData\Local\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Ahmed\Documents\linked-list-and-its-applications

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/compine_problem.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/compine_problem.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/compine_problem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/compine_problem.dir/flags.make

CMakeFiles/compine_problem.dir/singleLinkedList-problems/Combine_nodes.cpp.obj: CMakeFiles/compine_problem.dir/flags.make
CMakeFiles/compine_problem.dir/singleLinkedList-problems/Combine_nodes.cpp.obj: CMakeFiles/compine_problem.dir/includes_CXX.rsp
CMakeFiles/compine_problem.dir/singleLinkedList-problems/Combine_nodes.cpp.obj: ../singleLinkedList-problems/Combine_nodes.cpp
CMakeFiles/compine_problem.dir/singleLinkedList-problems/Combine_nodes.cpp.obj: CMakeFiles/compine_problem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/compine_problem.dir/singleLinkedList-problems/Combine_nodes.cpp.obj"
	C:\Users\Ahmed\AppData\Local\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compine_problem.dir/singleLinkedList-problems/Combine_nodes.cpp.obj -MF CMakeFiles\compine_problem.dir\singleLinkedList-problems\Combine_nodes.cpp.obj.d -o CMakeFiles\compine_problem.dir\singleLinkedList-problems\Combine_nodes.cpp.obj -c C:\Users\Ahmed\Documents\linked-list-and-its-applications\singleLinkedList-problems\Combine_nodes.cpp

CMakeFiles/compine_problem.dir/singleLinkedList-problems/Combine_nodes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compine_problem.dir/singleLinkedList-problems/Combine_nodes.cpp.i"
	C:\Users\Ahmed\AppData\Local\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Ahmed\Documents\linked-list-and-its-applications\singleLinkedList-problems\Combine_nodes.cpp > CMakeFiles\compine_problem.dir\singleLinkedList-problems\Combine_nodes.cpp.i

CMakeFiles/compine_problem.dir/singleLinkedList-problems/Combine_nodes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compine_problem.dir/singleLinkedList-problems/Combine_nodes.cpp.s"
	C:\Users\Ahmed\AppData\Local\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Ahmed\Documents\linked-list-and-its-applications\singleLinkedList-problems\Combine_nodes.cpp -o CMakeFiles\compine_problem.dir\singleLinkedList-problems\Combine_nodes.cpp.s

# Object files for target compine_problem
compine_problem_OBJECTS = \
"CMakeFiles/compine_problem.dir/singleLinkedList-problems/Combine_nodes.cpp.obj"

# External object files for target compine_problem
compine_problem_EXTERNAL_OBJECTS =

compine_problem.exe: CMakeFiles/compine_problem.dir/singleLinkedList-problems/Combine_nodes.cpp.obj
compine_problem.exe: CMakeFiles/compine_problem.dir/build.make
compine_problem.exe: CMakeFiles/compine_problem.dir/linklibs.rsp
compine_problem.exe: CMakeFiles/compine_problem.dir/objects1.rsp
compine_problem.exe: CMakeFiles/compine_problem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable compine_problem.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\compine_problem.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/compine_problem.dir/build: compine_problem.exe
.PHONY : CMakeFiles/compine_problem.dir/build

CMakeFiles/compine_problem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\compine_problem.dir\cmake_clean.cmake
.PHONY : CMakeFiles/compine_problem.dir/clean

CMakeFiles/compine_problem.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Ahmed\Documents\linked-list-and-its-applications C:\Users\Ahmed\Documents\linked-list-and-its-applications C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug\CMakeFiles\compine_problem.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/compine_problem.dir/depend


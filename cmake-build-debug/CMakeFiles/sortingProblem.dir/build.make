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
include CMakeFiles/sortingProblem.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sortingProblem.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sortingProblem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sortingProblem.dir/flags.make

CMakeFiles/sortingProblem.dir/queue-problems/sorting-a-queue.cpp.obj: CMakeFiles/sortingProblem.dir/flags.make
CMakeFiles/sortingProblem.dir/queue-problems/sorting-a-queue.cpp.obj: CMakeFiles/sortingProblem.dir/includes_CXX.rsp
CMakeFiles/sortingProblem.dir/queue-problems/sorting-a-queue.cpp.obj: ../queue-problems/sorting-a-queue.cpp
CMakeFiles/sortingProblem.dir/queue-problems/sorting-a-queue.cpp.obj: CMakeFiles/sortingProblem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sortingProblem.dir/queue-problems/sorting-a-queue.cpp.obj"
	C:\Users\Ahmed\AppData\Local\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sortingProblem.dir/queue-problems/sorting-a-queue.cpp.obj -MF CMakeFiles\sortingProblem.dir\queue-problems\sorting-a-queue.cpp.obj.d -o CMakeFiles\sortingProblem.dir\queue-problems\sorting-a-queue.cpp.obj -c C:\Users\Ahmed\Documents\linked-list-and-its-applications\queue-problems\sorting-a-queue.cpp

CMakeFiles/sortingProblem.dir/queue-problems/sorting-a-queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sortingProblem.dir/queue-problems/sorting-a-queue.cpp.i"
	C:\Users\Ahmed\AppData\Local\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Ahmed\Documents\linked-list-and-its-applications\queue-problems\sorting-a-queue.cpp > CMakeFiles\sortingProblem.dir\queue-problems\sorting-a-queue.cpp.i

CMakeFiles/sortingProblem.dir/queue-problems/sorting-a-queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sortingProblem.dir/queue-problems/sorting-a-queue.cpp.s"
	C:\Users\Ahmed\AppData\Local\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Ahmed\Documents\linked-list-and-its-applications\queue-problems\sorting-a-queue.cpp -o CMakeFiles\sortingProblem.dir\queue-problems\sorting-a-queue.cpp.s

# Object files for target sortingProblem
sortingProblem_OBJECTS = \
"CMakeFiles/sortingProblem.dir/queue-problems/sorting-a-queue.cpp.obj"

# External object files for target sortingProblem
sortingProblem_EXTERNAL_OBJECTS =

sortingProblem.exe: CMakeFiles/sortingProblem.dir/queue-problems/sorting-a-queue.cpp.obj
sortingProblem.exe: CMakeFiles/sortingProblem.dir/build.make
sortingProblem.exe: CMakeFiles/sortingProblem.dir/linklibs.rsp
sortingProblem.exe: CMakeFiles/sortingProblem.dir/objects1.rsp
sortingProblem.exe: CMakeFiles/sortingProblem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sortingProblem.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sortingProblem.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sortingProblem.dir/build: sortingProblem.exe
.PHONY : CMakeFiles/sortingProblem.dir/build

CMakeFiles/sortingProblem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sortingProblem.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sortingProblem.dir/clean

CMakeFiles/sortingProblem.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Ahmed\Documents\linked-list-and-its-applications C:\Users\Ahmed\Documents\linked-list-and-its-applications C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug\CMakeFiles\sortingProblem.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sortingProblem.dir/depend

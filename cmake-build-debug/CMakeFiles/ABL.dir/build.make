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
include CMakeFiles/ABL.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ABL.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ABL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ABL.dir/flags.make

CMakeFiles/ABL.dir/arrayBasedList/ABL_CPP.cpp.obj: CMakeFiles/ABL.dir/flags.make
CMakeFiles/ABL.dir/arrayBasedList/ABL_CPP.cpp.obj: CMakeFiles/ABL.dir/includes_CXX.rsp
CMakeFiles/ABL.dir/arrayBasedList/ABL_CPP.cpp.obj: ../arrayBasedList/ABL_CPP.cpp
CMakeFiles/ABL.dir/arrayBasedList/ABL_CPP.cpp.obj: CMakeFiles/ABL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ABL.dir/arrayBasedList/ABL_CPP.cpp.obj"
	C:\Users\Ahmed\AppData\Local\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ABL.dir/arrayBasedList/ABL_CPP.cpp.obj -MF CMakeFiles\ABL.dir\arrayBasedList\ABL_CPP.cpp.obj.d -o CMakeFiles\ABL.dir\arrayBasedList\ABL_CPP.cpp.obj -c C:\Users\Ahmed\Documents\linked-list-and-its-applications\arrayBasedList\ABL_CPP.cpp

CMakeFiles/ABL.dir/arrayBasedList/ABL_CPP.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ABL.dir/arrayBasedList/ABL_CPP.cpp.i"
	C:\Users\Ahmed\AppData\Local\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Ahmed\Documents\linked-list-and-its-applications\arrayBasedList\ABL_CPP.cpp > CMakeFiles\ABL.dir\arrayBasedList\ABL_CPP.cpp.i

CMakeFiles/ABL.dir/arrayBasedList/ABL_CPP.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ABL.dir/arrayBasedList/ABL_CPP.cpp.s"
	C:\Users\Ahmed\AppData\Local\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Ahmed\Documents\linked-list-and-its-applications\arrayBasedList\ABL_CPP.cpp -o CMakeFiles\ABL.dir\arrayBasedList\ABL_CPP.cpp.s

# Object files for target ABL
ABL_OBJECTS = \
"CMakeFiles/ABL.dir/arrayBasedList/ABL_CPP.cpp.obj"

# External object files for target ABL
ABL_EXTERNAL_OBJECTS =

ABL.exe: CMakeFiles/ABL.dir/arrayBasedList/ABL_CPP.cpp.obj
ABL.exe: CMakeFiles/ABL.dir/build.make
ABL.exe: CMakeFiles/ABL.dir/linklibs.rsp
ABL.exe: CMakeFiles/ABL.dir/objects1.rsp
ABL.exe: CMakeFiles/ABL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ABL.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ABL.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ABL.dir/build: ABL.exe
.PHONY : CMakeFiles/ABL.dir/build

CMakeFiles/ABL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ABL.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ABL.dir/clean

CMakeFiles/ABL.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Ahmed\Documents\linked-list-and-its-applications C:\Users\Ahmed\Documents\linked-list-and-its-applications C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug C:\Users\Ahmed\Documents\linked-list-and-its-applications\cmake-build-debug\CMakeFiles\ABL.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ABL.dir/depend

# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.11.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.11.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jingruili/IdeaProjects/jvm-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jingruili/IdeaProjects/jvm-1/examples

# Include any dependencies generated for this target.
include CMakeFiles/jvm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/jvm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/jvm.dir/flags.make

CMakeFiles/jvm.dir/src/main.cpp.o: CMakeFiles/jvm.dir/flags.make
CMakeFiles/jvm.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/jvm.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jvm.dir/src/main.cpp.o -c /Users/jingruili/IdeaProjects/jvm-1/src/main.cpp

CMakeFiles/jvm.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jvm.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jingruili/IdeaProjects/jvm-1/src/main.cpp > CMakeFiles/jvm.dir/src/main.cpp.i

CMakeFiles/jvm.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jvm.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jingruili/IdeaProjects/jvm-1/src/main.cpp -o CMakeFiles/jvm.dir/src/main.cpp.s

CMakeFiles/jvm.dir/src/classloader.cpp.o: CMakeFiles/jvm.dir/flags.make
CMakeFiles/jvm.dir/src/classloader.cpp.o: ../src/classloader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/jvm.dir/src/classloader.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jvm.dir/src/classloader.cpp.o -c /Users/jingruili/IdeaProjects/jvm-1/src/classloader.cpp

CMakeFiles/jvm.dir/src/classloader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jvm.dir/src/classloader.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jingruili/IdeaProjects/jvm-1/src/classloader.cpp > CMakeFiles/jvm.dir/src/classloader.cpp.i

CMakeFiles/jvm.dir/src/classloader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jvm.dir/src/classloader.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jingruili/IdeaProjects/jvm-1/src/classloader.cpp -o CMakeFiles/jvm.dir/src/classloader.cpp.s

CMakeFiles/jvm.dir/src/classviewer.cpp.o: CMakeFiles/jvm.dir/flags.make
CMakeFiles/jvm.dir/src/classviewer.cpp.o: ../src/classviewer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/jvm.dir/src/classviewer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jvm.dir/src/classviewer.cpp.o -c /Users/jingruili/IdeaProjects/jvm-1/src/classviewer.cpp

CMakeFiles/jvm.dir/src/classviewer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jvm.dir/src/classviewer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jingruili/IdeaProjects/jvm-1/src/classviewer.cpp > CMakeFiles/jvm.dir/src/classviewer.cpp.i

CMakeFiles/jvm.dir/src/classviewer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jvm.dir/src/classviewer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jingruili/IdeaProjects/jvm-1/src/classviewer.cpp -o CMakeFiles/jvm.dir/src/classviewer.cpp.s

CMakeFiles/jvm.dir/src/utils.cpp.o: CMakeFiles/jvm.dir/flags.make
CMakeFiles/jvm.dir/src/utils.cpp.o: ../src/utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/jvm.dir/src/utils.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jvm.dir/src/utils.cpp.o -c /Users/jingruili/IdeaProjects/jvm-1/src/utils.cpp

CMakeFiles/jvm.dir/src/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jvm.dir/src/utils.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jingruili/IdeaProjects/jvm-1/src/utils.cpp > CMakeFiles/jvm.dir/src/utils.cpp.i

CMakeFiles/jvm.dir/src/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jvm.dir/src/utils.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jingruili/IdeaProjects/jvm-1/src/utils.cpp -o CMakeFiles/jvm.dir/src/utils.cpp.s

CMakeFiles/jvm.dir/src/methodarea.cpp.o: CMakeFiles/jvm.dir/flags.make
CMakeFiles/jvm.dir/src/methodarea.cpp.o: ../src/methodarea.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/jvm.dir/src/methodarea.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jvm.dir/src/methodarea.cpp.o -c /Users/jingruili/IdeaProjects/jvm-1/src/methodarea.cpp

CMakeFiles/jvm.dir/src/methodarea.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jvm.dir/src/methodarea.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jingruili/IdeaProjects/jvm-1/src/methodarea.cpp > CMakeFiles/jvm.dir/src/methodarea.cpp.i

CMakeFiles/jvm.dir/src/methodarea.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jvm.dir/src/methodarea.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jingruili/IdeaProjects/jvm-1/src/methodarea.cpp -o CMakeFiles/jvm.dir/src/methodarea.cpp.s

CMakeFiles/jvm.dir/src/heap.cpp.o: CMakeFiles/jvm.dir/flags.make
CMakeFiles/jvm.dir/src/heap.cpp.o: ../src/heap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/jvm.dir/src/heap.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jvm.dir/src/heap.cpp.o -c /Users/jingruili/IdeaProjects/jvm-1/src/heap.cpp

CMakeFiles/jvm.dir/src/heap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jvm.dir/src/heap.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jingruili/IdeaProjects/jvm-1/src/heap.cpp > CMakeFiles/jvm.dir/src/heap.cpp.i

CMakeFiles/jvm.dir/src/heap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jvm.dir/src/heap.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jingruili/IdeaProjects/jvm-1/src/heap.cpp -o CMakeFiles/jvm.dir/src/heap.cpp.s

CMakeFiles/jvm.dir/src/vmstack.cpp.o: CMakeFiles/jvm.dir/flags.make
CMakeFiles/jvm.dir/src/vmstack.cpp.o: ../src/vmstack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/jvm.dir/src/vmstack.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jvm.dir/src/vmstack.cpp.o -c /Users/jingruili/IdeaProjects/jvm-1/src/vmstack.cpp

CMakeFiles/jvm.dir/src/vmstack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jvm.dir/src/vmstack.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jingruili/IdeaProjects/jvm-1/src/vmstack.cpp > CMakeFiles/jvm.dir/src/vmstack.cpp.i

CMakeFiles/jvm.dir/src/vmstack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jvm.dir/src/vmstack.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jingruili/IdeaProjects/jvm-1/src/vmstack.cpp -o CMakeFiles/jvm.dir/src/vmstack.cpp.s

CMakeFiles/jvm.dir/src/frame.cpp.o: CMakeFiles/jvm.dir/flags.make
CMakeFiles/jvm.dir/src/frame.cpp.o: ../src/frame.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/jvm.dir/src/frame.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jvm.dir/src/frame.cpp.o -c /Users/jingruili/IdeaProjects/jvm-1/src/frame.cpp

CMakeFiles/jvm.dir/src/frame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jvm.dir/src/frame.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jingruili/IdeaProjects/jvm-1/src/frame.cpp > CMakeFiles/jvm.dir/src/frame.cpp.i

CMakeFiles/jvm.dir/src/frame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jvm.dir/src/frame.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jingruili/IdeaProjects/jvm-1/src/frame.cpp -o CMakeFiles/jvm.dir/src/frame.cpp.s

CMakeFiles/jvm.dir/src/executionengine.cpp.o: CMakeFiles/jvm.dir/flags.make
CMakeFiles/jvm.dir/src/executionengine.cpp.o: ../src/executionengine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/jvm.dir/src/executionengine.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jvm.dir/src/executionengine.cpp.o -c /Users/jingruili/IdeaProjects/jvm-1/src/executionengine.cpp

CMakeFiles/jvm.dir/src/executionengine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jvm.dir/src/executionengine.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jingruili/IdeaProjects/jvm-1/src/executionengine.cpp > CMakeFiles/jvm.dir/src/executionengine.cpp.i

CMakeFiles/jvm.dir/src/executionengine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jvm.dir/src/executionengine.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jingruili/IdeaProjects/jvm-1/src/executionengine.cpp -o CMakeFiles/jvm.dir/src/executionengine.cpp.s

CMakeFiles/jvm.dir/src/stringobject.cpp.o: CMakeFiles/jvm.dir/flags.make
CMakeFiles/jvm.dir/src/stringobject.cpp.o: ../src/stringobject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/jvm.dir/src/stringobject.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jvm.dir/src/stringobject.cpp.o -c /Users/jingruili/IdeaProjects/jvm-1/src/stringobject.cpp

CMakeFiles/jvm.dir/src/stringobject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jvm.dir/src/stringobject.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jingruili/IdeaProjects/jvm-1/src/stringobject.cpp > CMakeFiles/jvm.dir/src/stringobject.cpp.i

CMakeFiles/jvm.dir/src/stringobject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jvm.dir/src/stringobject.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jingruili/IdeaProjects/jvm-1/src/stringobject.cpp -o CMakeFiles/jvm.dir/src/stringobject.cpp.s

CMakeFiles/jvm.dir/src/arrayobject.cpp.o: CMakeFiles/jvm.dir/flags.make
CMakeFiles/jvm.dir/src/arrayobject.cpp.o: ../src/arrayobject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/jvm.dir/src/arrayobject.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jvm.dir/src/arrayobject.cpp.o -c /Users/jingruili/IdeaProjects/jvm-1/src/arrayobject.cpp

CMakeFiles/jvm.dir/src/arrayobject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jvm.dir/src/arrayobject.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jingruili/IdeaProjects/jvm-1/src/arrayobject.cpp > CMakeFiles/jvm.dir/src/arrayobject.cpp.i

CMakeFiles/jvm.dir/src/arrayobject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jvm.dir/src/arrayobject.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jingruili/IdeaProjects/jvm-1/src/arrayobject.cpp -o CMakeFiles/jvm.dir/src/arrayobject.cpp.s

CMakeFiles/jvm.dir/src/classinstance.cpp.o: CMakeFiles/jvm.dir/flags.make
CMakeFiles/jvm.dir/src/classinstance.cpp.o: ../src/classinstance.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/jvm.dir/src/classinstance.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jvm.dir/src/classinstance.cpp.o -c /Users/jingruili/IdeaProjects/jvm-1/src/classinstance.cpp

CMakeFiles/jvm.dir/src/classinstance.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jvm.dir/src/classinstance.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jingruili/IdeaProjects/jvm-1/src/classinstance.cpp > CMakeFiles/jvm.dir/src/classinstance.cpp.i

CMakeFiles/jvm.dir/src/classinstance.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jvm.dir/src/classinstance.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jingruili/IdeaProjects/jvm-1/src/classinstance.cpp -o CMakeFiles/jvm.dir/src/classinstance.cpp.s

CMakeFiles/jvm.dir/src/classruntime.cpp.o: CMakeFiles/jvm.dir/flags.make
CMakeFiles/jvm.dir/src/classruntime.cpp.o: ../src/classruntime.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/jvm.dir/src/classruntime.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jvm.dir/src/classruntime.cpp.o -c /Users/jingruili/IdeaProjects/jvm-1/src/classruntime.cpp

CMakeFiles/jvm.dir/src/classruntime.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jvm.dir/src/classruntime.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jingruili/IdeaProjects/jvm-1/src/classruntime.cpp > CMakeFiles/jvm.dir/src/classruntime.cpp.i

CMakeFiles/jvm.dir/src/classruntime.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jvm.dir/src/classruntime.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jingruili/IdeaProjects/jvm-1/src/classruntime.cpp -o CMakeFiles/jvm.dir/src/classruntime.cpp.s

# Object files for target jvm
jvm_OBJECTS = \
"CMakeFiles/jvm.dir/src/main.cpp.o" \
"CMakeFiles/jvm.dir/src/classloader.cpp.o" \
"CMakeFiles/jvm.dir/src/classviewer.cpp.o" \
"CMakeFiles/jvm.dir/src/utils.cpp.o" \
"CMakeFiles/jvm.dir/src/methodarea.cpp.o" \
"CMakeFiles/jvm.dir/src/heap.cpp.o" \
"CMakeFiles/jvm.dir/src/vmstack.cpp.o" \
"CMakeFiles/jvm.dir/src/frame.cpp.o" \
"CMakeFiles/jvm.dir/src/executionengine.cpp.o" \
"CMakeFiles/jvm.dir/src/stringobject.cpp.o" \
"CMakeFiles/jvm.dir/src/arrayobject.cpp.o" \
"CMakeFiles/jvm.dir/src/classinstance.cpp.o" \
"CMakeFiles/jvm.dir/src/classruntime.cpp.o"

# External object files for target jvm
jvm_EXTERNAL_OBJECTS =

jvm: CMakeFiles/jvm.dir/src/main.cpp.o
jvm: CMakeFiles/jvm.dir/src/classloader.cpp.o
jvm: CMakeFiles/jvm.dir/src/classviewer.cpp.o
jvm: CMakeFiles/jvm.dir/src/utils.cpp.o
jvm: CMakeFiles/jvm.dir/src/methodarea.cpp.o
jvm: CMakeFiles/jvm.dir/src/heap.cpp.o
jvm: CMakeFiles/jvm.dir/src/vmstack.cpp.o
jvm: CMakeFiles/jvm.dir/src/frame.cpp.o
jvm: CMakeFiles/jvm.dir/src/executionengine.cpp.o
jvm: CMakeFiles/jvm.dir/src/stringobject.cpp.o
jvm: CMakeFiles/jvm.dir/src/arrayobject.cpp.o
jvm: CMakeFiles/jvm.dir/src/classinstance.cpp.o
jvm: CMakeFiles/jvm.dir/src/classruntime.cpp.o
jvm: CMakeFiles/jvm.dir/build.make
jvm: CMakeFiles/jvm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable jvm"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/jvm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/jvm.dir/build: jvm

.PHONY : CMakeFiles/jvm.dir/build

CMakeFiles/jvm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/jvm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/jvm.dir/clean

CMakeFiles/jvm.dir/depend:
	cd /Users/jingruili/IdeaProjects/jvm-1/examples && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jingruili/IdeaProjects/jvm-1 /Users/jingruili/IdeaProjects/jvm-1 /Users/jingruili/IdeaProjects/jvm-1/examples /Users/jingruili/IdeaProjects/jvm-1/examples /Users/jingruili/IdeaProjects/jvm-1/examples/CMakeFiles/jvm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/jvm.dir/depend


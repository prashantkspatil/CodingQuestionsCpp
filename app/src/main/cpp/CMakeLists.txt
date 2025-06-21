
# Sets the minimum version of CMake required to build the native
# library. You should always speficy a KIGHER version than the
# version of CMake you are using.
cmake_minimum_required(VERSION 3.18.1) # Or a newer version like 3.22.1

# Declares and names the project.
project("codingqna_c") # Choose a name for your native project

# Creates and names a library, sets it as SHARED
# (a .so file), and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
        codingqna_c # This will be the name of your .so file (e.g., libnative-lib.so)

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        bridge.cpp
        solutions.cpp
        # Add other .cpp files here if you have more
)

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries by default,
# you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log # For Android logging (optional, but often useful)
)

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
        codingqna_c

        # Links the target library to the log library
        # included in the NDK.
        ${log-lib} # Only if you used find_library for log
)
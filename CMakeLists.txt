cmake_minimum_required(VERSION 3.20)

project(example VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 23) # C++ standard to use
set(CMAKE_CXX_EXTENSIONS OFF) # Do not allow compiler specific features

# Setup tests
include(CTest)
enable_testing()
add_subdirectory(tests)


include(FetchContent)

# Will add google tests to the biuld
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest
    GIT_TAG v1.15.2
    GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(googletest)



add_subdirectory(external)

add_executable(template src/main.cpp)
target_include_directories(template PUBLIC "src/")

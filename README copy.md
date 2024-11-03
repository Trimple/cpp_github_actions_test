# Cpp_basic_project_template
 A basic C++ project template used for new Hople projects. 

This template is based on Cmake. It also uses [googletests](https://github.com/google/googletest) for testing purposes.

Cmake structure of the project assumes usage of **add_subdirectory** commands for external libraries and tests and direct build from the main CmakeLists.txt file of all main executables.

This template is as bare bone as it can be, so that it can be used and understand by C++ beginners.

At the moment we as a team are not very experienced with CMake and C++. This template is a work in progress and will be improved in the future. All improvement ideas and suggestions are highly appreciated!

## What tools need to be installed to use the template
This template doesn't contain any OS-specific or compiler-specific functions and therefore can be used on any OS with any C++ compiler.

This tools must be installed to build the code:
- **CMake** - current project requires version 3.20, though it can easily be changed if needed.
- **Any C++ compiler** - compiler must be accessible through the terminal of your OS and must support C++14 or above.
- **Any build tool** - like Unix Makefiles, Ninja, etc. Linux and MacOS usually come with these tools preinstalled. On Windows they need to be installed manually. Though any build tool will work just fine, it is recommended to use **Ninja**.

## How to build the template
Template build 2 executables:
1. **template** - contains a "Hello, world" example for C++;
2. **template_tests** - contains 2 tests that compare numbers to each other. One test will be successful and one will fail as an example of possible output.

To build executables open a default shell of your OS and type command below one by one:
```shell
mkdir build
cd build
cmake -G Ninja ..
cmake --build .
```

The example above uses Ninja generator, though any other generator may be used. List of all generators can be found [here](https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html).

Initial build will take some time because it will need to download and build googletest framework. Following build will go significantly faster as long as you don't delete the build folder entirely.

Both executable can be run from the command line. The **template** executable will be located in the **build** folder. The **template_tests** will be located in **build/tests** folder.

## Additional features of the template 

### Clang-format
This repository contains a .clang-format file with all our formatting guidelines for C++.
**TODO**:
- add information on how to install .clang-format;
- add information, where can people 

## How to convert template to new project
They way you may use this template may vary from project to project, but the most general steps that are useful most of the time are:
- Copy this template to the git repository of a new project (except of .git folder);
- Change the project related information in this README file;
- Add needed libraries and update all needed CMakeLists.txt files;
- Start writing your code in the src library;

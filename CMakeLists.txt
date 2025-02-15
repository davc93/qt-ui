cmake_minimum_required(VERSION 3.16)
project(MyQtApp VERSION 1.0 LANGUAGES CXX)

set(CMAKE_PREFIX_PATH "/home/dvcasanova/Qt/6.8.2/gcc_64")
find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(MyQtApp src/main.cpp)
target_link_libraries(MyQtApp PRIVATE Qt6::Widgets)

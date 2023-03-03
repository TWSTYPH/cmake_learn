cmake_minimum_required(VERSION 3.0)

project(SOLIDEFIRE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)
# 设置变量 CMAKE_BUILD_TYPE（变量的类型）  Debug  生成一个可以调试的文件

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(my_cmake_run main.cpp src/Gun.cpp src/Soldier.cpp)

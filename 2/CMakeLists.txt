cmake_minimum_required(VERSION 3.0)

project(SWAP)

include_directories(include)
# 包含搜索路径中，如果不加需要在main函数中包含头文件包括路径
# include “include/swap.h”

add_executable(main_cmake main.cpp src/swap.cpp)
# 生成可执行文件
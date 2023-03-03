# cmake_learn

# Linux(Ubuntu) 系统下C++的编译调试

具体学习参考https://www.bilibili.com/video/BV1fy4y1b7TC/?spm_id_from=333.788.recommend_more_video.0

## 一、开发环境搭建

### 1.1、编译器 调试器 安装

​		安装GCC   GDB

​		sudo apt-get update #文件软件的更新

​		sudo apt-get install build-essential gdb

​		确认安装是否成功

```c++
		gcc --version

​		g++ --version

​		gdb --version
```

如果安装成功，显示各个版本号

### 1.2、CMake安装

安装cmake

```c++
sudo apt-get install cmake
    #安装编译器
    安装成功确认同上
    cmake --version
```

## 二、GCC编译器

1、gcc编译器支持 go、Objective-C、Objective-C++  等。

2、Linux 开发C/C++熟悉GCC

3、VSCode通过调用GCC编译器实现C/C++编译工作

gcc指令编译C代码

g++指令编译C++代码

### 2.1、编译过程

1、预处理  //生成 .i文件

```c++
# -E 选项指示仅仅对输入文件进行预处理
g++ -E test.cpp -o test.i
```

2、编译 生成.s文件

```c++
# -S 编译选项告诉g++，为C++生成汇编语言文件
#g++生成汇编语言的扩展文件名为.s
g++ -S test.i -o test.s
```

3、汇编 生成.o文件

```c++
-C  选项告诉编译器把源代码生成机器语言
g++ -C test.s -o test.o
```

4、链接  生成bin文件

```c++
-o  用于生成可执行文件
g++ test.o -o test
```


 cmake_minimum_required(VERSION 3.20.0) #指定CMake最低版本

 project(planning 
    VERSION 0.0.1 
    DESCRIPTION "a demo of cmake planning !"
    HOMEPAGE_URL "https://github.com/Rabbit-WOW/CMake_planning_demo"
    LANGUAGES CXX
) #项目构建，但是复杂化！

set(CMAKE_CXX_STANDARD 17) #设置C++版本
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin) #设置动态库与可执行文件的输出目录

#添加子目录
add_subdirectory(src) #去找子目录里面的CMakeLists.txt有就能找到，然后继续运行！父目录的设置会传递到子目录中！继承！懂？


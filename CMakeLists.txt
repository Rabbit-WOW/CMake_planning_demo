 cmake_minimum_required(VERSION 3.20.0) #指定CMake最低版本

 project(planning 
    VERSION 0.0.1 
    DESCRIPTION "a demo of cmake planning !"
    HOMEPAGE_URL "https://github.com/Rabbit-WOW/CMake_planning_demo"
    LANGUAGES CXX
) #项目构建，但是复杂化！

set(CMAKE_CXX_STANDARD 17) #设置C++版本
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin) #设置动态库与可执行文件的输出目录
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process) #该目录指定为变量Process_Dir
set(Pnc_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
set(Show_Result ${CMAKE_SOURCE_DIR}/src/show_result)


# 三方库--EIGEN
set(EIGEN3_INCLUDE_DIR "D:/progrom files/IDE Support library/Third_Party/eigen-3.4.0") #记录eigen库所在位置
list(APPEND CMAKE_MODULE_PATH ${EIGEN3_INCLUDE_DIR}/cmake) #把cmake这个目录添加到CMAKE_MODULE_PATH里面！
message("CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}") #打印目录的信息!
find_package(Eigen3 3.4 REQUIRED) #由于上一条语句，会直接从cmake文件夹中搜索想要的文件！（搜索3.4版本的REQUIRED文件）
if(TARGET Eigen3::Eigen)
    message(STATUS "***** Eigen3 3.4 found in ${EIGEN3_INCLUDE_DIR} *****")
endif()


# 三方库--EASYX
link_libraries(easyx) #如果不可考虑内存的话！直接全局链接就完事了！

#添加子目录
add_subdirectory(src) #去找子目录里面的CMakeLists.txt有就能找到，然后继续运行！父目录的设置会传递到子目录中！继承！懂？



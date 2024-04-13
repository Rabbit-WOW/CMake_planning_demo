 project(planning_main)

 set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process) #该目录指定为变量Process_Dir
 set(Pnc_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)

 add_subdirectory(pnc_map)

 add_subdirectory(process)

 add_executable(${PROJECT_NAME} planning_main.cpp) #创建可执行文件

 target_include_directories(${PROJECT_NAME} PUBLIC ${Process_Dir}) #给可执行文件添加头文件目录！

 target_link_libraries(${PROJECT_NAME} PUBLIC process) #链接头文件


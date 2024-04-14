 project(planning_main)

 add_subdirectory(pnc_map)

 add_subdirectory(process)

 add_subdirectory(show_result)

 add_executable(${PROJECT_NAME} planning_main.cpp) #创建可执行文件

 target_include_directories(${PROJECT_NAME} PUBLIC ${Process_Dir}) #给可执行文件添加头文件目录！

 target_include_directories(${PROJECT_NAME} PUBLIC ${Show_Result}) #也要指定头文件路径！

 target_link_libraries(${PROJECT_NAME} PUBLIC process) #链接动态库

 target_link_libraries(${PROJECT_NAME} PUBLIC show_result) #链接动态库



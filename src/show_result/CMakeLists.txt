project(show_result)

add_library(${PROJECT_NAME} SHARED show_result.cpp) #生成动态库！

target_include_directories(${PROJECT_NAME} PUBLIC ${Process_Dir})

target_link_libraries(${PROJECT_NAME} PUBLIC process) #要去链接动态库process

target_link_libraries(${PROJECT_NAME} PUBLIC easyx) #这是复制进去的那两个静态库！由于是在根目录下！所以不用去指定头文件目录！

  
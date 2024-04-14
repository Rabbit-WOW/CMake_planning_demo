 project(process)

 add_library(${PROJECT_NAME} SHARED process.cpp) #建立动态库

 target_include_directories(${PROJECT_NAME} PUBLIC ${Pnc_Map_Dir}) #建立动态库头文件路径

 target_link_libraries(${PROJECT_NAME} PUBLIC pnc_map) #与另一个动态库相链接！

 #target_link_libraries(${PROJECT_NAME} PUBLIC Eigen3::Eigen) #链接eigin库！
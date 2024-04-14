project(process_test)

add_executable(${PROJECT_NAME} process_test.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${Process_Dir})

target_link_libraries(${PROJECT_NAME} PUBLIC process)

add_test(
    NAME process_test_info
    COMMAND ${PROJECT_NAME}
)
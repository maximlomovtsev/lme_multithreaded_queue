cmake_minimum_required(VERSION 3.21.2)
project(example)

set(${PROJECT_NAME}_INCLUDE_DIRS
    ${CMAKE_SOURCE_DIR}/mthread_queue
)

set(${PROJECT_NAME}_LIBS
    mthread_queue
)

set(${PROJECT_NAME}_LIBS_DIRS
    ${CMAKE_BINARY_DIR}/mthread_queue/Debug
)

set(${PROJECT_NAME}_SOURCES
    example.cpp
)

add_executable(${PROJECT_NAME})
target_link_libraries(${PROJECT_NAME} PRIVATE ${${PROJECT_NAME}_LIBS})
target_sources(${PROJECT_NAME} PRIVATE ${${PROJECT_NAME}_SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${${PROJECT_NAME}_INCLUDE_DIRS})
target_link_directories(${PROJECT_NAME} PRIVATE ${${PROJECT_NAME}_LIBS_DIRS})
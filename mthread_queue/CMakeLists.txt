cmake_minimum_required(VERSION 3.21.2)
project(mthread_queue)

set(${PROJECT_NAME}_SOURCES
    mthread_queue.cpp
)

add_library(${PROJECT_NAME} STATIC)
target_sources(${PROJECT_NAME} PRIVATE ${${PROJECT_NAME}_SOURCES})
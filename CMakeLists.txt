cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(asyn-cpp)

add_subdirectory(external)

add_executable(${PROJECT_NAME} 
  src/main.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE
  rxcpp
)


cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(asyn-cpp)

set(CMAKE_GENERATOR "Unix Makefiles" CACHE INTERNAL "" FORCE)

add_subdirectory(external)

set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(Threads REQUIRED)

add_executable(sync_server
  src/server/sync_server.cpp
)


target_include_directories(sync_server PRIVATE
  external
)


target_include_directories(sync_server PRIVATE
  ${include_header}
)

target_link_libraries(sync_server PRIVATE
  rxcpp
  zmq
  cppzmq
  Threads::Threads
)


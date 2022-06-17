include(FetchContent)
set(FETCHCONTENT_QUIET off)
set(FETCHCONTENT_BASE_DIR ${CMAKE_SOURCE_DIR}/external)

# import rxcpp
FetchContent_Declare(rxcpp
   GIT_REPOSITORY https://github.com/ReactiveX/RxCpp.git
   GIT_TAG v4.1.1
)

# import boost asio
FetchContent_Declare(asio
   GIT_REPOSITORY https://github.com/boostorg/asio.git
   GIT_TAG boost-1.79.0
)

# import boost asio
FetchContent_Declare(cppzmq
   GIT_REPOSITORY https://github.com/zeromq/cppzmq.git
   GIT_TAG v4.8.1
)


FetchContent_MakeAvailable(rxcpp asio cppzmq)

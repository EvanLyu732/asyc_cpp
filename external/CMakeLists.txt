include(FetchContent)

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


FetchContent_MakeAvailable(rxcpp asio)

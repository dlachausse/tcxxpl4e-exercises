project(x6)
find_package(Threads REQUIRED)
add_executable(x6_2 x6_2.cpp)
target_link_libraries(x6_2 ${CMAKE_THREAD_LIBS_INIT})
add_executable(x6_3 x6_3.cpp)
add_executable(x6_4 x6_4.cpp)
add_executable(x6_5 x6_5.cpp)



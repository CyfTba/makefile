cmake_minimum_required(VERSION 3.27)

project(makefile)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set(SOURCES
#     ./src/add.cpp 
#     ./src/div.cpp 
#     ./src/main.cpp 
#     ./src/mult.cpp 
#     ./src/sub.cpp
# )
#搜索PROJECT_SOURCE_DIR CMakeLists所在路径内所有文件，
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)
#链接头文件
include_directories(${PROJECT_SOURCE_DIR}/include )

add_executable(makefile ${SRC})

message(STATUS "hello Cmake")
# target_include_directories(makefile
#     PRIVATE 
#         ${PROJECT_SOURCE_DIR}/include)


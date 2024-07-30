cmake_minimum_required(VERSION 3.10) # 设置CMake的最低版本要求

project(MyLibrary) # 项目名称

# 启用测试
enable_testing()

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(demo/string_demo)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/string_tools)



# 添加源文件
set(SOURCES
    string_tools/string_tools.cpp
    string_tools/string_tools.h
    _public.h
    _publicConfig.h
)


# 指定生成动态库
add_library(MyLibrary SHARED  ${SOURCES})

# 指定动态库的输出名称
set_target_properties(MyLibrary PROPERTIES OUTPUT_NAME "public")

# 指定动态库的版本
set_target_properties(MyLibrary PROPERTIES VERSION 1.0 SOVERSION 1)

# 指定动态库的安装路径
install(TARGETS MyLibrary DESTINATION /usr/local/lib)
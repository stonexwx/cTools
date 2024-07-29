cmake_minimum_required(VERSION 3.10) # 设置CMake的最低版本要求

project(MyLibrary) # 项目名称

# 指定生成动态库
add_library(MyLibrary SHARED _public.cpp)

# 指定动态库的输出名称
set_target_properties(MyLibrary PROPERTIES OUTPUT_NAME "public")

# 指定动态库的版本
set_target_properties(MyLibrary PROPERTIES VERSION 1.0 SOVERSION 1)

# 指定动态库的安装路径
install(TARGETS MyLibrary DESTINATION .)
# 寻找动态库
find_library(MyLibrary public PATHS ${CMAKE_SOURCE_DIR}/build)

# 设置可执行文件的输出路径
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

# 头文件路径
include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/string_tools)
# 获取所有的源文件列表
file(GLOB SOURCES "${CMAKE_SOURCE_DIR}/demo/string_demo/*.cpp")

# 循环处理每个源文件，为每个文件创建一个可执行文件
foreach(source_file IN LISTS SOURCES)
    get_filename_component(executable_name "${source_file}" NAME_WE)
    add_executable(${executable_name} ${source_file})
    target_link_libraries(${executable_name} MyLibrary)
endforeach()
cmake_minimum_required (VERSION 2.6)
project (int64)

# The version number.
#set (int64_VERSION_MAJOR 1)
#set (int64_VERSION_MINOR 0)

#include_directories("/usr/local/include")
#link_directories("/usr/local/lib")


# configure a header file to pass some of the CMake settings
# to the source code
#configure_file (
#  "${PROJECT_SOURCE_DIR}/RedisTestConfig.h.in"
#  "${PROJECT_BINARY_DIR}/RedisTestConfig.h"
#  )

# add the binary tree to the search path for include files
# so that we will find RedisTestConfig.h
include_directories("${PROJECT_BINARY_DIR}")

include_directories("${PROJECT_SOURCE_DIR}")


SET(LIBINT64_SRC lint64.c) 
ADD_LIBRARY(int64 SHARED ${LIBINT64_SRC})
ADD_LIBRARY(int64_static STATIC ${LIBINT64_SRC})

# 设置静态库和动态库同名
SET_TARGET_PROPERTIES(int64_static PROPERTIES OUTPUT_NAME "int64") 

# 设置动态库的版本
SET_TARGET_PROPERTIES(int64 PROPERTIES VERSION 1.2 SOVERSION 1) 


# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
#aux_source_directory(. DIR_SRCS)


# add the executable
#add_executable(redis_test ${DIR_SRCS})


#target_link_libraries(redis_test jemalloc)

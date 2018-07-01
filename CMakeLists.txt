SET(CMAKE_BUILD_TYPE "Debug")  

cmake_minimum_required (VERSION 2.6)

add_definitions(-std=c++14)

add_definitions(-D cerr=cout)

project (jvm)

AUX_SOURCE_DIRECTORY(src DIR_SRCS)

AUX_SOURCE_DIRECTORY(src/native DIR_NATIVES)

include_directories("${PROJECT_SOURCE_DIR}/src" "${PROJECT_SOURCE_DIR}/include" "${PROJECT_SOURCE_DIR}/include/native")

add_executable(jvm WIN32
   ${DIR_SRCS}
   ${DIR_NATIVES}
)


AUX_SOURCE_DIRECTORY(src/native DIR_NATIVES)

include_directories("${PROJECT_SOURCE_DIR}/src" "${PROJECT_SOURCE_DIR}/include" "${PROJECT_SOURCE_DIR}/include/native")

add_executable(jvm WIN32
   ${DIR_SRCS}
   ${DIR_NATIVES}
)
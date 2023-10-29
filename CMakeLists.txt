cmake_minimum_required(VERSION 3.0.0)
set(module_name AliasMethod)
project(${module_name} VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_library(${module_name} src/main.cpp )
target_include_directories(
    ${module_name} 
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
add_executable(sampleTest src/main.cpp)
target_link_libraries(sampleTest PUBLIC  ${module_name})

target_compile_features(${module_name} PRIVATE cxx_std_17)
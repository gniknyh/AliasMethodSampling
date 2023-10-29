cmake_minimum_required(VERSION 3.0.0)
set(module_name AliasMethodSampling)
project(${module_name} VERSION 0.1.0 LANGUAGES C CXX)

# Define AliasMethod lib (header-only)
add_library(${module_name} INTERFACE)

# Tell CMake which C++ features we need
target_compile_features(${module_name}
	INTERFACE
		cxx_auto_type
		cxx_decltype
		cxx_deleted_functions
        cxx_std_17
)
target_include_directories(${module_name}
	INTERFACE
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
		$<INSTALL_INTERFACE:${INSTALL_INCLUDE_DIR}>)


add_executable(sampleTest src/main.cpp)
target_link_libraries(sampleTest PUBLIC  ${module_name})

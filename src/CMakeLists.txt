aux_source_directory(. DIR_SRCS)
include_directories(${PROJECT_SOURCE_DIR}/include)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_library(shared_demo SHARED libdemo.cpp)
set_target_properties(shared_demo PROPERTIES LINKER_LANGUAGE CXX OUT_NAME "shared")
set(LIBRARY_OUT_PATH ${PROJECT_SOURCE_DIR}/lib)
add_executable(main main.cpp)
target_link_libraries(main shared_demo)
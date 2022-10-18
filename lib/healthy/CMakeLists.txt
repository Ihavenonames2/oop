add_library(
    healthy
    include/methodsHeader.h
    source/methods.cpp)

set_target_properties(healthy PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(
    healthy PUBLIC
    "include/"
)
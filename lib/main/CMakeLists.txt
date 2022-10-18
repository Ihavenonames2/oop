add_executable(
    ${PROJECT_NAME} 
    source/main.cpp
)

target_link_libraries(
    ${PROJECT_NAME} PUBLIC
    healthy
)

target_include_directories(
    ${PROJECT_NAME} PUBLIC
    "include/"
)
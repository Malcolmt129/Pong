cmake_minimum_required(VERSION 3.10)


project(Pong)

add_subdirectory(src)
add_subdirectory(include)

find_package(SFML REQUIRED COMPONENTS system window graphics network audio REQUIRED)

add_executable(Pong ${SOURCES})

target_link_libraries(Pong sfml-system sfml-window sfml-graphics sfml-network sfml-audio)

target_include_directories(Pong 
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include)






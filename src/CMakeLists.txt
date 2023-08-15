cmake_minimum_required(VERSION 3.27.1)
project(sfmlProj)

file(GLOB_RECURSE SRCS *.cc)
file(GLOB_RECURSE HDRS *.h)
file(GLOB_RECURSE HDRPS *.cc)

add_executable(sfmlProj main.cc ${SRCS} ${HDRS} ${HDRPS})
target_link_directories(sfmlProj PRIVATE ${CMAKE_SOURCE_DIR}/../lib)
target_link_libraries(sfmlProj sfml-graphics sfml-widnows sfml-system Gmethod)

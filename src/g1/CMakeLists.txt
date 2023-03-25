include(s1.cmake)

add_library(g1 INTERFACE)
target_link_libraries(g1 INTERFACE s1)
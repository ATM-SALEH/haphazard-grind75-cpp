cmake_minimum_required(VERSION 3.20)

enable_testing()

add_executable(g1_utest g1.t.cpp)
target_link_libraries(g1_utest PRIVATE g1_s1 GTest::gtest_main)

add_executable(g2_utest g2.t.cpp)
target_link_libraries(g2_utest PRIVATE g2 GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(g1_utest)
gtest_discover_tests(g2_utest)
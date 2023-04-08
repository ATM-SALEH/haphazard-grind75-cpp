add_executable(g1s1_utest s1.t.cpp)
target_link_libraries(g1s1_utest PRIVATE g1s1 GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(g1s1_utest)
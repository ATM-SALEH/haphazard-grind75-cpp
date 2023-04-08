add_executable(g2s1_utest s1.t.cpp)
target_link_libraries(g2s1_utest PRIVATE g2s1 GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(g2s1_utest)
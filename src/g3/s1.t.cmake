add_executable(g3s1_utest s1.t.cpp)
target_link_libraries(g3s1_utest PRIVATE g3s1 GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(g3s1_utest)
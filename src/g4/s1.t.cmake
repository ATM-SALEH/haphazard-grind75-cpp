add_executable(g4s1_utest s1.t.cpp)
target_link_libraries(g4s1_utest PRIVATE g4s1 GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(g4s1_utest)
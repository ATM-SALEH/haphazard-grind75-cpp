#include <s1.h>
#include <gtest/gtest.h>

TEST(G2S1Tests, ExampleTest)
{
    using namespace g2;
    S1 s1;
    ASSERT_EQ(s1.isValid("[{}]"), false);
}
#include <g2.h>
#include <gtest/gtest.h>

TEST(G2Tests, ExampleTest)
{
    G2 g2;
    ASSERT_EQ(g2.greet(), 10);
}
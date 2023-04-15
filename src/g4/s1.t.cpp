#include <s1.h>
#include <gtest/gtest.h>
#include <vector>

using namespace g4;

TEST(G4S1Tests, NoPrice)
{
    S1 s1;
    EXPECT_EQ(s1.maxProfit({}), 0);
}

TEST(G4S1Tests, PricesInAscendingOrder)
{
    S1 s1;
    EXPECT_EQ(s1.maxProfit({7,4,2}), 0);
}

TEST(G4S1Tests, PricesInDescendingOrder)
{
    S1 s1;
    EXPECT_EQ(s1.maxProfit({7,14,21}), 14);
}

TEST(G4S1Tests, PricesWithLocalMinimaMaxima)
{
    S1 s1;
    EXPECT_EQ(s1.maxProfit({7,1,5,3,6,4}), 5);
}
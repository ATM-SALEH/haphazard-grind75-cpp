#include <s1.h>
#include <gtest/gtest.h>

using namespace g2;

TEST(G2S1Tests, WithMatchingCurlyBracesAndBrackets)
{
    S1 s1;
    ASSERT_EQ(s1.isValid("[{}]"), true);
}

TEST(G2S1Tests, WithNonMatchingCurlyBraceAndBrackets)
{
    S1 s1;
    ASSERT_EQ(s1.isValid("[{]"), false);
}

TEST(G2S1Tests, WithOpeningParenthesesOnly)
{
    S1 s1;
    ASSERT_EQ(s1.isValid("[{(["), false);
}

TEST(G2S1Tests, WithInvalidInterleavingParenthesesPairs)
{
    S1 s1;
    ASSERT_EQ(s1.isValid("[{]}"), false);
}

TEST(G2S1Tests, WithEmptyInput)
{
    S1 s1;
    ASSERT_EQ(s1.isValid(""), true);
}

TEST(G2S1Tests, WithNonoverlappingOpenClosePairs)
{
    S1 s1;
    ASSERT_EQ(s1.isValid("[]{}"), true);
}
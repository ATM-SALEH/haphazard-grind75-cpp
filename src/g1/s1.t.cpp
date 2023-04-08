#include "s1.h"
#include <gtest/gtest.h>

// TODO: make these tests parametrized
// TODO: add more tests
TEST(G1S1Tests, ExactlyTwoNumbersInListAreTwoSumCandidate)
{
    // GIVEN
    S1 s1;
    std::vector<int> nums{1, 2, 3, 5, 7};
    int target = 5;

    // WHEN
    Result rs = s1.twoSum(nums, target);
    
    // THEN
    ASSERT_EQ(rs.first, 2);
    ASSERT_EQ(rs.second, 3);
}
#include <s1.h>
#include <unordered_map>

Result S1::twoSum(const std::vector<int>& nums, int target) const
{
    Result result{0u, 0u};
    std::unordered_map<int, unsigned> mapping;
    for (auto it = std::cbegin(nums); it != std::cend(nums); it++)
    {
        auto idx{std::distance(std::cbegin(nums), it) + 1};
        if (auto prev = target - *it; mapping.count(prev))
        {
            result.first = mapping.at(prev);
            result.second = idx;
            return result;
        }
        mapping.emplace(*it, idx);
    }
    return result;
}
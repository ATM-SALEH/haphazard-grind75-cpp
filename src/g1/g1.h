#include <vector>

struct Result
{
    unsigned first;
    unsigned second;
    Result(unsigned f, unsigned s): first(f), second(s)
    {
    }
};

class G1
{
public:
    ~G1() = default;
    virtual Result twoSum(const std::vector<int>& nums, int target) const = 0;
};
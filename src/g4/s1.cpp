#include <s1.h>

namespace g4
{

int S1::maxProfit(const std::vector<int>& prices) const
{
    // 0/1 day price listing, no chance for profit
    if (prices.size() <= 1)
    {
        return 0;
    }
    size_t buyDay = 0;
    size_t sellDay = 0;
    int profit = 0;
    for (size_t i = 1; i < prices.size(); i++)
    {
        // buy price is less than the day selected currently 
        if (prices.at(i) < prices.at(buyDay))
        {
            // pick this one as buy price is lower
            buyDay = i;
        }
        // current day can't be used ot buy stock
        else if (sellDay < buyDay || prices.at(i) > prices.at(sellDay))
        {
            // pick this day as sell price is higher
            sellDay = i;
            profit = std::max(profit, prices.at(sellDay) - prices.at(buyDay));
        }
    }
    return profit;
}

} // end of namespace g4
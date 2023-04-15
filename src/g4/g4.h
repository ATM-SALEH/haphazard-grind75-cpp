#ifndef G4_H_INCLUDED
#define G4_H_INCLUDED
#include <vector>

namespace g4
{

class G4
{
public:
    ~G4() = default;
    virtual int maxProfit(const std::vector<int>& prices) const = 0;
}; // end of class G4

} // end of namespace g4
#endif // G4_H_INCLUDED
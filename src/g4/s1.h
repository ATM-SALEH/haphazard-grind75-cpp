#ifndef S1_G4_H_INCLUDED
#define S1_G4_H_INCLUDED
#include <g4.h>

namespace g4
{

class S1 : public G4
{
public:
    virtual int maxProfit(const std::vector<int>& prices) const override;
}; // end of class G4

} // end of namespace g4
#endif // S1_G4_H_INCLUDED
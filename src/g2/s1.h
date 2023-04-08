#ifndef S1_G2_H_INCLUDED
#define S1_G2_H_INCLUDED
#include <g2.h>

namespace g2
{

class S1 : public G2
{
public:
    virtual bool isValid(const std::string& s) const override;
}; // end of class G2

} // end of namespace g2
#endif
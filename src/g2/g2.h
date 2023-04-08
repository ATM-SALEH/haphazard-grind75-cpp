#ifndef G2_H_INCLUDED
#define G2_H_INCLUDED
#include <string>

namespace g2
{

class G2
{
public:
    ~G2() = default;
    virtual bool isValid(const std::string& s) const = 0;
}; // end of class G2

} // end of namespace g2
#endif
#include <s1.h>
#include <stack>

namespace g2
{

bool S1::isValid(const std::string& s) const
{
    std::stack<char> buffer;
    for (const char c : s)
    {
        if (c == '(')
        {
            buffer.push(')');
        }
        else if (c == '{')
        {
            buffer.push('}');
        }
        else if (c == '[')
        {
            buffer.push(']');
        }
        else
        {
            if (buffer.empty())
            {
                return false;
            }
            if (char top = buffer.top(); top != c)
            {
                return false;
            }
            buffer.pop();
        }
    }
    return buffer.empty();
}

} // end of namespace g2
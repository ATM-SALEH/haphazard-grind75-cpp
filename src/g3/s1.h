#ifndef S1_G3_H_INCLUDED
#define S1_G3_H_INCLUDED
#include <g3.h>

namespace g3
{

class S1 : public G3
{
public:
    virtual ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) const override;
}; // end of class G3

} // end of namespace g3
#endif // S1_G3_H_INCLUDED
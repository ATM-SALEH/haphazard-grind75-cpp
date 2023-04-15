#ifndef G3_H_INCLUDED
#define G3_H_INCLUDED
#include <string>

namespace g3
{

struct ListNode
{
    int d_val;
    ListNode* d_next;
    ListNode(): d_val(0), d_next(nullptr) {}
    ListNode(int val): d_val(val), d_next(nullptr) {}
    ListNode(int val, ListNode* next): d_val(val), d_next(next) {}
};

class G3
{
public:
    ~G3() = default;
    virtual ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) const = 0;
}; // end of class G3

} // end of namespace g3
#endif // G3_H_INCLUDED
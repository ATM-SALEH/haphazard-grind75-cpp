#include <s1.h>

namespace g3
{

ListNode* S1::mergeTwoLists(ListNode* l1, ListNode* l2) const
{
    ListNode* outHead = new ListNode(-1);
    ListNode* ol1 = outHead;
    while (l1 || l2)
    {
        if (l2 == nullptr || l1->d_val <= l2->d_val)
        {
            ol1->d_next = new ListNode(l1->d_val);
            l1 = l1->d_next;
        }
        else if (l1 == nullptr || l1->d_val > l2->d_val)
        {
            ol1->d_next = new ListNode(l2->d_val);
            l2 = l2->d_next;
        }
        ol1 = ol1->d_next;
    }
    return outHead->d_next;
}

} // end of namespace g3
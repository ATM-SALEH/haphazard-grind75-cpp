#include <s1.h>
#include <gtest/gtest.h>
#include <vector>

using namespace g3;

ListNode* makeList(const std::vector<int>& values)
{
    ListNode* out = nullptr;
    ListNode* outc = nullptr;
    for (auto it = std::cbegin(values); it != std::cend(values); it++)
    {
        if (out == nullptr)
        {
            out = new ListNode(*it);
            outc = out;
        }
        else
        {
            outc->d_next = new ListNode(*it);
            outc = outc->d_next;
        }
    }
    return out;
}

void expectMatch(ListNode* res, const std::vector<int>& values)
{
    EXPECT_NE(res, nullptr);
    for (auto it = std::cbegin(values); it != std::cend(values); it++)
    {
        if (res == nullptr)
        {
            FAIL();
        }
        EXPECT_EQ(*it, res->d_val);
        res = res->d_next;
    }
    EXPECT_EQ(res, nullptr);
}

TEST(G3S1Tests, SortMergeEmptyLists)
{
    S1 s1;
    ListNode* res = s1.mergeTwoLists(nullptr, nullptr);
    EXPECT_EQ(res, nullptr);
}

TEST(G3S1Tests, SortMergeFirstListNonEmptySecondListEmpty)
{
    S1 s1;
    ListNode* l1 = makeList({1, 2, 3});
    ListNode* res = s1.mergeTwoLists(l1, nullptr);
    expectMatch(res, {1, 2, 3});
}

TEST(G3S1Tests, SortMergeBothListsNonEmpty)
{
    S1 s1;
    ListNode* l1 = makeList({1, 5, 6, 8, 12});
    ListNode* l2 = makeList({1, 3, 10});
    ListNode* res = s1.mergeTwoLists(l1, l2);
    expectMatch(res, {1, 1, 3, 5, 6, 8, 10, 12});
}
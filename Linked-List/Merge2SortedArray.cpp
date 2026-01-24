#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *temp1 = list1, *temp2 = list2;
    ListNode *l = new ListNode(-1);
    ListNode *res = l;
    while (temp1 && temp2)
    {
        if (temp2->val < temp1->val)
        {
            l->next = temp2;
            temp2 = temp2->next;
        }
        else
        {
            l->next = temp1;
            temp1 = temp1->next;
        }
        l = l->next;
    }
    if (temp1)
        l->next = temp1;
    else
        l->next = temp2;
    res = res->next;
    return res;
}